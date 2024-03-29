#pragma once
#include <stdio.h>
template <class T>
class Singleton{
public:
	static T* getInstance();
	//{
	//	if (m_pInstance == NULL)  //判断是否第一次调用
	//		m_pInstance = new T();
	//	return m_pInstance;
	//}
private:
	static T* m_pInstance;

	//禁止拷贝构造和赋值运算符. The only way is getInstance()
	Singleton(const Singleton& src) {}
	Singleton &operator=(const Singleton& src) {};

	class Garbo   //它的唯一工作就是在析构函数中析构Singleton的实例，所以private
	{
	public:
		~Garbo()
		{
			if (Singleton::m_pInstance)
			{
				delete Singleton::m_pInstance;
				Singleton::m_pInstance = NULL;
			}
		}
	};
	static Garbo garbo;  //定义一个静态成员变量，程序结束时，系统会自动调用它的析构函数，我们不需要访问这个变量，所以不需要初始化

protected:
	//使继承者无法public构造函数和析构函数
	Singleton() {}
	~Singleton() {}


};

template <class T>
T* Singleton<T>::m_pInstance = NULL; //必须初始化这个静态成员，初始化的过程中会分配内存，否则无法访问

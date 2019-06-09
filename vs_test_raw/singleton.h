#pragma once
#include <stdio.h>
template <class T>
class Singleton{
public:
	static T* getInstance();
	//{
	//	if (m_pInstance == NULL)  //�ж��Ƿ��һ�ε���
	//		m_pInstance = new T();
	//	return m_pInstance;
	//}
private:
	static T* m_pInstance;

	//��ֹ��������͸�ֵ�����. The only way is getInstance()
	Singleton(const Singleton& src) {}
	Singleton &operator=(const Singleton& src) {};

	class Garbo   //����Ψһ������������������������Singleton��ʵ��������private
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
	static Garbo garbo;  //����һ����̬��Ա�������������ʱ��ϵͳ���Զ����������������������ǲ���Ҫ����������������Բ���Ҫ��ʼ��

protected:
	//ʹ�̳����޷�public���캯������������
	Singleton() {}
	~Singleton() {}


};

template <class T>
T* Singleton<T>::m_pInstance = NULL; //�����ʼ�������̬��Ա����ʼ���Ĺ����л�����ڴ棬�����޷�����

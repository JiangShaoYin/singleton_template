#pragma once
#include "singleton.h"

template <class T>
T* Singleton<T>::getInstance() {
	if (m_pInstance == NULL)  //判断是否第一次调用
		m_pInstance = new T(); // 调用引入模板的构造方法
	return m_pInstance;
}

//template <class T>
//T* Singleton<T>::m_pInstance = NULL;
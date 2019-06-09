#pragma once
#include "singleton.h"

template <class T>
T* Singleton<T>::getInstance() {
	if (m_pInstance == NULL)  //�ж��Ƿ��һ�ε���
		m_pInstance = new T(); // ��������ģ��Ĺ��췽��
	return m_pInstance;
}

//template <class T>
//T* Singleton<T>::m_pInstance = NULL;
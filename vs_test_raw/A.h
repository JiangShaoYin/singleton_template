#pragma once
#include "Singleton.h"

class A : public Singleton<A>
{
	friend class Singleton<A>; //��Ϊ������getInstance()�� new T() ʱ����õ�A�Ĺ��캯��
public:
	void function();
private:
	A() {};
};


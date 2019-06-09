#pragma once
#include "Singleton.h"

class A : public Singleton<A>
{
	friend class Singleton<A>; //因为基类在getInstance()中 new T() 时会调用到A的构造函数
public:
	void function();
private:
	A() {};
};


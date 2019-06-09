#pragma once
# include "Singleton.h"
# include <iostream>
#include "A.h"

using namespace std;

int main() {
	A* ptr1 = A::getInstance();
	A* ptr2 = A::getInstance();
	cout << ptr1 << "   " << ptr2 << endl;
}
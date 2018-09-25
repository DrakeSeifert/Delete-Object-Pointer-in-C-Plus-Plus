#include <iostream>
#include "./myClass.cpp"

int main()
{
	myClass *ptr;
	ptr = new myClass(32, 32.5);
	delete ptr;
	ptr = new myClass(42, 42.5);
	delete ptr;
	ptr = NULL;

	return 0;
}
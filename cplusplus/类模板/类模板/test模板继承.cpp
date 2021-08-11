#define _CRT_SECURE_NO_WARNINGS 1 
#define _CRT_SECURE_NO_WARNINGS 1 
#include<iostream>
using namespace std;
#include <string>

template<class T>
class Base
{
public:

	T m;
};
template<class T,class T1>
class son :public Base<T>
{
	T1 obj;
};

void test01()
{
	son<int, char>p1;
}
int main()
{

	return 0;
}

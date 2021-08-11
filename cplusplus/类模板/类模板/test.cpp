#define _CRT_SECURE_NO_WARNINGS 1 
#include<iostream>
using namespace std;
#include <string>
template<class NameType,class AgeType=int>
class person
{
public:
	person(NameType name ,AgeType age)
	{
		this->mName = name;
		this->mAge = age;
	}
	void showperson()
	{
		cout << "name: " << this->mName << " age: " << this->mAge << endl;
	}
		NameType mName;
		AgeType	mAge;
};



void test01()
{
	person<string>p1("ËïÎò¿Õ", 999);
	p1.showperson();
}


int main()
{
	test01();
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <string>
using namespace std;
class danli
{
public:
	int age;
	int yanzhi;
	static danli* statics()
	{
		return signle;
	}
private:
	static danli* signle;
	danli()
	{}
	danli(const danli&p)
	{}

};
danli* danli::signle = new danli;
void test01()
{
	danli* p = danli::statics();
	p->age = 10;
	p->yanzhi = 20;
	danli* p1 = danli::statics();
	cout <<p1->age<<" "<<p1->yanzhi << endl;
}
int main()
{
	test01();
	return 0;
}
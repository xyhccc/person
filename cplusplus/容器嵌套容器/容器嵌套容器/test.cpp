#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include <vector>
//#include<string.h>
//#include <stdlib.h>
//#include <string>
using namespace std;
void test01()
{
	vector< vector<int> > v;

	vector<int> v1;
	vector<int> v2;
	vector<int> v3;
	vector<int> v4;
	for (int i = 0; i < 4; i++)
	{
		v1.push_back(1 + i);
		v2.push_back(2 + i);
		v3.push_back(3 + i);
		v4.push_back(4 + i);
	}
	v.push_back(v1);
	v.push_back(v2);
	v.push_back(v3);
	v.push_back(v4);
	for (vector < vector<int> >::iterator it = v.begin(); it != v.end(); it++)
	{
		//(*it)= vector<int>
		for (vector<int>::iterator vit = (*it).begin(); vit != (*it).end(); vit++)
		{
			cout << *vit<<" ";
		}
		cout << endl;
	}
}
int main()
{
	test01();
	return 0;
}

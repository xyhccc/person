#define _CRT_SECURE_NO_WARNINGS 1 
using namespace std;
#include<iostream>;
#include<string>;
//void test01()
//{
//	string s1;
//	//cout << s1<< endl;
//
//	const char* str = "hello world";
//
//	string s2(str);
//	cout << s2 << endl;
//
//	string s3(s2);
//	cout << s3 << endl;
//
//	string s4(5, 'b');
//	cout << s4 << endl;
//	
//	string str4;
//	str4.assign("hello c++");
//	cout << "str4 = " << str4 << endl;
//	str4.insert(1, "111");
//	cout << "str4 = " << str4 << endl;
//
//}
////¸³Öµ
//void test02()
//{
//	string str1;
//	str1 = "hello world";
//	cout << "str1 = " << str1 << endl;
//
//	string str2;
//	str2 = str1;
//	cout << "str2 = " << str2 << endl;
//
//	string str3;
//	str3 = 'a';
//	cout << "str3 = " << str3 << endl;
//
//	string str4;
//	str4.assign("hello c++");
//	cout << "str4 = " << str4 << endl;
//
//	string str5;
//	str5.assign("hello c++", 5);
//	cout << "str5 = " << str5 << endl;
//
//
//	string str6;
//	str6.assign(str5);
//	cout << "str6 = " << str6 << endl;
//
//	string str7;
//	str7.assign(5, 'x');
//	cout << "str7 = " << str7 << endl;
//
//}
//
//int main() {
//
//	test01();
//
//
//	return 0;
//}
//
//void test04()
//{
//	//²éÕÒ
//	string str1 = "abcdefgde";
//
//	int pos = str1.find("de");
//
//	if (pos == -1)
//	{
//		cout << "Î´ÕÒµ½" << endl;
//	}
//	else
//	{
//		cout << "pos = " << pos << endl;
//	}
//
//
//	pos = str1.rfind("de");
//
//	cout << "pos = " << pos << endl;
//
//}
//
//void test077()
//{
//	//Ìæ»»
//	string str1 = "abcdefgde";
//	str1.replace(1, 3, "1111");
//
//	cout << "str1 = " << str1 << endl;
//}
//
////int main() {
//
//	//test01();
//	//test02();
void test01()
{
	string s1;
	const char*str = "abcdefg";
	s1 = str;
	cout <<s1 << endl;

}




int main()
{
	test01();
	return 0;
}
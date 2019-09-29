#include <iostream>
#include <string>
using namespace std;
class String
{
public:
	String(const char* str = "jack")
	{
		_str = (char*)malloc(strlen(str) + 1);
		strcpy(_str, str);
	}
	~String()
	{
		cout << "~String()" << endl;
		free(_str);
	}
private:
	char* _str;
};
int main()
{
	String s1("hello");
	String s2("world");

	s1 = s2;/* ������Ĭ�ϵĿ������캯����ǳ���� */
	system("pause"); 
	return 0;
}
 
 
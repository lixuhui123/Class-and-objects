#include <iostream>
using namespace std;
class test
{
public:
	const int i=4;/* c11 */
	int &ri;
	test(int&a) :i(3), ri(a)/* �����ĳ�ʼ���������ʼ������Ҫ���const��& */
	{

		/* ��ֵ */
	}
};
int main22()
{
	
	system("pause"); 
	return 0;
}
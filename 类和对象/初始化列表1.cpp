//#include <iostream>
//using namespace std;
//class test
//{
//	int m_a;
//	int m_b;
//	test() :m_a(0),m_b(0)
//	{
//
//	}
//	test(int a, int b):m_a (a),
//	m_b (b)
//	{
//		
//	}
//
//};
//int main()
//{
//	
//	system("pause"); 
//	return 0;
//}
#include <iostream>
using namespace std;
class test
{
	int a;
public:
	const int i = 4;/* c11 */
	int &ri;
	test(int&a) :i(3), ri(a)/* �����ĳ�ʼ���������ʼ������Ҫ���const��& */
	{

		/* ��ֵ */
	}
	static int m_s_i;/* ����������ж��������Բ�ͨ��������ã��� */
	 
	 
	//static int op()
	//{
	//	a = 2;/* ������ģ�������thisָ�� */
	//}
	static int op(test &a)
	{
		a.a = 3;
	}
};
int test::m_s_i = 0;
//test::test()
//{
//	m_s_i++;
//}

int main()
{
	test t1;
	cout << t1.m_s_i<<endl;
	test t2;
	cout << t1.m_s_i << endl;
	cout << test::m_s_i << endl;
	cout <<sizeof(test) << endl;

	system("pause"); 
	return 0;
}
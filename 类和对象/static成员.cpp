//#include <iostream>
//using namespace std;
///* 出场率非常高，类在它在，别的成员不一定存在，因为别的成员在实例化的时候才被分配空间 */
//class test
//{
//public:
//	test()
//	{
//		m_a++;
//	}
//	static void p1()
//	{
//		 
//		cout << 1;
//    }
//	void p2()
//	{
//		p1();
//
//		cout << 2;
//	}
//	static int m_a;
//};
//int test::m_a = 0;
//int main()
//{
//	//类在它在，从定义开始就有空间，存在静态区
//	test t;
//	test f;
//	cout << f.m_a;
//	f.p1();
//	system("pause"); 
//	return 0;
//}
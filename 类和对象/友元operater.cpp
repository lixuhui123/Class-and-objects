//#include <iostream>
//using namespace std;
//#include <fstream>//c++的文件操作函数
//class FTest
//{
//	int m_a;
//	int m_b;
//public:
//	FTest() :
//		m_a(0),
//		m_b(0)
//	{
//
//	}
//	FTest(int a, int b) 
//	{
//		m_a = a;
//		m_b = b;
//
//	}
//	void set(int a, int b);/* 类的成员函数，类内声明，类外实现 */
//	friend	ostream & operator << (ostream & os, FTest & data);/* 可以访问私有成员，没有this指针 */
//	friend class FTest2;/* 这个类可以访问私有友元，尽量不要写破坏了类的封装性*/
//	friend istream & operator >> (istream & os, FTest & data);
//
//};
//void FTest::set(int a,int b)
//{
//	m_a = a;
//	m_b = b;
//}
//ostream & operator << (ostream & os, FTest & data)
//{
//	os << data.m_a << " " << data.m_b;
//	return os;
//}/* ostream是一个类os声明了一个类的引用，输出仍然是ostream当中的<<重载实现的，
// 但是它输出的内容可以人为改变 */
//istream & operator >> (istream & os, FTest & data)
//{
//	os >> data.m_a;
//    os >> data.m_b;
//	return os;
//}
//class FTest2
//{
//public:
//	FTest2()
//	{
//		FTest ft(1, 2);
//		cout << ft.m_a;
//	}
//};
///* 让一个外部函数或者外部类访问我的私有成员 ，打破了原有的权限制度，比较危险
//不建议使用，*/
//int main()
//{
//	FTest ft(2,3);
//	ofstream os("1.txt");
//	os << ft;
//	operator<<(cout, ft)<<endl;//有疑问
//	os.close();
//	system("pause"); 
//	return 0;
//}
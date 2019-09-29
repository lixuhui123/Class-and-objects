//#include <iostream>
//using namespace std;
///* 非类的成员函数没有this指针 */
//class test
//{
//	int m_a;
//public:
//	test(int & b) :m_a(b)
//	{
//
//	}
//	test operator++ ();/* int类型的整数才能自增，并且不需要参数 */
//	test operator++(int tmp); //const;
//	test operator--();
//	test operator--(int tmp);/* 返回左值返回引用 */
//	friend ostream & operator <<(ostream & os, test & t);
//
//};
//test test::operator++ ()
//{
//	//return ++this->m_a;
//	////return ++m_a; 
//	  m_a += 1; 
//	  return m_a;
//}
////int operater++()
////{
////
////}
//test test::operator++(int t)
//{
//	/*return m_a++;*/
//	  test tmp = m_a;
//	  m_a += 1; 
//	  return tmp;
//}
//test test::operator--()
//{
//	/*return m_a--;*/
//	test tmp = m_a;
//	m_a -= 1;
//	return tmp;
//}
//test test::operator--(int tmp)
//{
//	/*return --m_a;*/
//	return m_a -= 1;
//}
//ostream & operator <<(ostream & os, test & t)
//{
//	os << t.m_a << endl;
//	return os;
//}
//int main()
//{
//	/* 为防止用户为标准类型重载运算符，
//	重载后的运算符必须至少有一个是用户自定义类型的数据。 */
//	int c = 3;
//	int d = 3;
//	test t(c);
//	++t;
//    cout << t <<endl;
//	 
//	//cout << t.operator--()<<endl;
//	//cout << t.operator--(55) << endl;
//	system("pause"); 
//	return 0;
//}
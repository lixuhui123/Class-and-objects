//#include <iostream>
//using namespace std;
///* ����ĳ�Ա����û��thisָ�� */
//class test
//{
//	int m_a;
//public:
//	test(int & b) :m_a(b)
//	{
//
//	}
//	test operator++ ();/* int���͵������������������Ҳ���Ҫ���� */
//	test operator++(int tmp); //const;
//	test operator--();
//	test operator--(int tmp);/* ������ֵ�������� */
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
//	/* Ϊ��ֹ�û�Ϊ��׼���������������
//	���غ�����������������һ�����û��Զ������͵����ݡ� */
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
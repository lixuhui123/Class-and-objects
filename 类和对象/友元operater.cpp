//#include <iostream>
//using namespace std;
//#include <fstream>//c++���ļ���������
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
//	void set(int a, int b);/* ��ĳ�Ա��������������������ʵ�� */
//	friend	ostream & operator << (ostream & os, FTest & data);/* ���Է���˽�г�Ա��û��thisָ�� */
//	friend class FTest2;/* �������Է���˽����Ԫ��������Ҫд�ƻ�����ķ�װ��*/
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
//}/* ostream��һ����os������һ��������ã������Ȼ��ostream���е�<<����ʵ�ֵģ�
// ��������������ݿ�����Ϊ�ı� */
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
///* ��һ���ⲿ���������ⲿ������ҵ�˽�г�Ա ��������ԭ�е�Ȩ���ƶȣ��Ƚ�Σ��
//������ʹ�ã�*/
//int main()
//{
//	FTest ft(2,3);
//	ofstream os("1.txt");
//	os << ft;
//	operator<<(cout, ft)<<endl;//������
//	os.close();
//	system("pause"); 
//	return 0;
//}
//#include <iostream>
//using namespace std;
//class Date
//{
//	const int i;
//public:
//	Date() :i(3)/* constֻ���ò����б�ķ�ʽ��ʼ�� */
//	{
//
//	}
//	void play()/* Date *this */
//	{
//		cout << "Display ()" << endl;
//		cout << "year:" << _year << endl;
//		cout << "month:" << _month << endl;
//		cout << "day:" << _day << endl << endl;
//
//	}
//	void Display() const/* const Date *this */
//	{
//		 
//		cout << "Display () const" << endl;
//		cout << "year:" << _year << endl;
//		cout << "month:" << _month << endl;
//		cout << "day:" << _day << endl << endl;
//	}
//	/*void Display(const Date * this)  
//	{
//		cout << "Display () const" << endl;
//		cout << "year:" << this->_year << endl;
//		cout << "month:" << this->_month << endl;
//		cout << "day:" << this->_day << endl << endl;
//	}*/
//private:
//	int _year=1; // ��
//	int _month=3; // ��
//	int _day=4; // ��
//};
//void Test()
//{
//	Date d1;
//	d1.Display();
//
//	/*const Date d2;
//	d2.Display();*/
//}
//int main()
//{
//	Test();
//	/* 1. const������Ե��÷�const��Ա������
//2. ��const������Ե���const��Ա������
//3. const��Ա�����ڿ��Ե��������ķ�const��Ա������
//4. ��const��Ա�����ڿ��Ե���������const��Ա������ */
//	/* const������Ե���const��Ա����const�����ܵ��÷�const��Ա������*/
//	/* ��const����ֻ�ܵ��÷�const��Ա���� */
//	/* ��constҲ���Թ��ɺ������أ� */
//	/* ��const������Ե���const��Ա���� */
//	system("pause"); 
//	return 0;
//}

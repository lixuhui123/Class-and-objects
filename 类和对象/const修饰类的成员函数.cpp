//#include <iostream>
//using namespace std;
//class Date
//{
//	const int i;
//public:
//	Date() :i(3)/* const只能用参数列表的方式初始化 */
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
//	int _year=1; // 年
//	int _month=3; // 月
//	int _day=4; // 日
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
//	/* 1. const对象可以调用非const成员函数吗？
//2. 非const对象可以调用const成员函数吗？
//3. const成员函数内可以调用其它的非const成员函数吗？
//4. 非const成员函数内可以调用其它的const成员函数吗？ */
//	/* const对象可以调用const成员函数const对象不能调用非const成员函数，*/
//	/* 非const对象只能调用非const成员函数 */
//	/* ，const也可以构成函数重载， */
//	/* 非const对象可以调用const成员函数 */
//	system("pause"); 
//	return 0;
//}

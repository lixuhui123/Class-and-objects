//#include <iostream>
//using namespace std;
///* 构造函数不仅可以构造与初始化对象，对于单个参数的构造函数，还具有类型转换的作用。 */
/* 增加自己可读性 */
//class Date

//{
//public:
//	/*Date(int year)
//		:_year(year)
//	{
//
//	}*/
//
//	void print()
//	{
//		cout << _year;
//	}
//	explicit Date(int year)
//		:_year(year)
//	{}
//
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//void TestDate()
//{
//	Date d1(2018);
//
//	// 用一个整形变量给日期类型对象赋值
//	// 实际编译器背后会用2019构造一个无名对象，最后用无名对象给d1对象进行赋值
//	d1 = '20';/* 防止隐式类型转换，对于单个参数的构造函数来说。构造函数形参可以类型转换 */
//	d1.print();
//}
//int main()
//{
//	TestDate();
//
//	system("pause"); 
//	return 0;
//}
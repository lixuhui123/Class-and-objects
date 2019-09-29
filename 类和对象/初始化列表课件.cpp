//#include <iostream>
//using namespace std;
///* 【注意】
//	1. 每个成员变量在初始化列表中只能出现一次(初始化只能初始化一次)
//	2. 类中包含以下成员，必须放在初始化列表位置进行初始化：
//	引用成员变量
//	const成员变量
//	类类型成员(该类没有默认构造函数)
//	3. 尽量使用初始化列表初始化，因为不管你是否使用初始化列表，对于自定义类型成员变量，一定会先使
//	用初始化列表初始化。 */
//class Date
//{
//public:
//	Date(int year, int month, int day) : _year(year), _month(month), _day(day)
//	{
//		/* 初始化列表，真正的初始化，只能用括号进行初始化 */
//	}
//
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//class A
//{
//public:
//	A(int a)
//		:_a(a)
//	{}
//private:
//	int _a;
//};
//class B
//{
//public:
//	B(int a, int ref)
//		:_aobj(a)
//		, _ref(ref)
//		, _n(10)
//	{}
//private:
//	A _aobj; // 没有默认构造函数
//	int& _ref; // 引用
//	const int _n; // const 
//};
//int main()
//{
//
//	system("pause");
//	return 0;
//}

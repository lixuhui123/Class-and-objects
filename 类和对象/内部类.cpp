#include <iostream>

using namespace std;
class A
{
public:
	class B
	{
		int b_a = 1;
	}b;
};
int maincd()
{
	/* 住房子 */
	/* 实例化对象是分配内存空间的 */
	/* ::之前一般是类名或者是命名空间 */
	/* 声明在一个类内部的类，属于外部类域中的一员，实例化需要使用域操作符，同时他有
	权限限制（private的类声明，不能在类外初始化）*/
	/* 外部类是内部类的友元，但是内部类不是外部类的友元 */
	cout << sizeof(A::b);
	system("pause"); 
	return 0;
}
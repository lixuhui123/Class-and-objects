#include <iostream>
using namespace std;
class test
{
public:
	const int i=4;/* c11 */
	int &ri;
	test(int&a) :i(3), ri(a)/* 真正的初始化，狭义初始化，主要针对const和& */
	{

		/* 赋值 */
	}
};
int main22()
{
	
	system("pause"); 
	return 0;
}
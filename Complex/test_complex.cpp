#include "Complex.h"
using namespace std;
void test01()
{
	Complex c1(8, 6);
	Complex c2(4, 3);
	Complex c3 = (c1 * c2) / (c1 + c2);
	c3.show();
}
void test02()
{
	Complex c4(3, 3);
	Complex c5(1, 1);
	Complex c6 = c4 + c5;
	c6.show();
	c6 = c4 - c5;
	c6.show();
	c6 = c4 * c5;
	c6.show();
	c6 = c4 / c5;
	c6.show();
}
int main()
{
	test01();
	test02();
	return 0;
}
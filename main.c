
#include <stdio.h>

int main(void)
{
	// 无论哪种类型转换，并没有改变被转换的变量、常量、表达式的类型和值
	// 而是产生转换后的中间结果

	// 自动类型转换
	char ch = 'A';
	int a = ch;   /* 将表数范围小的赋值给表数范围大的，作自动类型转换 */
	unsigned char c = ch;
	float f = 1.2e+10f;

	ch = a;
	// 强制类型转换，表数范围大的赋值给表数范围小的，会有精度的丢失
	a = (int) f;
	printf("a = %d\n", a);

	return 0;
}



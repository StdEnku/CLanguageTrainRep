#include <stdio.h>

int main(void)
{
	float num1;
	float num2;
	float result;
	
	printf("1つ目の浮動小数点数を入力してください。");
	scanf("%f", &num1);
	
	printf("2つ目の浮動小数点数を入力してください。");
	scanf("%f", &num2);
	
	result = num1 + num2;
	printf("1つ目の値と2つ目の値の合計は%f", result);
}
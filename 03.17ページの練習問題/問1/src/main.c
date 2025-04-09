#include <stdio.h>

int main(void)
{
	int lengthX, lengthY, lengthZ;
	
	printf("X軸方向の辺の長さを入力\n");
	scanf("%d", &lengthX);
	
	printf("Y軸方向の辺の長さを入力\n");
	scanf("%d", &lengthY);
	
	printf("Z軸方向の辺の長さを入力\n");
	scanf("%d", &lengthZ);
	
	int result;
	result = lengthX * lengthY * lengthZ;
	printf("立方体の体積=%d\n", result);
	
	return 0;
}
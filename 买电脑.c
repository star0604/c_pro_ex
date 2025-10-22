#include <stdio.h>

int main()
{
	float a;
	float b;
	
	printf("帅哥想买多少台电脑呀？\n");
	scanf("%f",&a);
	b=a*95.125;
	printf("%f台电脑的价格为%f\n",a,b);
	scanf("%f",&b);
	return 0;
}

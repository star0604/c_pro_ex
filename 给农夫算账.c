#include <stdio.h>
int k(char a,int weigh)
{
	switch (a)
	{
		case'W':
		  return weigh * 5;
		case'O':
		  return weigh * 10;
		case'T':
		  return weigh * 7;
		case'C':
		  return weigh * 8;
	}
}
int main()
{
	char a;
	int weigh;
	int b;
	while(b < 1000)
	{
		printf("请输入收入类型（小麦 [W]、洋葱 [O]、西红柿 [T] 或胡萝卜 [C]）：W\n");
		scanf(" %c",&a,1);
		printf("请输入您出售的公斤数:\n");
		scanf(" %d",&weigh);
		b += k(a,weigh);
	}
	
	printf("您已获得%d金币，可以休息一下了\n", b);
	
	return 0;
}

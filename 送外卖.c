#include <stdio.h>
int main()
{
	int a,b,c = 0;
	char d;
	while(1)
	{
	
	   printf("请输入N计算新订单\n");
	   printf("请输入Q结束程序\n");
	   scanf(" %c",&d,1);
	   if(d == 'N')
	   {
		   printf("请输入披萨的数量:");
		   scanf("%d",&a);
		   printf("请输入披萨的配料数量:");
		   scanf("%d",&b);
		   char k;
		   printf("是否需要外送？ (Y/N) : ");
		   scanf(" %c",&k,1);
		   if (k == 'Y')
		   {
		   	  c = a*20 + b*2 +5;
		   }
		   else if (k == 'N');
		   {
		   	c = a*20 + b*2 ;
		   }
		   printf("一共需要%d个金币\n", c);
		   
	   }
	   else if(d == 'Q');
	   {
	   	printf("订单已结束，欢迎下次光临\n");
	   	break;
	   }
   }

}

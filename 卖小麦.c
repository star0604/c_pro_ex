# include <stdio.h>
int main()
{
	int i = 0;
	int a;
	
    while(i<=200)
    {
    	printf("请输入每次卖小麦的收入:");
    	scanf("%d/n",&a);
    	i=i+a;
    }
   printf("可以收摊回家了");
   
	return 0;
}


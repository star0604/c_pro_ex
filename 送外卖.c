#include <stdio.h>
int main()
{
	int a,b,c = 0;
	char d;
	while(1)
	{
	
	   printf("������N�����¶���\n");
	   printf("������Q��������\n");
	   scanf(" %c",&d,1);
	   if(d == 'N')
	   {
		   printf("����������������:");
		   scanf("%d",&a);
		   printf("��������������������:");
		   scanf("%d",&b);
		   char k;
		   printf("�Ƿ���Ҫ���ͣ� (Y/N) : ");
		   scanf(" %c",&k,1);
		   if (k == 'Y')
		   {
		   	  c = a*20 + b*2 +5;
		   }
		   else if (k == 'N');
		   {
		   	c = a*20 + b*2 ;
		   }
		   printf("һ����Ҫ%d�����\n", c);
		   
	   }
	   else if(d == 'Q');
	   {
	   	printf("�����ѽ�������ӭ�´ι���\n");
	   	break;
	   }
   }

}

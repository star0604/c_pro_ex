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
		printf("�������������ͣ�С�� [W]����� [O]�������� [T] ����ܲ� [C]����W\n");
		scanf(" %c",&a,1);
		printf("�����������۵Ĺ�����:\n");
		scanf(" %d",&weigh);
		b += k(a,weigh);
	}
	
	printf("���ѻ��%d��ң�������Ϣһ����\n", b);
	
	return 0;
}

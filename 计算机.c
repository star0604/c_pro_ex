#include <stdio.h>

int main()
{
	float a;
	float b;
	char c;
    
    printf("����˧������� + - * / ��һ��\n");
    scanf("%c", &c);
    
    printf("��˧�������һ����\n");
	scanf("%f",&a); 
	printf("��˧������ڶ�����\n");
	scanf("%f",&b); 
	//1ʹ��switch���֧ѡ����� 
    switch(c){
    	case '+':
    	printf("�ӷ��Ľ����%f����ӭ˧���´ι���\n",a+b);
    	break; //ִ����case����break�������switch�ṹ 
    	case '-':
    	printf("�����Ľ����%f����ӭ˧���´ι���\n",a-b);
    	break;
    	case '*':
    	printf("�˷��Ľ����%f����ӭ˧���´ι���\n",a*b);
    	break;
    	case '/':
    	printf("�����Ľ����%f����ӭ˧���´ι���\n",a/b);
    	break;
			
	}
	return 0; 
}

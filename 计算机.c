#include <stdio.h>

int main()
{
	float a;
	float b;
	char c;
    
    printf("请问帅哥想计算 + - * / 哪一种\n");
    scanf("%c", &c);
    
    printf("请帅哥输入第一个数\n");
	scanf("%f",&a); 
	printf("请帅哥输入第二个数\n");
	scanf("%f",&b); 
	//1使用switch多分支选择语句 
    switch(c){
    	case '+':
    	printf("加法的结果是%f，欢迎帅哥下次光临\n",a+b);
    	break; //执行完case后，用break语句跳出switch结构 
    	case '-':
    	printf("减法的结果是%f，欢迎帅哥下次光临\n",a-b);
    	break;
    	case '*':
    	printf("乘法的结果是%f，欢迎帅哥下次光临\n",a*b);
    	break;
    	case '/':
    	printf("除法的结果是%f，欢迎帅哥下次光临\n",a/b);
    	break;
			
	}
	return 0; 
}

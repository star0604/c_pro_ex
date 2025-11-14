#include <stdio.h>

int main() 
{
    int a, b;
    int i = 0;
    
    printf("输入一个数字(0-9): ");
    scanf("%d", &a);  
    printf("输入一个自然数: ");
    scanf("%d", &b);
    
    while(b > 0) 
	{
        if(b % 10 == a) {
            i = i + 1;
        }
        b /= 10;
    }
    
    printf("数字 %d 在这个自然数中出现了 %d 次\n", a, i);
    
    return 0;
}


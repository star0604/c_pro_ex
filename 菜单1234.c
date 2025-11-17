#include <stdio.h>
#include <string.h>
#include <stdlib.h>//可以使用exit函数了 

void a();//Login Verification
void menu();//Show Menu
void study();//我要好好学习
void girl();//我要女朋友
void money();//我要变有钱
void oldman();//我要变成技术大佬

int x = 0;//Record password error attempts
char mima1[7] = "888888";

int main()
{
	a();
	menu();
	
	int choice;
	while(1){
		printf("Please enter your choice (1-4):\n");
		scanf("%d",&choice);
		
	switch (choice) {
            case 1:
                study();
                break;
            case 2:
                girl();
                break;
            case 3:
                money();
                break;
            case 4:
                oldman();
                break;
}
		menu();//Return to Menu
	}
	
	return 0;
}

void a(){
	char mima2[7];
	printf("please enter your password:\n");
	
	while(x<3){
		scanf("%s",mima2);//!!!!!!这里为什么不需要“&” 
		
		if (strcmp(mima2, mima1) == 0){
			printf("登录成功！\n");
			return;
		} else{
			x++;
			 printf("密码错误，请重新输入！\n");
		}
	}
    printf("you are a bad boy\n");
    exit(0);

}
void menu(){
	printf("\n--- 菜单 ---\n");
    printf("1. 我要好好学习\n");
    printf("2. 我要女朋友（男朋友）\n");
    printf("3. 我要变有钱\n");
    printf("4. 我要变成技术大佬\n");
}

void study(){
	int b;
	int i,j;
	printf("Please enter a positive integer:\n");
	if (scanf("%d", &b) != 1 || b <= 0){
		 printf("Care for mentally retarded children, we stay together.\n");
	}else{
		printf("The multiplication table is as follows");
		//下面是乘法表 
        for ( i = 1; i <= b; i++) {
            for ( j = 1; j <= i; j++) {
            printf("%d*%d=%d\t", j, i, i*j);
        }
        printf("\n");
    }
	}
	  getchar();//消耗换行符 
}

void girl(){
	printf("吾日三省吾身，高否，帅否，富否，否，滚去学习\n");
	getchar();
}

void money(){
	printf("有钱后想干什么？\n");
    printf("A. 找女朋友\n");
    printf("B. 买同济版高等数学，好好学习\n");
    
    char choice1;
    scanf("%c",&choice1);
    
    switch(choice1){
    	case'A':
    	case'a':
    		girl();
    		break;
    	case'B':
    	case'b':
    		study();
    		break;
	}
}

void oldman(){
	printf("你为什么学技术？\n");
    printf("A. 为了变有钱\n");
    printf("B. 因为我热爱学习\n");
    
    char choice2;
    scanf("%c",&choice2);
    
     switch(choice2){
    	case'A':
    	case'a':
    		girl();
    		break;
    	case'B':
    	case'b':
    		study();
    		break;
	}
}

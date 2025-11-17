#include <stdio.h>

struct student{
	char a[52];//name
	char b[66];//gender
	char c[34];//student number
};

void x(){
	struct student *p;
	struct student *q;
	struct student g;
	g = *p;
	*p = *q;
	*q = g; 

}

int main(){
	struct student stu1,stu2;
	printf("请输入学生1的姓名、性别和学号：\n");
	scanf("%s %s %s\n",stu1.a,stu1.b,stu1.c);
	printf("请输入学生2的姓名、性别和学号：\n");
	scanf("%s %s %s\n",stu2.a,stu2.b,stu2.c);
	
	printf("学生1 _姓名：%s，性别：%s，学号：%s\n", stu1.a, stu1.b, stu1.c);
    printf("学生2 _姓名：%s，性别：%s，学号：%s\n", stu2.a, stu2.b, stu2.c);

    x(&stu1,&stu2);
    
    printf("交换以后的名单");
    printf("学生1 _姓名：%s，性别：%s，学号：%s\n", stu1.a, stu1.b, stu1.c);
    printf("学生2 _姓名：%s，性别：%s，学号：%s\n", stu2.a, stu2.b, stu2.c);

}

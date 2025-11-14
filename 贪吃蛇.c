#include <stdio.h>
int main()
{
    int she; 
    she = 3;
    

    printf("请依次输入食物的大小（输入负数结束）：\n");

    int food;
    while (1) {
        scanf("%d", &food);

        if (food < 0) {
            break;
        }

        if (food >= she) {
            printf("蛇在吃比它大的食物时死了。总长度为 %d 米\n", she);
            return 0;
        } else {
            she += food;
            printf("蛇存活，当前长度为 %d 米\n", she);
        }
    }

    printf("蛇未死亡，最终长度为 %d 米\n", she);

    return 0;
}


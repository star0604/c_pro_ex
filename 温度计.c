#include <stdio.h>

int main() {
    float fahrenheit, celsius;

    // 提示用户输入华氏温度
    printf("请输入华氏温度：");
    scanf("%f", &fahrenheit);

    // 使用公式计算摄氏温度
    celsius = (5.0 / 9.0) * (fahrenheit - 32);

    // 输出转换结果，保留两位小数
    printf("%.2f 华氏度 = %.2f 摄氏度\n", fahrenheit, celsius);

    return 0;
}



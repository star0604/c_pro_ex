#include <stdio.h>

int main() {
    float fahrenheit, celsius;

    // ��ʾ�û����뻪���¶�
    printf("�����뻪���¶ȣ�");
    scanf("%f", &fahrenheit);

    // ʹ�ù�ʽ���������¶�
    celsius = (5.0 / 9.0) * (fahrenheit - 32);

    // ���ת�������������λС��
    printf("%.2f ���϶� = %.2f ���϶�\n", fahrenheit, celsius);

    return 0;
}



/*************************************************************************
	> File Name: 11.digit.c
	> Author: AoWei Duan
	> Mail: d17630542859@163.com
	> Created Time: 2024年04月28日 星期日 15时34分59秒
 ************************************************************************/

#include <stdio.h>

void printf_digit(int x) {
    for (int i = 31; i >= 0; i--) {
        printf("%c", (x & (1 << i) ? '1' : '0'));
        /*
        if (x & (1 << i)) {
            printf("1");
        } else {
            printf("0");
        }
        */
    } 
    printf("\n");
    return ;
}

int main() {

    int a = 5, b = 3;
    printf("a = "); printf_digit(a);
    printf("b = "); printf_digit(b);
    printf("a & b = "); printf_digit(a & b);
    printf("a | b = "); printf_digit(a | b);
    printf("a ^ b = "); printf_digit(a ^ b);
    a ^= b;
    b ^= a;
    a ^= b;
    printf("a = "); printf_digit(a);
    printf("b = "); printf_digit(b);
    printf("~a = "); printf_digit(~a);
    printf("~b = "); printf_digit(~b);
    printf("-b = %d\n", ~b + 1);
    return 0;
}

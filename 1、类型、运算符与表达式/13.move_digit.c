/*************************************************************************
	> File Name: 13.move_digit.c
	> Author: AoWei Duan
	> Mail: d17630542859@163.com
	> Created Time: 2024年05月02日 星期四 18时23分06秒
 ************************************************************************/

#include <stdio.h>

void print_digit(int x) {
    for (int i = 31; i >= 0; i--) {
        printf("%c", (x & (1 << i)) ? '1' : '0');
    }
    printf("\n");
}

int main() {
    int a = 1279813123, b = -a;
    printf("a = "); print_digit(a);
    printf("b = "); print_digit(b);
    printf("a << 1 = "); print_digit(a << 1);
    printf("a >> 1 = "); print_digit(a >> 1);
    printf("b << 1 = "); print_digit(b << 1);
    printf("b >> 1 = "); print_digit(b >> 1);


    return 0;
}

/*************************************************************************
	> File Name: 12.test-4.c
	> Author: AoWei Duan
	> Mail: d17630542859@163.com
	> Created Time: 2024年04月28日 星期日 16时00分27秒
 ************************************************************************/

#include <stdio.h>

void print_digit(int x) {
    for (int i = 31; i >= 0; i--) {
        printf("%c", (x & (1 << i) ? '1' : '0'));
    }
    printf("\n");
}

int main() {
    int a, b = 1;
    scanf("%d", &a);
    //printf("%d\n", a & (-a));
    print_digit(a);
    for (int i = 0; i <= 31; i++) {
        if ((1 << i) & a) {
            print_digit(b);
            printf("%d\n", b);
            break;
        } else {
            b *= 2;
        }
    }
    return 0;
}

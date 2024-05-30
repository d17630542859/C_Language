/*************************************************************************
	> File Name: HZOJ_101.c
	> Author: AoWei Duan
	> Mail: d17630542859@163.com
	> Created Time: 2024年04月05日 星期五 14时42分49秒
 ************************************************************************/

#include <stdio.h>

int main() {
    int a;
    long long sum = 0;
    scanf("%d", &a);
    while (a > 0) {
        sum += a % 10;
        a /= 10;
    }
    printf("%lld\n", sum);
    return 0;
}

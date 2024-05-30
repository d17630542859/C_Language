/*************************************************************************
	> File Name: HZOJ_90.c
	> Author: AoWei Duan
	> Mail: d17630542859@163.com
	> Created Time: 2024年04月05日 星期五 14时33分18秒
 ************************************************************************/

#include <stdio.h>

int main() {
    int a, num[4] = {0}, i = 0;
    scanf("%d", &a);
    while (a > 0) {
        num[i++] = a % 10;
        a /= 10;
    }
    for (int j = i; j > 0; j--) {
        printf("%d\n", num[j - 1]);
    }


}

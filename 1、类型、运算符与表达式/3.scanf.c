/*************************************************************************
	> File Name: 3.scanf.c
	> Author: AoWei Duan
	> Mail: d17630542859@163.com
	> Created Time: 2024年04月27日 星期六 10时48分00秒
 ************************************************************************/

#include <stdio.h>

int main() {
    int a, b, n;
    n = scanf("%d%d", &a, &b);
    printf("a = %d b = %d, n = %d\n", a, b, n);
    printf("format scanf, input %%dabc%%d:");
    n = scanf("%dabc%d", &a, &b);
    printf("a = %d b = %d, n = %d\n", a, b, n);


    return 0;
}

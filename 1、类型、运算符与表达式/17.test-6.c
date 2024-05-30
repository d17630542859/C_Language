/*************************************************************************
	> File Name: 17.test-6.c
	> Author: AoWei Duan
	> Mail: d17630542859@163.com
	> Created Time: 2024年05月02日 星期四 19时49分12秒
 ************************************************************************/

#include <stdio.h>
#include <math.h>
int main() {
    double a;
    scanf("%lf", &a);
    printf("%lf\n", a / 180.0 * acos(-1));

    return 0;
}


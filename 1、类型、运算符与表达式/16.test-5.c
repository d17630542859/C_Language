/*************************************************************************
	> File Name: 16.test-5.c
	> Author: AoWei Duan
	> Mail: d17630542859@163.com
	> Created Time: 2024年05月02日 星期四 19时42分22秒
 ************************************************************************/

#include <stdio.h>
#include <math.h>
int main() {

    double a = 1.0;
    scanf("%lf", &a);
    printf("%lf^%lf = %lf\n", a, 1.0 / 3.0, pow(a, 1.0 / 3.0));


    return 0;
}

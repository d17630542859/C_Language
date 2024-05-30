/*************************************************************************
	> File Name: 15.math.c
	> Author: AoWei Duan
	> Mail: d17630542859@163.com
	> Created Time: 2024年05月02日 星期四 19时30分22秒
 ************************************************************************/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main() {

    printf("pow(2, 3) = %lf\n", pow(2.0, 3.0));
    printf("sqrt(2) = %lf\n", sqrt(2));
    printf("ceil(4.01) = %lf\n", ceil(4.01));
    printf("floor(4.99) = %lf\n", floor(4.01));
    printf("abs(-65) = %d\n", abs(-65));
    printf("fabs(-65) = %lf\n", fabs(-65.03));
    printf("acos(-1) = %lf\n", acos(-1));

    return 0;
}

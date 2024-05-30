/*************************************************************************
	> File Name: 7.sscanf.c
	> Author: AoWei Duan
	> Mail: d17630542859@163.com
	> Created Time: 2024年04月27日 星期六 18时11分31秒
 ************************************************************************/

#include <stdio.h>

int main() {
    char s[100] = "123 456 789";
    int a, b, c;
    sscanf(s, "%d%d%d", &a, &b, &c);
    printf("%d %d %d\n", a,b,c);
    return 0;
}

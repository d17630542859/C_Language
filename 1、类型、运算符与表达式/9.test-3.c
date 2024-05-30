/*************************************************************************
	> File Name: 9.test-3.c
	> Author: AoWei Duan
	> Mail: d17630542859@163.com
	> Created Time: 2024年04月27日 星期六 18时21分33秒
 ************************************************************************/

#include <stdio.h>

int main() {
    char s[100];
    char str[106];
    int n = 0;
    scanf("%[^\n]", s);
    n = sprintf(str, "| %s |", s);
    for (int i = 0; i < n; i++) printf("-");
    printf("\n");
    printf("| %s |\n", s);
    for (int i = 0; i < n; i++) printf("-");
    printf("\n");
    



    return 0;
}

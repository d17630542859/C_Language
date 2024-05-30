/*************************************************************************
	> File Name: 8.sprintf.c
	> Author: AoWei Duan
	> Mail: d17630542859@163.com
	> Created Time: 2024年04月27日 星期六 18时13分52秒
 ************************************************************************/

#include <stdio.h>

int main() {
    char str[100] = "192.168.1.245";
    int a, b, c, d;
    sscanf(str, "%d.%d.%d.%d", &a, &b, &c, &d);
    sprintf(str, "%d:%d:%d:%d", a, b, c, d);
    printf("%s\n", str);


    return 0;
}

/*************************************************************************
	> File Name: 5.test-2.c
	> Author: AoWei Duan
	> Mail: d17630542859@163.com
	> Created Time: 2024年04月27日 星期六 11时10分34秒
 ************************************************************************/

#include <stdio.h>

int main() {

    char str[100] = "hello world";
    printf("%s\n", str);
    scanf("%[^\n]s", str);
    printf("%s\n", str);

    return 0;
}

/*************************************************************************
	> File Name: HZOJ_97.c
	> Author: AoWei Duan
	> Mail: d17630542859@163.com
	> Created Time: 2024年04月05日 星期五 14时39分29秒
 ************************************************************************/

#include <stdio.h>

int main() {
    int n;
    long long sum = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    printf("%lld\n", sum);



    return 0;
}

/*************************************************************************
	> File Name: 10.operator.c
	> Author: AoWei Duan
	> Mail: d17630542859@163.com
	> Created Time: 2024年04月28日 星期日 15时10分14秒
 ************************************************************************/

#include <stdio.h>

#define PRINT(stmt, func) {\
    printf("%s\n", #stmt);\
    stmt;\
    func;\
}

int main() {
    
    int a = 5, b = 2, c = 7, d;
    printf("a = %d. b = %d, c = %d\n", a, b, c);
    PRINT(a = c, printf("a = %d, b = %d, c = %d\n", a, b, c))
    PRINT(d = a + c, printf("d = %d\n", d));
    PRINT(d = a - b, printf("d = %d\n", d));
    PRINT(d = a * b, printf("d = %d\n", d));
    PRINT(d = a / b, printf("d = %d\n", d));
    PRINT(d = (-a) / b, printf("d = %d\n", d));
    return 0;
}

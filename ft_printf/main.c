#include "ft_printf.h"
#include <stdio.h>

 int main()
 {
    int x  = printf("%  :t ht yefv r", 2147483647);
    printf("\n");
    printf("%d",x);
    // ft_printf(" %c %c %c :", '0', 0, '1');
    // printf("\n");
    // printf("%d", x);
 }
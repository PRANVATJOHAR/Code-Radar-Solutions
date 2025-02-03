#include <stdio.h>



int main() {
    unsigned int num;
    scanf("%f",&num);
    printf("%d\n",__builtin_clz(num) );
    return 0;
}
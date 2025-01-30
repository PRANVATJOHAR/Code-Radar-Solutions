#include <stdio.h>


int main() {
int a,b,N;
scanf("%d %d",&a,&b);
N = a ^ (1<< b);
printf("%d", N);
    return 0;
}
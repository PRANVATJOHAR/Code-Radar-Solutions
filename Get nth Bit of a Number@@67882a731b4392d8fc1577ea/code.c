#include <stdio.h>
int getNthBit(int num, int n) {
    return (num >> n) & 1;
}


int main() {
    int num, n;
    scanf("%d %d", &num, &n);

    printf("%d\n",getNthBit(num,n));
    return 0;
}
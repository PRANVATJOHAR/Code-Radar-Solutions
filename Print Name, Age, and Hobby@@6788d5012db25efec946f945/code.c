#include <stdio.h>

int main() {
    char a[34];
    int b;
    char c[34];
    scanf("%s %d %s", a, &b, c);
    printf("Name: %s\nAge: %d\nHobby: %s",a,b,c);
    return 0;
}
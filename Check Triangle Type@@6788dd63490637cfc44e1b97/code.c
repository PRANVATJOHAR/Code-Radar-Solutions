#include <stdio.h>
int main() {
    int a , b, c;
    scanf("%d %d %d", &a, &b, &c);
    if(a==b && b==c && c==a){
        printf("Equilateral\n");
    } else if ( a == b || b == c || c == a){
        printf("Isosceles");
    }
    else{
        printf("Scalene");
    }
    

}



int main() {
    printf("%s", welcome());
    return 0;
}
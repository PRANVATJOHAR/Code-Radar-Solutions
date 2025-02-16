#include <stdio.h>
int main() {
    int a,b;
    scanf("%d %d",&a,&b);
  
    if(a==b*2)
    printf("Yes");
    else if(a*2==b)
    printf("Yes");
    
    else 
    printf("No");
    return 0;


}
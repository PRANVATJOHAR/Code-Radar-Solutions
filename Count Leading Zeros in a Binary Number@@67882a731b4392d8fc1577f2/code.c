#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int count=0;
    while((1&(1<<n)==1) && (n!=1)){
        count++;
    }printf("%d,count");
    return 0;
}
#include <stdio.h>
int main() {
    char color;
    scanf("%c",&color);
    switch(color){
        case 'R':
        printf("Stop");
        break;
        case 'G':
        printf("Go");
        break;
        case 'y':
        printf("Slow Down");
        break;
        default;
        printf("Invalid input");
        break;


    }
    return 0;
}
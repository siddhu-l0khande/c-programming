#include<stdio.h>

int main(){
    int X=10,y=5;
    switch (X>y && X+y>0){
        case 1:
        printf("HII\n");
        break;
        case 2:
        printf("Bye\n");
        break;
        default:
        printf("Hello Bye\n");
    }

    return 0;
}
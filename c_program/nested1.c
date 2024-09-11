#include <stdio.h>

int main(){

    int a=15;
    printf("a:%d",a);

    if (a%2==0)
    {
        if(a%3==0){
            printf("The number is divisible by both 2and 3");

        }
        else{
            printf("The number is dividble by 2 but not 3");

        }
        
    }
    else{
        if(a%3==0){
            printf("divisible by  3 but not 2") ;

        }else{
            printf("not divible by 2and not divisible by 3");
        }
    }

    return 0;
}
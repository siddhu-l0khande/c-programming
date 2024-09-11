#include <stdio.h>

int main(){

    int score=85;

    if(score>=60){
        if(score>=90){
            printf("The GRADE isA");
        }
        else if(score>=80){
            printf("The GRADE is B");
        }
     else{
         printf("The GRADE is C");
     }
    }
    else{
        printf("fail");

    }


    return 0;
}
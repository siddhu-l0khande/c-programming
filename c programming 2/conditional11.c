#include <stdio.h>

int main(){

    int score ;
    printf("Enter your score ");
    scanf("%d",&score);

     score>80 ? printf("you are score is High "): ( score>=50 ? printf("moderate"):printf("Low"));

     return 0;
}
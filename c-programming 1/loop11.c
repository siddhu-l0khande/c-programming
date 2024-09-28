#include <stdio.h>

int main(){
    int rows;
    printf("Welcome to the pattern loop world");
    printf("Enter the number of rews \n");
    scanf("%d",&rows);

    for (int i = 1; i <= rows; i++)
    {
        for(int j=0 ; j<i; j++){
            printf("* ");
        }



        printf("\n");
    }

    return 0;
    


}
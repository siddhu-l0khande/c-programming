#include <stdio.h>
int main(){

    int rows;
    printf("welcome to the loop of the patterns\n");
    printf("Enter the number of rows \n");
    scanf("%d",&rows);

    for(int i =1; i<=rows ;i++){
        printf("\n");
        for( int k = 0; k < rows -i;k++){
            printf("  ");
        }
        for(int j =0;  j < i;j++){
            printf(" *");
        }
    }
    
    
    return 0;
}


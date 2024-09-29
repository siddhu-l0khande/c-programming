#include <stdio.h>
int main(){
    int rows;
    printf("welcome to the loops of the patterns \n");
    printf("Enter the numbetr of the rows \n");
    scanf("%d",&rows);

    for( int i=0; i< rows;i++){
        printf("\n");
        for(int j = 0; j < rows -i; j++){
            printf("*  ");
        }
    }

    return 0;
}
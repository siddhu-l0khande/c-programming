#include <stdio.h>
int main(){
    int num;
    printf("welcome to the loop of the fibonaccii series\n");
    printf("Enter the number  \n");
    scanf("%d",&num);

    printf(" 0");
    if (num>0){
        printf(" 1");
    }
    int first = 0;
    int next = 1;
    while ( first+next <= num)
    {
        int temp = first+ next;
        printf("  %d",temp);
        first = next;
        next = temp;
    }

    return 0;
    
}
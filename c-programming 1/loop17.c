#include <stdio.h>

int main(){

    int num;
    printf("welcome to the loop of the priime numbers \n");
    printf("Enter the n umber :\n");
    scanf("%d",&num);

    int i =2;
    while ( i < num)
    {
       if(num % i == 0){
        printf("%d is the not prime number \n", num);
        return 0;

       }
       i++;
    }

    printf(" the number %d is the prime number ",num);

    return 0;
    
}
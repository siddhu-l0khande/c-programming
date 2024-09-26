#include <stdio.h>

int main(){

    int num;
    printf("welcome to the odd numbers summing loop\n");
    printf("enter tthe number :\n");
    scanf("%d",&num);

    int i=1;
    int sum=0;
    while (i<=num)
    {
      sum +=i;
      i +=2;
    }
    printf("the sum of the odd numers 1 to %d is %d",num,sum);

    return 0;
}
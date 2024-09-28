#include <stdio.h> 
int main(){

    int num;
    printf("welcome to the sum of the digits of the integer\n");
    printf("Enter the number:\n");
    scanf("%d",&num);
    // logic: 
    // we have to take first remainder of the num and add the remainder
    // then devide by 10 for droop the last digit 

    int sum=0;
    while(num>0){
        sum += num%10;
      num = num/10;
 }
 printf("the sum of the digit is %d",sum);

 return 0;
}
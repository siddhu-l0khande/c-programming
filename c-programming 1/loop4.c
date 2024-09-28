#include <stdio.h>

int main(){
    int num1,num2;

    printf("welcome to the world of the loops of LCM \n");
    printf("Enter the numbers:\n");
    scanf("%d%d",&num1,&num2);

    int min = num1>num2?num1:num2;  //MIN JITNA BADA NUMBER HAI UTNA MINIMUM
    int max = num1*num2;  //JITNA DONO KA MUL HAI UTNA MAX
    int i = min; //min value asign ki i mai accha lagne ke liye 
    while(i<=max){
          if (i%num1==0 && i%num2==0){
            printf("the locm is %d",i);
          }
          break;
    }
    return 0;

}
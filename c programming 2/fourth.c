#include<stdio.h>

int main(){
 int a,b,c,sum;
 float avg;
  
printf("ENTER THE NUMBERS :");
scanf("%d%d%d",&a,&b,&c);
sum = (a+b+c);
avg = sum/3;
printf("the avg is :%f",avg);

return 0;

}
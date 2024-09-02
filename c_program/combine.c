#include <stdio.h>
int main(){

    int one,two,add,sub,mul;
    float div;
printf("Enter the number  :");
scanf("%d%d",&one,&two);

add =one+two;
sub =one-two;
mul =one*two;
div =one/two;
printf("the addition is :%d \n",add);
printf("the substraction is :%d \n",sub);
printf("the multiplication is %d \n",mul);
printf("the division is : %.2f \n",div);

return 0;
}
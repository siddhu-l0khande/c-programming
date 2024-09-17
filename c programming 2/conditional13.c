#include <stdio.h>

int main(){
     float one,two;
     char opr;
     

     printf("enter the values :");
     scanf("%f",&one);
     printf("enter the values :");
     scanf("%f",&two);
     printf("Enter the operator (+,-,*,/):");
     scanf(" %c ", &opr);

      float res;
     switch (opr)
     {
     case '+':
     res=one+two;
     break;
     case '-':
     res=one-two;
        break;
     case '*':
    res=one*two;

        break;
     case '/':
     res=one/two;

        break;
     
    }printf("the result is :%f",res);


    
return 0;


}
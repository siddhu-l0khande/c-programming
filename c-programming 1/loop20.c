#include<stdio.h>

int main(){
     int num;
     printf("welcome to the loop of the infinite loop\n");

     while (1)
     {
        printf("Eneter the number: ");
        scanf("%d",&num);
        if(num ==  -1) break;
        printf("the sqaure of the number is : %d\n",num*num);
     }

     return 0;
     
     
}
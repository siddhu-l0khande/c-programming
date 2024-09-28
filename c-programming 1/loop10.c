#include<stdio.h>

int main(){
    int num;
    printf("Welcome ton the world of loops \n of palindrom numbers \n");
    printf("Enter the number \n");
    scanf("%d",&num);

    int rev=0;
    int copy =num;
    while(copy>0){
        rev = (rev*10)+(copy%10);
        copy /=10;
    }

    if (rev==num){
        printf("the number %d is the palindrom\n",num);

    }else{
        printf("the number %d is not the palinddrom\n",num);
    }

    return 0;
}
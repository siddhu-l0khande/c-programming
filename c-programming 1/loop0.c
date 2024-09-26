#include <stdio.h>
int main(){
    int num;
    printf("welcome too the loop of the table \n");
    printf("Enter the number :\n");
    scanf("%d",&num);

    int i=1;
    while (i<=10)
    {
        printf("%d X %d = %d\n",num,i,num*i);
        i++;
    }

    return 0;
}
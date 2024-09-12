#include <stdio.h>

int main(){

    int length,breath;

    printf("Enter the lenghth of the triangle :");
    scanf("%d",&length);
    printf("Enter the breath of the triangle :");
    scanf("%d",&breath);

    float area = 0.5*length*breath;

    printf("The area of the triangle is : %.2f",area);


    return 0;
}

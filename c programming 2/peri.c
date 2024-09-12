#include<stdio.h>

int main(){

    int A,B,C,D;
    int perimeter ;

    printf("Enter the side of Quadrilateral :");
    scanf("%d%d%d%d",&A,&B,&C,&D);

   perimeter = A+B+C+D;

    printf("the perimeter of quadrilateral is :%d",perimeter);

    return 0;

}
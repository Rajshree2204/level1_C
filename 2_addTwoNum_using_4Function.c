#include <stdio.h>

float add(float x,float y){
   
    return(x+y);
}
int main()
{
    float add(float x,float y);
    float sum,a,b;
    printf("Enter two numbers to perform addition.\nEnter the first number for addition:");
    scanf("%f",&a);
    printf("Enter the second number for addition:");
    scanf("%f",&b); 
    sum=add(a,b);
    printf("Addition of the two numbers is: %.3f",sum); 

    return 0;
} 

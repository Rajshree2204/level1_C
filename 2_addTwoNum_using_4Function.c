#include <stdio.h>

float add(float x,float y){
   
    return(x+y);
}

void output(float* sum){
   printf("The sum of two numder is: %.2f",*sum); 
}


int main()
{
    float add(float x,float y); 
    float a,b,sum;
    printf("Enter two numbers for addition\n");
    printf("Enter the first number for addition: ");
    scanf("%f",&a);
    printf("Enter the second for addition: ");
    scanf("%f",&b);
    sum=add(a,b);
    void output();
    output(&sum);
    return 0; 
}

#include <stdio.h>

float add(float x,float y){
   
    return(x+y);
}

void output(float* sum,float* A,float* B){ 
   printf("The sum %f and %f is: %.2f",*A,*B,*sum); 
}

float intput1(float a){
    printf("Enter two numbers for addition\n");
    printf("Enter the first number for addition: ");
    scanf("%f",&a);
    return(a);
}

float intput2(float b){
   
    printf("Enter the second number for addition: ");
    scanf("%f",&b);
    return(b);
}

int main()
{
    float add(float x,float y); 
    float A,B,sum,x,y;
    float intput1(float a);
    float intput2(float b);
    A=intput1(x);
    B=intput2(y); 
    sum=add(A,B);
    void output(float* sum,float* A, float* B);
    output(&sum,&A,&B);  
    return 0; 
}

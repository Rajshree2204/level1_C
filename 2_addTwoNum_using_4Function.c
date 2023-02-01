#include <stdio.h>

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

float add(float x,float y){
   
    return(x+y);
}

void output(float* sum,float* A,float* B){ 
   printf("The sum of %.2f and %.2f is: %.3f",*A,*B,*sum); 
}


int main() 
{
    float add(float x,float y); 
    float A,B,sum,a,b;
    float intput1(float a);
    float intput2(float b);
    void output(float* sum,float* A, float* B);
    A=intput1(a); 
    B=intput2(b); 
    sum=add(A,B);
    output(&sum,&A,&B);  
    return 0; 
}

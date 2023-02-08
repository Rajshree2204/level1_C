#include <stdio.h>

float intput1(char num[3]){
    float a;
    printf("Enter %s for addition: ",num);
    scanf("%f",&a);
    return(a);
}

float add(float x,float y){
   
    return(x+y);
    
}

void output(float sum,float A,float B){ 
   printf("The sum of %.2f and %.2f is: %.3f",A,B,sum); 
}


int main() 
{
    float A,B,sum;
    //printf("Enter two numbers for addition\n");
    A=intput1('1st'); 
    B=intput1('2nd'); 
    sum=add(A,B);
    output(sum,A,B);  
    return 0; 
}

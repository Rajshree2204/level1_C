#include <stdio.h>

float intput1(int n,char ord_suffix[3]){
    float a;
    printf("Enter %d%s for addition: ",n,ord_suffix);
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
    A=intput1(1,"st"); 
    B=intput1(2,"nd"); 
    sum=add(A,B);
    output(sum,A,B);  
    return 0; 
}

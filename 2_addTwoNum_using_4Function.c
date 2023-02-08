#include <stdio.h>

float input_ith_num(int ith_num, char ord_suffix[3]){
    float a;
    printf("Enter %d%s number for addition: ",ith_num,ord_suffix);
    scanf("%f",&a);
    return(a);
}

float add(float x,float y){
   
    return(x+y);
    
}

void output_sum(float sum,float num1,float num2){ 
   printf("The sum of %.2f and %.2f is: %.3f",num1,num2,sum); 
}


int main() 
{
    float num1,num2,sum;
    num1= input_ith_num(1,"st"); 
    num2= input_ith_num(2,"nd"); 
    sum=add(num1,num2);
    output_sum(sum,num1,num2);  
    return 0; 
}

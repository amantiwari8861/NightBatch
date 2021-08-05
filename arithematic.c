#include<stdio.h>

int main()
{
    int num,num2,result=0;
    printf("enter the numbers \n \a");
    scanf("%d%d",&num,&num2);
    //arithematic operators
    // result=num+num2;
    // result=num-num2;
    // result=num*num2;
    // result=num/num2;
    result=num % num2; //modulus 4 remainder

    printf("the result is %d \n",result);
    // \n means next line
    // \t tabular space 
    // \a for bell sound
    
    return 0;
}
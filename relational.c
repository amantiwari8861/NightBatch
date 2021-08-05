#include<stdio.h>

int main()
{
    int num,num2,result=0;
    printf("enter the numbers \n \a");
    scanf("%d%d",&num,&num2);
   
    // result=num<num2;
    // result=num<=num2;
    // result=num>num2;
    // result=num>=num2;
    // result=num==num2;  //comparing both values
    result=num!=num2;  // ( 10 != 5 ) => ?  (  != not equal to )

    printf("the result is %d \n",result);
    
    return 0;
}
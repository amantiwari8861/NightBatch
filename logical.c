#include<stdio.h>

int main()
{
    int marks,result=0;
    printf("enter the numbers \n \a");
    // scanf("%d",&marks);
   
    //    || (or)    &&(and)     !(not)
    // result= marks>0 || marks<33 ; //let marks = 45
    // result= marks>0 && marks<33 ; //let marks = 45
    result= !(0);
    printf("the result is %d \n",result);
    
    return 0;
}
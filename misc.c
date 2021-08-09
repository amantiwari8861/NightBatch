#include<stdio.h>

int main(int argc, char const *argv[])
{
    //increment/decrement operators
    int num=10;
    // printf(" the num is %d \n",++num); //pre-increment
    // printf(" the num is %d \n",--num); //pre-decrement

    // printf(" the num is %d \n",num++); //post-increment
    // printf(" the num is %d \n",num); 
    // printf(" the num is %d \n",++num); 
    printf("the size of int is %d \n",sizeof(int));

    int x,y,sum;
    sum=(x=10,y=20,x+y);
    printf("the sum is %d \n",sum);


    return 0;
}

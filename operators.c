#include<stdio.h>
#include<stdbool.h>
int main(int argc, char const *argv[])
{
    // -2^n-1  to  (2^n-1)-1
    //n = number of bits 
    //int = 2  (16 bit ),4 (32 or 64 bit)   (size in bytes)
    //char = 1
    //float = 4
    //double = 8
    //1 byte = 8 bits
    //range of int ==> n=4*8 ==>32 ==> -2,14,74,83,648 to 2,14,74,83,647
    // long ax = 1234567890;
    // short s = 4043;
    // int num=2147483647;
    // bool b1=true;
    // bool b2=false;
    // bool isAlive=true;
    bool isAlive;
    // printf(" int %d\n char %d\n float %d\n double %d\n",sizeof(int),sizeof(char),sizeof(float),sizeof(double));
    // printf("long %d\n short %d\n boolean %d\n num= %d \n",sizeof(long),sizeof(short),sizeof(bool),num);
    // printf(" %d \n",ax);
    // printf(" %d \n",s);
    // printf(" %d \n",b1);
    // printf(" %d \n",b2);
    scanf("%d",&isAlive);
    if (isAlive==true)
    {
        printf("zinda hai !");
    }
    else
    {
        printf("zinda nahi hai !");
    }
    return 0;
}
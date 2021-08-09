#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num=10,num2=25;
    //10 -> 01010
    //25 -> 11001
    // 10 & 25 -> 01000 =>8
    // 10 | 25 ->  => 24
    // printf(" %d  \n",10 & 25);
    // printf(" %d  \n",10 | 25);
    unsigned char a=10; // 1010 ->
    unsigned int num3=10;
    // printf(" %d  \n",~10);//-11 (wrong)
    printf(" %d  \n",a=~a); // true
    // printf(" %d  \n",~num3);// -11 (wrong)
    // printf(" %d  \n",num3=~num3);// -11 (wrong)
    //10 -> 0000 1010  => 0000 0001 => 1
    printf("right shift %d \n",10>>3);
    //10 -> 0000 1010  => 0101 0000 => 80
    printf("left shift %d \n",10<<3);
    return 0;
}

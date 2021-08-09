#include<stdio.h>
int main()
{ 
    int N;
    printf("enter the size of array \n");
    scanf("%d",&N);

    int A[N],XORSum=0;
    printf("enter the of elements \n");
    for (int i = 0; i < N; i++)
    {
        scanf("%d",&A[i]);
    }
    printf("choose the subset \n");
    int choice[N/2],flag=0;
    char again;
    int run=1;
    for (int i = 0; i < N/2 && run==1; i++)
    {
        scanf("%d",&choice[i]);
        fflush(stdin);
        for (int j = 0; j < N; j++)
        {
            if(choice[i] == A[j])
            flag=1;
        }
        if(flag==0)
        {
            printf("given element is not present in array A \n");
            break;
        }
        XORSum ^=choice[i];
        printf("\nwanna enter again [y/n] : ");
        again=getchar();
        if(again=='y'||'Y')
        run=1;
        else {
        run=0;
        break;}
    }
        printf("\n Xor Sum is %d \n",XORSum);
}
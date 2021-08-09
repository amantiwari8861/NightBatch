#include<stdio.h>

int main()
{
    int N;

    printf("enter the size of array \n");
    scanf("%d",&N);

    int A[N];
    printf("enter the of elements \n");
    for (int i = 0; i < N; i++)
    {
        scanf("%d",&A[i]);
    }
    printf("choose the subset \n");
    int choice[N/2],flag=0;
    for (int i = 0; i < N/2; i++)
    {
        scanf("%d",&choice[i]);
        for (int j = 0; j < N; j++)
        {
            if(choice[i] == A[i])
            flag=1;
        }
        if(flag==0)
        {
            printf("given element is not present in array A \n");
        }

    }
    //choose N/2



    return 0;
}
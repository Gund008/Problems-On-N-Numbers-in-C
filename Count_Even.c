//Write a Program Accept N number from user and return Count of Even number.

#include<stdio.h>
#include<stdlib.h>

int CountEven(int *Arr,int iSize)
{
    int i=0;
    int iEvenCnt=0;

    for(i=0;i<iSize;i++)
    {
        if((*Arr % 2)==0)
        {
            iEvenCnt++; 
        }
        *Arr++;
    }
    return iEvenCnt;
}

int main()
{
    int *ptr=NULL;
    int iLength=0,i=0;
    int iRet=0;

    printf("Enter the Size of elements:\n");
    scanf("%d",&iLength);

    ptr=(int*)malloc(iLength * sizeof(int));

    printf("Enter the Elements of Array:\n");
    for(i=0;i<iLength;i++)
    {
        scanf("%d",&ptr[i]);
    }

    iRet=CountEven(ptr,iLength);
    printf("Even Count :%d\n",iRet);
    free(ptr);
    return 0;

}

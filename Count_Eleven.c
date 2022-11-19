/*
Accept N number from user and return frequency of 11 from it.

Input: N: 6
       Elements:85 66 3 15 93 88
Output: 0

Input: N: 6
       Elements:85 11 3 15 11 111
Output:
*/

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[],int ilength)
{
    int iCnt=0,iEvenCnt=0;
   
    for(iCnt=0;iCnt<ilength;iCnt++)
    {
        if(Arr[iCnt]==11)
        {
           iEvenCnt=iEvenCnt + 1;  //ieven++
        }
    }
    return iEvenCnt;
}

///////////////////////////////////////////////////////////////////////////////////////
int main()
{
    int *ptr=NULL,iSize=0,iCnt=0;
    int iRet=0;

    printf("Enter the Number:\n");
    scanf("%d",&iSize);

    ptr=(int*)malloc(iSize * sizeof(int));

    if(ptr == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements:\n",iSize);   
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
         scanf("%d",&ptr[iCnt]);
    }
    iRet=Frequency(ptr,iSize);

    printf(" Frequency is:%d",iRet);

    free(ptr);

    return 0;
}
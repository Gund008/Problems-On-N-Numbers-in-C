/*
Accept N number from user and accept one another number as no,return frequency of No from it.

Input: N: 6
       NO:66
       Elements:85 66 3 66 93 88
Output: 2

Input: N: 6
       NO:12
       Elements:85 11 3 15 11 111
Output:0
*/

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[],int ilength,int iNo)
{
    int iCnt=0,iFrqCnt=0;
   
    for(iCnt=0;iCnt<ilength;iCnt++)
    {
        if(Arr[iCnt]==iNo)
        {
           iFrqCnt=iFrqCnt + 1;  //ieven++
        }
    }
    return iFrqCnt;
}

///////////////////////////////////////////////////////////////////////////////////////
int main()
{
    int *ptr=NULL,iSize=0,iCnt=0;
    int iRet=0,iValue=0;

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

    printf("Enter the number for Frequency findout\n");
    scanf("%d",&iValue);

    iRet=Frequency(ptr,iSize,iValue);

    printf(" Frequency is:%d",iRet);

    free(ptr);

    return 0;
}
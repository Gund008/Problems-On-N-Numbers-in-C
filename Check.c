/*
Accept  N number from user and check whether that numbers Contains 11 in it or not
Input:  N: 6
        Elements:85 66 11 80 93 88
Output: 11 is Present

Input : N: 6
        Elements: 85 66 3 80 93 88

Output: 11 is absent
*/

#include<stdio.h>
#include<stdlib.h>
#define TRUE 1   //macro-replacement Preprocessor
#define FALSE 0

typedef int BOOL;
BOOL Check(int Arr[],int ilength)
{
    int iCnt=0;
    int iNo=0;

    for(iCnt=0;iCnt<ilength;iCnt++)
    {
        if(Arr[iCnt]==11)
        {
             iNo++;       
             break;
             //iNo=iNo + 1;  
        }
    }

    if(iNo==1)
    {
        return TRUE;  //Failure
    }
    else
    {
        return FALSE ;
    }
}

///////////////////////////////////////////////////////////////////////////////////////
int main()
{
    int *ptr=NULL,iSize=0,iCnt=0;
    BOOL bRet=FALSE;

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
    bRet=Check(ptr,iSize);
    if(bRet==TRUE)
    {
        printf("11 is Present ");
    }
    else
    {
        printf("11 is absent");
    }
   
    free(ptr);

    return 0;
}
/*
Accept N number from user and return diffrence between summation of even elements and summation of odd elements.
Input N:   6
      Elements:85  66 3  80 93  88
Output :53 (234 - 181)

*/

#include<stdio.h>
#include<stdlib.h>

int  Diffrence(int Arr[],int ilength)
{
    int iCnt=0,iSum=0;
    int iEven=0,iOdd=0;
    int iDiff=0;

    for(iCnt=0;iCnt<ilength;iCnt++)
    {
        if((Arr[iCnt]%2)==0)
        {
            iEven=iEven + Arr[iCnt];
        }
        else 
        {
            iOdd=iOdd +Arr[iCnt];
        }
    }
   return iDiff=iEven - iOdd;
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
    iRet=Diffrence(ptr,iSize);

    printf("Summation of even and odd number is %d",iRet);

    free(ptr);

    return 0;
}
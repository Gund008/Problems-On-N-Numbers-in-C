#include<stdio.h>
#include<stdlib.h>

int CountEven(int *Arr,int iSize)
{
    int iCnt=0,iEven;
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if((*Arr % 2)==0)
        {
           iEven++; 
        }
        Arr++;

    }
    return iEven;
}
///////////////////////////////////////////////////
int main()
{
    int iLength=0;
    int *ptr=NULL;
    int iCnt=0;
    int iRet=0;

    printf("Please enter the size of array:\n");
    scanf("%d",&iLength);

    ptr=(int*)malloc(iLength * sizeof(int));

    printf("Enter the element in pointer:\n");
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
         scanf("%d",&ptr[iCnt]);
    }
    iRet=CountEven(ptr,iLength);
    printf("Count of Even Number from Array:%d\n",iRet);

    return 0;

}
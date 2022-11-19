#include<stdio.h>
#include<stdlib.h>

int Frequency(int *Arr,int iSize,int iNo)
{
    int i=0,iSum=0,iFreq=0;
    int iEvenSum=0,iOddSum=0;

    for(i=0;i<iSize;i++)
    {
        if(*Arr== iNo)
        {
            iFreq++;
        }
        *Arr++;
    }
   return iFreq;
}

int main()
{
    int *ptr=NULL;
    int iLength=0,i=0;
    int iRet=0,iValue=0;

    printf("Enter the Size of elements:\n");
    scanf("%d",&iLength);

    ptr=(int*)malloc(iLength * sizeof(int));

    printf("Enter the Elements of Array:\n");
    for(i=0;i<iLength;i++)
    {
        scanf("%d",&ptr[i]);
    }
    printf("Please enter the Frequency Number:\n");
    scanf("%d\n",&iValue);
    iRet=Frequency(ptr,iLength,iValue);
    printf("Frequency:%d\n",iRet);
    
    free(ptr);
    return 0;

}
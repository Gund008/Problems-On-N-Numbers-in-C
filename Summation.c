/Accept N number from user and return the Summation of all Array element

#include<stdio.h>
#include<stdlib.h>

int Summation(int Arr[],int iSize)
{
    int i=0;
    int iSum=0;

    for(i=0;i<iSize;i++)
    {
        iSum=iSum + Arr[i];
    }
   return iSum;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////

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
    iRet=Summation(ptr,iLength);
    printf("Summation of Array Element:%d\n",iRet);
    
    free(ptr);
    return 0;

}
Footer
© 2022 GitHub, Inc.
Footer navigation
Terms
#include<stdio.h>
#include<stdlib.h>

int Maximum(int Arr[],int iSize)
{
    int i=0;
    int iMax=Arr[0];

    for(i=0;i<iSize;i++)
    {
        if(Arr[i]>iMax)
        {
           iMax=Arr[i];
        }
    }
   return iMax;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////
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
    iRet=Maximum(ptr,iLength);
    printf("Maximum number from Array:%d\n",iRet);
    
    free(ptr);
    return 0;

}
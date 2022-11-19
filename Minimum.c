/Accept N number from user and return the maximum number.

#include<stdio.h>
#include<stdlib.h>

int Minimum(int Arr[],int iSize)
{
    int i=0;
    int iMin=Arr[0];

    for(i=0;i<iSize;i++)
    {
        if(Arr[i]<iMin)
        {
           iMin=Arr[i];
        }
    }
   return iMin;
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
    iRet=Minimum(ptr,iLength);
    printf("Maximum number from Array:%d\n",iRet);
    
    free(ptr);
    return 0;

}
Footer
© 2022 GitHub, Inc.
Footer navigation
Terms

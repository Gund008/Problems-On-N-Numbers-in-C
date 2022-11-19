//Write a Program Accept N number from user and return Avrage.

#include<stdio.h>
#include<stdlib.h>

float Average(int Arr[],int iSize)
{
    int i=0;
    int iSum=0;

    for(i=0;i<iSize;i++)
    {
        iSum=iSum + Arr[i];
    }
    return iSum/iSize;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    int *ptr=NULL;
    int iLength=0,i=0;
    float fRet=0;

    printf("Enter the Size of elements:\n");
    scanf("%d",&iLength);

    ptr=(int*)malloc(iLength * sizeof(int));

    printf("Enter the Elements of Array:\n");
    for(i=0;i<iLength;i++)
    {
        scanf("%d",&ptr[i]);
    }

    fRet=Average(ptr,iLength);
    printf("Average is:%f\n",fRet);
    free(ptr);
    return 0;

}
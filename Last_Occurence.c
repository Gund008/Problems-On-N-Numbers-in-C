
#include<stdio.h>
#include<stdlib.h>

int CheckOccurence(int Arr[],int iSize,int iNo)
{
    int i=0,iSum=0,ipos=-1;
    
    for(i=1;i<iSize;i++)
    {
        if(Arr[i]== iNo)
        {
            ipos=i;
        }
    }
   return ipos;
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
    iRet=CheckOccurence(ptr,iLength,iValue);
 
    if(iRet==-1)
    {
        printf("There is no %d in the Array\n",iValue);
    }
    else
    {
        printf("%d is occured in the Array at last index %d\n",iValue,iRet);
    }
    free(ptr);
    return 0;

}
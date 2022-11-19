/*
Accept N number from user and return and Display all such elements which are Multiples of 11
Input N:   6
      Elements:85  66 3  55 93  88
Output : 66 55 88


*/

#include<stdio.h>
#include<stdlib.h>

void  Display(int Arr[],int ilength)
{
    int iCnt=0;
    int iNo=0;

    for(iCnt=0;iCnt<ilength;iCnt++)
    {
        if((Arr[iCnt] % 11)==0)
        {
            printf("%d\t",Arr[iCnt]);
        }
          
    }
}

///////////////////////////////////////////////////////////////////////////////////////
int main()
{
    int *ptr=NULL,iSize=0,iCnt=0;
   
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
    Display(ptr,iSize);

    free(ptr);

    return 0;
}
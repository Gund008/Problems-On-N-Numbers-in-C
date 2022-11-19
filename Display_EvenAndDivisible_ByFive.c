/*
Accept N number from user and return and Display all such elements which are Even and divisible by 5.
Input N:   6
      Elements:85  66 3  80 93  88
Output : 80


*/

#include<stdio.h>
#include<stdlib.h>

void  Display(int Arr[],int ilength)
{
    int iCnt=0;
    int iNo=0;

    for(iCnt=0;iCnt<ilength;iCnt++)
    {
        if(((Arr[iCnt]%2)==0) && (Arr[iCnt]%5)==0)
        { 
            iNo=Arr[iCnt];
            printf(" Divisible by Even Number and five: %d\t",iNo);
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
//Write a Program Accept N number from user and display Count of Even and Odd NUmber 

#include<stdio.h>
#include<stdlib.h>

void EvenOddCount(int *Arr,int iSize)
{
    int i=0;
    int iEvenCnt=0,iOddCnt=0;

    for(i=0;i<iSize;i++)
    {
        if((*Arr % 2)==0)
        {
            iEvenCnt++; 
        }
        else 
        {
            iOddCnt++;
        }
        *Arr++;
    }
    printf("Number of Even Elements:%d\n",iEvenCnt);
    printf("Number of Odd Elements:%d\n",iOddCnt);
  
}
//////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int *ptr=NULL;
    int iLength=0,i=0;

    printf("Enter the Size of elements:\n");
    scanf("%d",&iLength);

    ptr=(int*)malloc(iLength * sizeof(int));

    printf("Enter the Elements of Array:\n");
    for(i=0;i<iLength;i++)
    {
        scanf("%d",&ptr[i]);
    }

    EvenOddCount(ptr,iLength);
    
    free(ptr);
    return 0;

}
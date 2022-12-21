/*
Accept N number from user and display all such numbers which contains 3 digits in it,

Input:N:
     Elements: 8225 665 3 76 953  858
Output: 665 953 858
*/

#include<stdio.h>
#include<stdlib.h>
  
   int ChkArray(int iNo) 
   {
       int iDigit=0;
       int iCnt=0;

      while(iNo!=0)      //Travel Digit
      {
        iDigit=iNo % 10;
        iCnt=iCnt + 1;
        iNo=iNo / 10;
      }
      return iCnt;
   }

   void DigitThree(int Arr[],int iSize)
   {
       int iCnt=0;
       int iRet=0;
       for(iCnt=0;iCnt<iSize;iCnt++)  //Traval Array
       {
           iRet=ChkArray(Arr[iCnt]);

           if(iRet==3)
           {
             printf("%d\t",Arr[iCnt]);
           }
       }
   }


//////////////////////////////////////////////////////////////////////////////////////
int main()
{
    int *ptr=NULL,iSize=0,iCnt=0;
    int iRet=0,iValue=0;

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
    DigitThree(ptr,iSize);

    free(ptr);

    return 0;
}
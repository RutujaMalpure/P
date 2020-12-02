/*
    Problem Statement: Accept number from user and display below pattern.

    Input : 5
    Output : A B C D E
*/
 #include<stdio.h>
    void Display(int iNo)
    {
        int iCnt=0,j=65;
        
        for(iCnt=1;iCnt<=iNo;iCnt++)
            {
                printf("%c\t",j);
                j++;
            } 
    }
int main()
{
    int iValue1=0;
   printf("enter number");
   scanf("%d",&iValue1);
    Display(iValue1);
   return 0;
}

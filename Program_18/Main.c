/*
    Accept number of rows and number of columns from user and display
below pattern.
Input : iRow = 5 iCol = 5
Output : 1 2 3 4 5
        -1 -2 -3 -4 -5
        1 2 3 4 5
        -1 -2 -3 -4 -5
        1 2 3 4 5
*/
 #include<stdio.h>
    void Pattern(int iRow,int iCol)
    {
        int i=0,j=0;
        for(i=1;i<=iRow;i++)
        {
            if(i%2!=0)
            {
            for(j=1;j<=iCol;j++)
            {   
                
                printf("%d\t",j);
                
            }
            printf("\n");
            }
            else
            {
            for(j=1;j<=iCol;j++)
            {   
                printf("%d\t",-j);
            }
            printf("\n");  
            }
        }
    }
int main()
{
    int iValue1=0,iValue2=0;
    printf("enter number of rows and colums");
    scanf("%d %d",&iValue1,&iValue2);
    Pattern(iValue1,iValue2);
   return 0;
}

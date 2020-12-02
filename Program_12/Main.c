/*
    Accept number of rows and number of columns from user and display below
pattern.
Input : iRow = 4 iCol = 4
Output : A B C D
        a b c d
        A B C D
        a b c d
*/
 #include<stdio.h>
    void Pattern(int iRow,int iCol)
    {
        int i=0,j=0;
        for(i=1;i<=iRow;i++)
        {
            if(i%2==0)
            {
            int k=97;
            for(j=1;j<=iCol;j++)
            {   
                printf("%c\t",k);
                k++;
            }
            printf("\n");
            }
            else
            {
              int l=65;
            for(j=1;j<=iCol;j++)
            {   
                printf("%c\t",l);
                l++;
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

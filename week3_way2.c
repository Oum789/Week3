#include <stdio.h> 
int main()
{
    int n;
    int i = 1;
    int j = 1;
    printf("Enter number : ");
    scanf("%d",&n);
    while(i<=n)
    {
        while(j<=n)
        {
            int x = i%10;
            int y = j%10;
            if((x==1||x==3||x==5||x==7||x==9)&&(y==1||y==3||y==5||y==7||y==9))
            {
                printf("*");
            }
            else if((x==0||x==2||x==4||x==6||x==8)&&(y==0||y==2||y==4||y==6||y==8))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
            ++j;
        }
        j=1;
        printf("\n");
        ++i;
    }
    return 0;
}

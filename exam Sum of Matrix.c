#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int a1[n][m];
    int a2[n][m];
    int a3[n][m];
    int i,j,k;;
    printf("Enter the first matrix\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
             printf("\n");
         //printf ("a1[i][j]::\t");
        scanf("%d",&a1[i][j]);
        }

    }
    printf("\n\n");
    printf("Enter the second matrix\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
             printf("\n");
         //printf ("a2[i][j]::\t");
        scanf("%d",&a2[i][j]);
        }

    }
    printf("\n\n");

   printf("The sum of matrix\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
         a3[i][j]=a1[i][j]+a2[i][j];
        }

    }
    printf("\n\n");
    printf("New  matrix is \n");
    for(i=0;i<n;i++)
    {
         printf("\n");
        for(j=0;j<m;j++)
        {
         printf(" %d",a3[i][j]);
        }

    }
    printf("\n\n");

}


















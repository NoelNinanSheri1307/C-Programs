#include <stdio.h>
main()
{
    int n;
    printf("Enter the number of rows: \n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=i;j<=n;j++)
        {
             printf("  ");
        }
        for(int k=1;k<i;k++){
            printf("* ");
        }
        for(int l=1;l<=i;l++){
            printf("* ");
        printf("\n");
    }
}
}





#include <stdio.h>
int main()
{
    int p,c,b,m,cs;
    printf("Enter the marks for the subjects in the order \n Physics \n Chemistry \n Biology \n Mathematics \n Computer Science \n");
    scanf("%d%d%d%d%d",&p,&c,&b,&m,&cs);
    int avg=(p+c+b+m+cs)/5;
    printf("Average is %d \n",avg);
    if (avg<35)
    {
        printf("Sorry, You could not pass this course \n'");
    }
    else if (avg>=35 && avg <=50)
    {
        printf("Keep Trying! You achieved Third Class \n");
    }
    else if (avg>=50 && avg <=60)
    {
        printf("Good Job! You achieved Second Class \n");
    }
    else if (avg>=60 && avg <=70)
    {
        printf("Very Good! You achieved First Class \n");
    }
    else if (avg>=70 && avg <=100)
    {
        printf("Remarkable! You achieved Distinction! \n");
    }
}

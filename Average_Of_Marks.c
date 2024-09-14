/*4. Write a C program to input marks of five subjects’ physics, chemistry, biology, maths, and computer science.
    Calculate the average and display class according to the following.
                                            AVERAGE RESULT
                                >=35 and <=50 Third Class
                                >50 and <=60 Second Class
                                >60 and <=75 First Class
                                >75 and <=100 Distinction
                                <35 Fail*/
#include <stdio.h>
void main()
{
    int p,c,b,m,cs;
    float avg;
    printf("Enter the marks the student obtained in Physics: \n");
    scanf("%d",&p);
    printf("Enter the marks the student obtained in Chemistry: \n");
    scanf("%d",&c);
    printf("Enter the marks the student obtained in Biology: \n");
    scanf("%d",&b);
    printf("Enter the marks the student obtained in Mathematics: \n");
    scanf("%d",&m);
    printf("Enter the marks the student obtained in Computer Science: \n");
    scanf("%d",&cs);
    avg=(p+c+m+b+cs)/5;
    printf("The average of the student based on marks scored in these 5 subjects is: %.2f \n",avg);
    if(avg<35)
        printf("Sorry, please repeat this course...you couldn't pass the course");
    else if(avg>=35 && avg<=50)
        printf("Keep Trying, You have scored Third Class.");
    else if(avg>=50 && avg<=60)
        printf("Good Job, You have scored Second Class.");
    else if(avg>=60 && avg<=75)
        printf("Excellent, You have scored First Class.");
    else if(avg>=75 && avg<=100)
        printf("Remarkable. You have achieved Distinction!");
}


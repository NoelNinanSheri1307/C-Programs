#include <stdio.h>
#include <string.h>
struct student
{
    char name[100];
    int roll;
    float cgpa;
};
void main()
{
    struct student s1;
    printf("Enter the roll number of the student: \n");
    scanf("%d",&s1.roll);
    printf("Enter the CGPA of the student: \n");
    scanf("%f",&s1.cgpa);
    strcpy(s1.name,"Noel Ninan Sheri");
    printf("Roll number of the student is: %d\n",s1.roll);
    printf("Name of the student is: %s\n",s1.name);
    printf("CGPAof the student is: %f\n",s1.cgpa);
}
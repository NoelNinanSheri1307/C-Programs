#include<stdio.h>
#include<stdlib.h>
void push(int x);
void pop();
void stack_top();
int x,y,ch=1,value,z,top=-1,stack[10];
int main(void)
{
 while(1)
 {
 printf("\nSTACK MANIPULATION\n");
 printf("1.push\n2.pop\n3.top of stack\n4.exit\n");
 printf("Enter the choice:");
 scanf("%d",&ch);
 switch(ch)
 {
 case 1:printf("Enter value to be pushed in:");
 scanf("%d",&value);
 push(value);
 break;
 case 2:pop();
 break;
 case 3:stack_top();
 break;

 case 4:exit(0);
 default:printf("wrong choice...Retry\n");
 }
 }
 system("pause");
 }

void push(int x)
{int i;
 if(top==9)
 printf("stack overflows\n");
 else
 {
 top++;
 stack[top]=x;

 printf("\n The stack is\n");
 for(i=top;i>=0;i--)

 printf("%d\n",stack[i]);
 }
 }

void pop()
{
 int x,i;
 if(top==-1)
 printf("stack underflows");
 else
 {
 x=stack[top];
 top--;
 printf("The value %d is popped\n",x);
 }
 printf("The stack is\n");
 for(i=top;i>=0;i--)

 printf("%d\t",stack[i]);
 }



void stack_top()
{
 if(top==-1)
 printf("stack underflows");
 else
 {
 int y=stack[top];
 printf("The top of the stack is %d\n",y);
 }
 }

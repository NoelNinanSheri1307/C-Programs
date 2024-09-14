#include <stdio.h>
#include <stdlib.h>
void push (int x);
void pop();
void stack_top();
int x,y,i,ch,value,top=-1,stack[10];
int main()
{
    while(True)
    {
        printf("STACKS MANIPULATION \n");
        printf("1.Push Element to the stack \n 2.Pop element from the stack \n 3.Display the topmost element \n Exit \n");
        printf("Enter your choice: \n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            printf("Enter the element to be pushed into the stack: \n");
            scanf("%d",&value);
            push(value);
            break;

            case 2:
            pop()
            break;

            case 3:
            stack_top();
            break;

            case 4:
            exit(0);
            default:printf("Wrong Choice Try Again. \n");
        }
    }
system("pause");
}

void push(int x)
{
    int i;
    if(top==9)
    {
        printf("Stack Overflow \n");
    }
    else
    {
        top++;
        stack[top]=x;
        for(i=top;i>=0;i--)
        {
            printf("%d ",stack[i]);
        }
    }

}

void pop()
{

}

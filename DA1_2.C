#include <stdio.h>
#include <stdlib.h>
void push(int x);
void pop();
void enqueue(int x);
void dequeue();
int top=-1,rear=-1,front=-1;
int n;
int stack[20];
int queue[20];
int main()
{
    printf("Enter the size for the stack and queue: \n");
    scanf("%d",&n);

    while(1)
    {
    printf("\n\nPlease Choose from any of the below options: \n");
    printf("1.Push Element to Stack and Queue\n2.Pop Element from stack or Dequeue element from Queue.\nExit\n\n");
    printf("Enter your choice number: \n");
    int ch;
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
                    int c;
                    printf("Enter the element to be inserted: \n");
                    scanf("%d",&c);
                    push(c);
                    enqueue(c);
                    break;
        case 2:
                    pop();
                    dequeue();
                    break;
        case 3:
                    exit(0);
        default: printf("Invalid Choice");
                     break;
    }
    }
}
void push(int x)
{
    if (top==n-1)
    {
        printf("Stack Overflow\n");
    }
    else
    {
        top++;
        stack[top]=x;
    }
    printf("The stack is: \n");
    for(int i=top;i>=0;i--)
    {
        printf("%d \t",stack[i]);
    }
}

void pop()
{
    if (top==-1)
    {
        printf("Stack Underflow  \n");
    }
    else
    {
        printf("%d is popped from the stack\n",stack[top]);
        top--;
        printf("Stack is: \n");
        for(int i=top;i>=0;i--)
    {
        printf("%d \t",stack[i]);
    }
    }
}

void enqueue(int x)
{
    if(rear==n-1)
    {
        printf("Queue is also full");
    }
    else
    {
        rear++;
        queue[rear]=x;
    }
    if(front==-1)
    {
        front=0;
    }
    printf("\n\nQueue is: \n");
    for(int i=front;i<=rear;i++)
    {
        printf("%d \t",queue[i]);
    }
}

void dequeue()
{
    if (rear==-1 && front==-1)
    {
        printf("Queue is empty");
    }
    else
    {
         printf("The dequeued element is %d \n\n",queue[front]);
    }
    if(front==rear)
    {
        front=-1;
        rear=-1;
    }
    else
    {
        front++;
        for(int i=front;i<=rear;i++)
    {
        printf("%d \t",queue[i]);
    }
    }
}

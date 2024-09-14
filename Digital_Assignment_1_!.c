#include <stdio.h>
void push(int x);
void enqueue(int x);
int n,top=-1,front=-1,rear=-1;
int stack[20],queue[20];
int main()
{

    printf("Enter the size of the array:  \n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements in the array: \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n\n\nThe elements in the array are: \n");
    for(int i=0;i<n;i++)
    {
        printf("%d \t",a[i]);
    }
    for(int i=0;i<n;i++)
    {
        int flag=0;
        for (int j=2;j<a[i];j++)
        {
            if (a[i]==2)
                enqueue(a[i]);
            if (a[i]%j==0)
            {
                flag=1;
                push(a[i]);
                break;
            }
        }
        if (flag==0 && a[i]!=1)
        {
            enqueue(a[i]);
        }
    }
    printf("\n\n\nThe Elements in the Stack are: \n");
    for(int i=top;i>=0;i--)
    {
        printf("%d\t",stack[i]);
    }
    printf("\n\n\nThe elements in the queue are: \n");
    for(int i=front;i<=rear;i++)
    {
        printf("%d\t",queue[i]);
    }
printf("\n\n\n");
}

void push(int x)
{
    top++;
    stack[top]=x;
}

void enqueue(int x)
{
    rear++;
    queue[rear]=x;
    if (front==-1)
    {
        front=0;
    }
}

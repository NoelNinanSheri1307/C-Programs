#include <stdio.h>
int main()
{
    int a,flag=0;
    printf("Enter the number: ");
    scanf("%d",&a);
    if (a==0 || a==1){
        printf("%d is neither prime nor composite",a);}
    else if(a<0){
        printf("The concept of prime and composite numbers cannot be applied to negative numbers");}
    else if (a>0){
        for( int i=2;i<a;i++){
            if( a%i==0){
                flag=1;
                break;}}
        if (flag==0){
            printf("The entered number %d , is a prime number",a);}
        else{
            printf("The entered number %d , is not a prime number",a);}}
    else{
        printf("Please enter a positive integer");}
}

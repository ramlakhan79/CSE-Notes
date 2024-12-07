// Q.5  Write a program in C to print the Fibonacci series using recursion.

#include<stdio.h>
int main(){
    int num,i;
    int fibonacci(int);
    printf("Enter The Number : ");
    scanf("%d",&num);

    for(i=0;i<num;i++){
        printf(" %d",fibonacci(i));
    }
    return 0;
}
int fibonacci(int i){
    if(i==0)
        return 0;
    else if(i==1)
        return 1;
    else
        return (fibonacci(i-1)+fibonacci(i-2));
}
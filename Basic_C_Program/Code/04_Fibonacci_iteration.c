// Q.4  Write a program in C to print the Fibonacci series using iteration.

#include<stdio.h>
int main(){
    int num,i,a=0,b=1,fSeries=0;
    printf("Enter The Number : ");
    scanf("%d",&num);

    for(i=0;i<num;i++){
        if(i<=1){
            fSeries=i;
        }
        else{
            fSeries=a+b;
            a=b;
            b=fSeries;    
        }
        printf(" %d",fSeries);
    }
    return 0;
}
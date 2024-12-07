/* Q.3 Write a program in C to check given number is prime or not. */

#include<stdio.h>
int main(){
    int number,flag,i ;
    printf("Enter any  Number = ");
    scanf("%d",&number);
    flag=0;
    i=2;
    while(i<=number/2){
        if(number%i==0){
            flag=1;
            break;
        }
        i++;
    }
    if(flag==1){
        printf("\nGiven Number is Not Prime Number ....");
    }
    else{
        printf("\nGiven Number is Prime Number = %d",number);
    }

    return 0;
}
/* Q.1  Write a program to reverse an integer in C. */

#include<stdio.h>
int main(){
    int number,temp,rev_no;
    number=3245;
    printf("\nBefore Reverse Integer = %d",number);
    rev_no=0;
    while(number!=0){
        temp=number%10;
        rev_no=rev_no*10+temp;
        number=number/10;
    }
    printf("\nAfter Reverse Integer = %d",rev_no);
    
    return 0;
}
/* Q.2 Write a program in C to check whether an integer is Armstrong number or not. */

#include<stdio.h>
int main(){
    int number,tnumber,temp,arm_no;
    printf("\nEnter A integer Number = ");
    scanf("%d",&number);
    tnumber=number;
    arm_no=0;
    while(number!=0){
        temp=number%10;
        arm_no=arm_no+(temp*temp*temp);
        number=number/10;
    }
    if(arm_no==tnumber){
        printf("Given Number is Armstrong Number = %d",tnumber);
    }
    else{
        printf("\nGiven Number is not Armstrong Number !!!.....");
    }

    return 0;
}
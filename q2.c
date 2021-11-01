/*
Write a program that asks the user for a L2-b.our time, tbea dib-plays lhe lime in 24-hour
form:
Enter a 12-hour time: 9:11 PM
Equivalent 24-hour time: 21:11
See Programming Project 8 for a description of the input format.
*/



#include<stdio.h>

int main(void){
    char n,n2;
    int h,m,d;
    printf("enter the time with PM/AM: ");
    scanf("%d:%d %c%c",&h,&m,&n,&n2);
    d = 12 - h;
    if (n == 'P'&& n2=='M'){
        h = 12 + d; 
    }
    printf("this is the right time %d:%d %c%c",h,m,n,n2);
}


/*
Write a program that translates an alphabetic phone number into numeric form:
Enter phone number: CALLATT
2255288
(In
 case you don 'L have a telephone nearby. here are the liners on the keys: 2=ABC, 3=DEF.
4-GHT, 5-JKL, 6-MNO. 7=PRS, 8 TUV. 9=WXY.) lf the original phone number contains
non-alphabetic characters (digits or punctuation. for example). leave them unchanged:
Enter phone number: 1-800 - COL-LECT
1-800-265-5328
You may assume that any letters entered by the user are
 upper case.
*/



#include<stdio.h>

int main(void){
    char num,out;
    printf("enter the mobile number\n: ");
    for (int i=0;i<=10;i++)
    {
        scanf("%c\n",&num);
        switch (num)
        {
        case ('A'):
        case ('B'):
        case ('C'):
            putchar('2');
            continue;
        case ('D'):
        case ('E'):
        case ('F'):
            putchar('3');
            continue;
        case ('G'):
        case ('H'):
        case ('I'):
            putchar('4');
            continue;
        case ('J'):
        case ('K'):
        case ('L'):
            putchar('5');
            continue;
        case ('M'):
        case ('N'):
        case ('O'):
            putchar('6');
            continue;
        case ('P'):
        case ('R'):
        case ('S'):
            putchar('7');
            continue;
        case ('T'):
        case ('U'):
        case ('V'):
            putchar('8');
            continue;
        case ('W'):
        case ('X'):
        case ('Y'):
            putchar('9');
            continue;
        default:
            putchar(num);
        }

    }
    return 0;
}
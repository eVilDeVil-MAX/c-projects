/* Write a program that counts the number of vowels (a, e, i, o, and 11) in a sentence:
Enter a sentence: And that's the way it is .
Your sentence contains 6 vowels.
*/

#include<stdio.h>
int main(void){
    char ch;
    int vow;
    while (1){
        ch = getchar();

        switch (ch)
        {
         
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            vow += 1;
            
        default:
            vow += 0;
        }
         if (ch == '\n'){
            break;
        }

    }
    printf("the number of vowel is %d ",vow);

}
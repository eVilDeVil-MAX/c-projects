#include <stdio.h>
#define h 1000
int main(void)
{
    const char* END = "!!!!!!!!!!";
    char c[h] = {0};
    char k;
    printf("enter the input: ");
    for (int i = 0; i < 999; i++)
    {
        scanf("%c", &k);
        if (k == '\n')
        {
            break;
        }
        else
        {
            (c[i] = k);
        }
        switch (c[i])
        {
        case ('a'):
        case ('A'):
            c[i] = '4';
            continue;
        case ('b'):
            continue;
        case ('B'):
            c[i] = '8';
            continue;
        case ('d'):
            c[i] = 'D';
            continue;
        case ('E'):
        case ('e'):
            c[i] = '3';
            continue;
        case ('I'):
        case ('i'):
            c[i] = '1';
            continue;
        case ('s'):
        case ('S'):
            c[i] = '5';
            continue;
        case ('o'):
        case ('O'):
            c[i] = '0';
            continue;
        case ('f'):
            c[i] = 'F';
            continue;
        case ('g'):
            c[i] = 'G';
            continue;
        case ('h'):
            c[i] = 'H';
            continue;
        case ('j'):
            c[i] = 'J';
            continue;
        case ('k'):
            c[i] = 'K';
            continue;
        case ('l'):
            c[i] = 'L';
            continue;
        case ('m'):
            c[i] = 'M';
            continue;
        case ('n'):
            c[i] = 'N';
            continue;
        case ('p'):
            c[i] = 'P';
            continue;
        case ('q'):
            c[i] = 'Q';
            continue;
        case ('r'):
            c[i] = 'R';
            continue;
        case ('t'):
            c[i] = 'T';
            continue;
        case ('u'):
            c[i] = 'U';
            continue;
        case ('v'):
            c[i] = 'V';
            continue;
        case ('w'):
            c[i] = 'W';
            continue;
        case ('x'):
            c[i] = 'X';
            continue;
        case ('y'):
            c[i] = 'Y';
            continue;
        case ('z'):
            c[i] = 'Z';
            continue;
        default:
            break;
        }
    }
    printf("%s%s",c,END);
}
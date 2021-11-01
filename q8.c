 #include <stdio.h>
 #include <ctype.h>
 
int main(void)
{
    int s, low, up;
    char a[50] = {0};
  
    printf("enter the shift 1-25\n");
    fflush(stdout);
    scanf("%d", &s);
    printf("enter the string\n");
    fflush(stdout);
    scanf(" %49[^\n]s", a);
    printf("\nBEFORE SHIFTING \"%s\"\n", a);
    for (int i = 0; a[i]; i++)
    {
        low = islower(a[i]);
        up = isupper(a[i]);
        if (low || up)
        {
            a[i] += s;
            if ( (low && a[i] > 'z') || (up && a[i] > 'Z') )
            {
                a[i] -= 26;
            }
        }
    }
     printf("\nAFTER  SHIFTING \"%s\"\n", a);
 }
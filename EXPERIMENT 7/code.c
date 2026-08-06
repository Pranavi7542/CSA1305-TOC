#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i = 0, zero = 0, one = 0, len;

    printf("Enter the string: ");
    scanf("%s", str);

    len = strlen(str);

    /* Count leading 0's */
    while(i < len && str[i] == '0')
    {
        zero++;
        i++;
    }

    /* Count trailing 1's */
    while(i < len && str[i] == '1')
    {
        one++;
        i++;
    }

    /* Check if any invalid character exists */
    if(i != len)
    {
        printf("String Rejected\n");
        return 0;
    }

    if(zero == one)
        printf("String Accepted\n");
    else
        printf("String Rejected\n");

    return 0;
}

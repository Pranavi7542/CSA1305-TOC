#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, len, found = 0;

    printf("Enter the binary string: ");
    scanf("%s", str);

    len = strlen(str);

    /* Check whether the string contains only 0 and 1 */
    for(i = 0; i < len; i++)
    {
        if(str[i] != '0' && str[i] != '1')
        {
            printf("String Rejected\n");
            return 0;
        }
    }

    /* Search for substring "101" */
    for(i = 0; i <= len - 3; i++)
    {
        if(str[i] == '1' && str[i+1] == '0' && str[i+2] == '1')
        {
            found = 1;
            break;
        }
    }

    if(found)
        printf("String Accepted\n");
    else
        printf("String Rejected\n");

    return 0;
}

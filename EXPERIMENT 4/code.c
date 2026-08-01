#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, len;

    printf("Enter the string: ");
    scanf("%s", str);

    len = strlen(str);

    if (len < 2)
    {
        printf("String Rejected\n");
        return 0;
    }

    if (str[0] != '0' || str[len - 1] != '1')
    {
        printf("String Rejected\n");
        return 0;
    }

    for (i = 0; i < len; i++)
    {
        if (str[i] != '0' && str[i] != '1')
        {
            printf("String Rejected\n");
            return 0;
        }
    }

    printf("String Accepted\n");

    return 0;
}

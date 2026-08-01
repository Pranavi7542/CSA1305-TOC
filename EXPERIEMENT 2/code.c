#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int len;

    printf("Enter the binary string: ");
    scanf("%s", str);

    len = strlen(str);

    if (len > 0 && str[0] == '0' && str[len - 1] == '1')
    {
        printf("String Accepted\n");
    }
    else
    {
        printf("String Rejected\n");
    }

    return 0;
}

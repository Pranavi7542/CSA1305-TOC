#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int len;

    printf("Enter the string: ");
    scanf("%s", str);

    len = strlen(str);

    if(len > 0 && str[0] == 'a' && str[len - 1] == 'a')
    {
        printf("String Accepted\n");
    }
    else
    {
        printf("String Rejected\n");
    }

    return 0;
}

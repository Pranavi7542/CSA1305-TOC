#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int len, left = 0, right = 0, i;

    printf("Enter the string: ");
    scanf("%s", str);

    len = strlen(str);

    /* Count leading zeros */
    i = 0;
    while(i < len && str[i] == '0')
    {
        left++;
        i++;
    }

    /* Count trailing zeros */
    i = len - 1;
    while(i >= 0 && str[i] == '0')
    {
        right++;
        i--;
    }

    if(left != right)
    {
        printf("String Rejected\n");
        return 0;
    }

    /* Check middle part contains only 1's */
    for(i = left; i < len - right; i++)
    {
        if(str[i] != '1')
        {
            printf("String Rejected\n");
            return 0;
        }
    }

    printf("String Accepted\n");

    return 0;
}

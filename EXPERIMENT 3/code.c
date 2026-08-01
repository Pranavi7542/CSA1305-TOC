#include <stdio.h>

#define MAX 10

int n;
int epsilon[MAX][MAX];
int visited[MAX];

void eclosure(int state)
{
    int i;

    visited[state] = 1;
    printf("q%d ", state);

    for(i = 0; i < n; i++)
    {
        if(epsilon[state][i] == 1 && !visited[i])
        {
            eclosure(i);
        }
    }
}

int main()
{
    int i, j;

    printf("Enter number of states: ");
    scanf("%d", &n);

    printf("Enter epsilon transition matrix (0 or 1):\n");

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &epsilon[i][j]);
        }
    }

    printf("\nEpsilon Closures:\n");

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
            visited[j] = 0;

        printf("E-Closure(q%d) = { ", i);
        eclosure(i);
        printf("}\n");
    }

    return 0;
}

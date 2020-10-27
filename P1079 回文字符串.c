#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <string.h>


int main()
{
    int n, t;
    scanf("%d", &n);
    for (t = 0; t < n; t++)
    {
        char a[100];
        int i = 0, j;
        getchar();
        gets(a);
        j = strlen(a) - 1;
        while (i <= j && a[i] == a[j])
        {
            i++; j--;
        }
        if (i < j)
        {
            printf("No\n");
        }
        else
        {
            printf("Yes\n");
        }
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap(char **t1, char **t2)
{
    char *t;
    t = *t1;
    *t1= *t2;
    *t2 = t;
}

const int maxlen= 1000;

/*int main()
{
char *s1 = malloc(maxlen * sizeof(char));
char *s2 = malloc(ma[len * sizeof(char));
fgets(s1, maxlen, stdin);
fgets(s2, maxlen, stdin);
swap(&s1,&s2);
fputs(s1, stdout);
fputs(s2, stdout);
return 0;
}*/

int main()
{
    int n;
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    fscanf(stdin, "%d\n", &n);
    int k = 0;
    int i;
    char **a = malloc(n * sizeof(char*));
    for (i = 0; i < n; i++)
        a[i] = malloc(maxlen * sizeof(char));
    for (i = 0; i < n; i++)
    {
        if (feof(stdin)) break;
        fgets(a[i], maxlen, stdin);
        char *pos;
if ((pos = strchr(a[i], '\n')) != NULL)
*pos = '\0';
        k++;
    }
    //bubble(a, k);
    //insertSort(a, k);
    quicksort(a, 0, k - 1);
    for (i = 0; i < k; i++)
    {
        fputs(a[i], stdout);
        fputs("\n", stdout);
        }
    fclose(stdin);
    fclose(stdout);

return 0;
}
void bubble(char **a, int n) {
    int i, j;
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - 1; j++)
            if (strcmp(a[j], a[j + 1]) > 0)
                swap(&a[j+1], &a[j]);
}
void insertSort(char **a, int n) {
    int i, j;
    for (i = 0; i < n; i++)
        for (j = 0; j < i; j++)
            if (strcmp(a[i], a[j]) < 0)
                swap(&a[i], &a[j]);
}

void quicksort(char **arr, int first, int last)
    {
    int i = first;
    int j = last;
    char *p = arr[(first+last) / 2];
    if (i <= j)
    {
    while (strcmp(arr[i], p) < 0)
    {
    i++;
    }
    while (strcmp(arr[j], p) > 0)
    {
    j--;
    }
    if (i <= j)
    {
    if (strcmp(arr[i], arr[j]) > 0)
    {
    swap(&arr[i], &arr[j]);
    }
    i++;
    j--;
    }
    }
    if (i < last)
    {
    quicksort(arr, i, last);
    }
    if (first < j)
    {
    quicksort(arr, first, j);
    }

    }


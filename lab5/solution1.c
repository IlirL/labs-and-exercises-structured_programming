#include<stdio.h>

int allEvenNumbers(int niza[], int niza_size)
{
    for(int i = 0; i<niza_size; i++)
        if(niza[i]%2)
            return 0;

    return 1;
}

int main()
{
    int n;
    scanf("%d", &n);
    int niza[n];
    for(int i = 0; i<n; i++)
        scanf("%d", &niza[i]);

    if(allEvenNumbers(niza, n))
        printf("YES");
    else
        printf("NO");
}

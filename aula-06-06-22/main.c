#include <stdio.h>

// Passagem de valor
int abs(int x)
{
    if (x < 0)
        return -x;
    else
        return x;
}

int main()
{
    int y;
    scanf("%d", &y);
    y = abs(y);
    return 0;
}

// Passagem por referencia
void abs(int *x)
{
    if (*x < 0)
        *x = -*x;
}

int main()
{
    int y;
    scanf("%d", &y);
    abs(&y);
    return 0;
}

void abs2(int *x, int *y)
{
    if (*x < 0)
        *x = -*x;
    if (*y < 0)
        *y = -*y;
}

int main()
{
    float w[3];
    w[0] = 1.0;
    w[1] = 2.0;
    w[2] = 3.0;
    mostravetor(w, 3);
    return 0;
}

void mostravetor(float *v, int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%f ", v[i]);
}
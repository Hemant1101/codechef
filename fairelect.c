#include <stdio.h>

void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int total(int arr[], int n)
{
    int sum = 0, i;
    for (i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}

int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1);
    int j;

    for (j = low; j <= high - 1; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, m, count = 0, temp;
        scanf("%d %d", &n, &m);
        int arrn[n], arrm[m];
        int sumn = 0, summ = 0;
        int i;
        for (i = 0; i < n; i++)
        {
            scanf("%d", &arrn[i]);
            sumn = sumn + arrn[i];
        }
        for (i = 0; i < m; i++)
        {
            scanf("%d", &arrm[i]);
            summ = summ + arrm[i];
        }

        int low = 0, high = m - 1;
        while (sumn <= summ)
        {
            quickSort(arrn, 0, n - 1);
            quickSort(arrm, 0, m - 1);

            if (arrn[0] > arrm[m - 1])
            {
                count = -1;
                break;
            }
            swap(&arrn[0], &arrm[m - 1]);
            sumn = total(arrn, n);
            summ = total(arrm, m);
            low++;
            high--;
            count++;
        }
        printf("%d", count);
        printf("\n");
    }

    return 0;
}
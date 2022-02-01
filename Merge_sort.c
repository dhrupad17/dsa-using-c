// merge sort
#include <stdio.h>

void merge(int a[], int low, int mid, int high)
{
    int i = low, j = mid + 1, k = low;
    int x = high - low + 1;
    int c[x];

    // scan both array simultaneously
    while (i <= mid && j <= high)
    {
        if (a[i] <= a[j])
        {

            c[k] = a[i];
            i++;
        }
        else
        {
            c[k] = a[j];
            j++;
        }
        k++;
    }
    while (i <= mid)
    {
        c[k] = a[i];
        i++;
        k++;
    }
    while (j <= high)
    {
        c[k] = a[j];
        j++;
        k++;
    }
    for (int i = low; i <= high; i++)
    {
        a[i] = c[i];
    }
}

void mergeSort(int a[], int low, int high)

{
    if (low < high)
    {

        int mid = (low + high) / 2;
        mergeSort(a, low, mid);      // divide
        mergeSort(a, mid + 1, high); // conquer
        merge(a, low, mid, high);   // combine
    }
}
int main()
{
    int m;
    printf("Enter the size of the array: ");
    scanf("%d", &m);
    int a[m], c[m];
    printf("Enter the elements of the array: \n");
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("\nThe array before sorting--->\n");
    for (int i = 0; i < m; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\nThe merged array is--->\n");
    mergeSort(a, 0, m - 1);

    for (int j = 0; j < m; j++)
    {
        printf("%d ", a[j]);
    }

    return 0;
}
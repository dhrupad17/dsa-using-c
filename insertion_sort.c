 #include<stdio.h>
void insert(int arr[], int size)
{
    int i, j, k, temp; 
    for(i=1; i<size; i++)
    {
        temp=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>temp)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;

        printf("After pass %d : ", i);
        for(k=0; k<size; k++)
        {
            printf("%d\t", arr[k]);
        }
        printf("\n");
    }
}

int main()
{
    system("cls");
    int arr[20], temp, n, i, j, k;
    printf("Enter the no. of elements : ");
    scanf("%d", &n);
    printf("Enter the elements..\n");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\n");

    insert(arr, n);
    printf("\nThe Sorted array is..\n");
    for(i=0; i<n; i++)
    {
        printf("%d\t", arr[i]);
    }
    return 0;
}

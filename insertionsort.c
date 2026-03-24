#include <stdio.h>

void insertionsort(int arr[], int n)
{
    int k = 1;
    for (k = 1; k < n; k++)
    {
        int temp = arr[k];
        int j = k - 1;
        while (temp < arr[j] & j >= 0)
        {
            arr[j + 1] = arr[j];
            j = j -1;
        }
        arr[j + 1] = temp;
    }
    
}


int main()
{
    int arr[20], n;

    printf("Enter the number of element : ");
    scanf("%d",&n);

    printf("\n");

    for(int k=0;k<n; k++){
        printf("Enter the %d element: ", k+1);
        scanf("%d",&arr[k]);
        
    }
    printf("\n");

    insertionsort(arr, n);
    for ( int k = 0; k < n; k++)
    {
        printf("Sorted element %d \n", arr[k]);
    }

    printf("\n");

    return 0;
}

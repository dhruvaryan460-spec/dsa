#include <stdio.h>

void bubble_sort(int arr[], int n){
    for (int p = 0; p < n-1; p++)
    {
        for ( int i = 0; i < n - 1 - p; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
            
        }
        
    }
    
}

int main(){
    int arr[20];
    int n, element , position;
    int i;

    printf("Enter the number of element : ");
    scanf("%d",&n);

    printf("\n");

    for(int i=0;i<n;i++){
        printf("Enter the %d element: ", i+1);
        scanf("%d",&arr[i]);
    }
    printf("\n");

    bubble_sort(arr, n);
    for ( int i = 0; i < n; i++)
    {
        printf("Sorted element %d \n", arr[i]);
    }
    printf("\n");
    
    return 0;
}
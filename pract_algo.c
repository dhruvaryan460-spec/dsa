#include <stdio.h>

// practical 1
void insertElement(int arr[], int n, int element, int position)
{
    position = position - 1;
    int i = n - 1;
    while (i >= position)
    {
        arr[i + 1] = arr[i];
        i = i - 1;
    }
    arr[position] = element;
}

void deleteElement(int arr[], int n, int position)
{
    position = position - 1;
    int item = arr[position];
    int i = position;
    while (i < n - 1)
    {
        arr[i] = arr[i + 1];
        i = i + 1;
    }
}

// practical 2
void searchElement(int arr[], int n, int element)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == element)
        {
            printf("the %d is at loaction %d\n", element, i + 1);
        }
    }
}

// practical 3
void bubble_sort(int arr[], int n)
{
    for (int p = 0; p < n - 1; p++)
    {
        for (int i = 0; i < n - 1 - p; i++)
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

// practical 4
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
            j = j - 1;
        }
        arr[j + 1] = temp;
    }
}

// practical 5
void selection_sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min = arr[i];
        int loc = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < min)
            {
                min = arr[j];
                loc = j;
                if (loc != i)
                {
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
    }
}

//practical 6
void binary_search(int arr[], int n, int ele)
{
    int lb = 0, ub = n - 1;
 
    while (lb <= ub)
    {
        int mid = (lb + ub) / 2;

        if (arr[mid] == ele)
        {
            printf("Element found at location %d", mid + 1);
            return;
        }

        if (ele < arr[mid])
        {
            ub = mid - 1;
        }
        else
        {
            lb = mid + 1;
        }
    }

    printf("Element not found");
}
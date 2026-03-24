#include <stdio.h>
#include <windows.h>
#include "pract_algo.c"

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
    system("cls");

    while (1){
        int user_input;

        printf("Welcome to DSA practicals !!\n");
        printf("1.Insert element");
        printf("\t\t2.Delete element\n");
        printf("3.Search element");
        printf("\t\t4.View Elements\n");
        printf("5.Bubble Sort");
        printf("\t\t\t6.Insertion Sort\n");
        printf("7.Selection Sort");
        printf("\t\t8.Binary Search\n");
        printf("\n");
        printf("0.exit\n");
        printf("Enter your choise: ");
        scanf("%d",&user_input);

        switch (user_input){
            case 1:
                printf("\n");
                printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
                printf("\n");
                printf("Enter the element you want to store: ");
                scanf("%d",&element);
                printf("\n");
                printf("Enter the position where you want to insert element: ");
                scanf("%d",&position);
                printf("\n");
                
                insertElement(arr,n,element,position);
                n=n+1;
                for(i=0;i<n;i++){
                    printf("%d Array elements are %d\n",i+1, arr[i]);
                }
                Sleep(5000);
                system("cls");
                break;
            case 2:
                printf("\n");
                printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
                printf("Enter the position you wnat to delete: ");
                scanf("%d",&position);
                deleteElement(arr,n,position);
                n=n-1;
                for(i=0;i<n;i++){
                    printf("%d Array elements are %d\n",i+1, arr[i]);
                }
                Sleep(5000);
                system("cls");
                break;
            case 3:
                printf("\n");
                printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
                printf("Enter the element you want to search : ");
                scanf("%d",&element);
                searchElement(arr,n,element);
                Sleep(5000);
                system("cls");
                break;
            case 4:
                printf("\n");
                printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
                printf("Elements in database are ...\n");
                for(int i = 0; i<n;i++){
                    printf("%d Array elements are %d\n",i+1, arr[i]);
                }
                Sleep(5000);
                system("cls");
                break;
            case 5:
                printf("\n");
                printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
                bubble_sort(arr, n);
                for ( int i = 0; i < n; i++){
                    printf("Bubble Sorted element %d \n", arr[i]);
                }
                Sleep(5000);
                system("cls");
                break;
            case 6:
                printf("\n");
                printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
                insertionsort(arr, n);
                for ( int k = 0; k < n; k++){
                    printf("Insertion Sorted element %d \n", arr[k]);
                }
                Sleep(5000);
                system("cls");
                break;
            case 7:
                printf("\n");
                printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
                selection_sort(arr, n);
                for ( int k = 0; k < n; k++){
                    printf("Insertion Sorted element %d \n", arr[k]);
                }
                Sleep(5000);
                system("cls");
                break;
            case 8 :
                printf("\n");
                bubble_sort(arr, n);
                printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
                printf("Enter the element you want to search : ");
                scanf("%d",&element);
                binary_search(arr,n,element);
                Sleep(5000);
                system("cls");
                break;
                
            case 0:
                return 0;

            default:
                // printf("Enter a valid number ! \n");
                break;
        }
    }
    return 0;
}

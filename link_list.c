#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};

struct node *insertbeg_ll(struct node *head, int ele)
{
    struct node *newNode;
    newNode = (struct node *)malloc(sizeof(struct node));
    if (newNode == NULL)
    {
        return head;
    }

    newNode->data = ele;
    newNode->link = NULL;
    newNode->link = head;
    head = newNode;
    return head;
}

void traverse_ll(struct node *head)
{
    struct node *temp = head;
    printf("The elements in the linked list are... ");
    while (temp != NULL)
    {
        printf("\n%d ", temp->data);
        temp = temp->link;
    }
    printf("\n");
}

int main()
{
    struct node *head = NULL;
    int ele, n;
    printf("Enter the no. of element you want to insert: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter the %d element: ", i);
        scanf("%d", &ele);
        head = insertbeg_ll(head, ele);
    }
    traverse_ll(head);
    return 0;
}
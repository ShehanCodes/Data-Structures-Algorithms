#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <limits.h>

typedef struct node{
    int data;
    struct node *next;
}
node;


int main(void)
{
    node *list = NULL;

    while (true)
    {
        int x;
        printf("Number: \n");
        scanf("%d",&x);
        if (x == INT_MAX)
        {
            printf("\n");
            break;
        }

        // Allocate a new node
        node *newNode = malloc(sizeof(node));
        if (newNode == NULL)
        {
            return 1;
        }
        newNode->data = x;
        newNode->next = NULL;

        newNode->next = list;
        list = newNode;
       

    }

    // Print all nodes
    for (node *trav = list; trav != NULL; trav = trav->next)
    {
        printf("%i\n", trav->data);
    }
    // Free all nodes
    node *trav = list;
    while (trav != NULL)
    {
        node *tmp = trav;
        trav = trav->next;
        free(tmp);
    }

}

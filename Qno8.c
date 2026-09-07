
#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
} Node;

/* Insert a node */
Node* insert(Node *root, int data)
{
    if(root == NULL)
    {
        Node *newNode = malloc(sizeof(Node));

        newNode->data = data;
        newNode->left = NULL;
        newNode->right = NULL;

        return newNode;
    }

    if(data < root->data)
        root->left = insert(root->left, data);
    else
        root->right = insert(root->right, data);

    return root;
}

/* Count nodes */
int count_nodes(Node *root)
{
    if(root == NULL)
        return 0;

    return 1 + count_nodes(root->left) + count_nodes(root->right);
}

/* Find height */
int tree_height(Node *root)
{
    if(root == NULL)
        return -1;

    int left = tree_height(root->left);
    int right = tree_height(root->right);

    if(left > right)
        return 1 + left;
    else
        return 1 + right;
}

int main()
{
    Node *root = NULL;
    int n, value, i;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("Enter node %d: ", i + 1);
        scanf("%d", &value);

        root = insert(root, value);
    }

    printf("\nNumber of nodes = %d", count_nodes(root));
    printf("\nHeight of tree = %d", tree_height(root));

    return 0;
}


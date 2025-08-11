// Preorder Traversal
// Aim : To demonstrate the binary tree using preorder traversal.

#include <iostream>
// #include <conio.h>

using namespace std;

class node
{
public:
    node *left;
    int data;
    node *right;
};

void preorder(node *t)
{
    if (t != 0)
    {
        cout << t->data << "\t";
        preorder(t->left);
        preorder(t->right);
    }
}

int main()
{
    // clrscr();
    node *root, *temp, *temp1;
    root = new node;
    cout << "Enter the data for root: ";
    cin >> root->data;
    root->left = NULL;
    root->right = NULL;

    temp = root;

    cout << "Enter the data for left child: ";
    temp1 = new node;
    cin >> temp1->data;
    temp->left = temp1;
    temp1->left = NULL;
    temp1->right = NULL;

    cout << "Enter the data for right child: ";
    temp1 = new node;
    cin >> temp1->data;
    temp->right = temp1;
    temp1->left = NULL;
    temp1->right = NULL;

    cout << "\nPreorder Traversal:\n";
    preorder(root);

    // getch();
    return 0;
}

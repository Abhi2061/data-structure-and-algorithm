#include <iostream>
#include <queue>
#include <climits>
#include <stack>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;
};

node *insert(node *root, int data)
{
    if (root == NULL)
    {
        node *newnode = new node();
        newnode->data = data;
        newnode->left = NULL;
        newnode->right = NULL;

        root = newnode;
    }

    else if (data <= root->data)
        root->left = insert(root->left, data);

    else
        root->right = insert(root->right, data);

    return root;
}

bool search(node *root, int data)
{
    if (root == NULL)
        return false;

    else if (data < root->data)
        return search(root->left, data);

    else if (data > root->data)
        return search(root->right, data);

    else
        return true;
}

node *find(node *root, int data)
{
    if (root == NULL)
        return root;

    if (data < root->data)
        return find(root->left, data);

    if (data > root->data)
        return find(root->right, data);

    return root;
}

node *min(node *root)
{
    if (root == NULL)
        return root;

    while (root->left != NULL)
        root = root->left;

    return root;
}

node *max(node *root)
{
    if (root == NULL)
        return root;

    while (root->right != NULL)
        root = root->right;

    return root;
}

int find_height(node *root)
{
    if (root == NULL)
        return -1;

    int l = find_height(root->left);
    int r = find_height(root->right);

    return max(l, r) + 1;
}

void level_order(node *root)
{
    if (root == NULL)
        return;

    queue<node *> Q;
    Q.push(root);

    while (!Q.empty())
    {
        node *cur = Q.front();
        cout << cur->data << " ";

        if (cur->left != NULL)
            Q.push(Q.front()->left);
        if (cur->right != NULL)
            Q.push(Q.front()->right);

        Q.pop();
    }
}

void in_order(node *root)
{
    if (root == NULL)
        return;

    stack<node *> S;
    node *cur = root;

    while (!S.empty() || cur != NULL)
    {
        while (cur != NULL)
        {
            S.push(cur);
            cur = cur->left;
        }

        cout << S.top()->data << " ";
        cur = S.top()->right;
        S.pop();
    }
}

void pre_order(node *root)
{
    if (root == NULL)
        return;

    stack<node *> S;
    node *cur = root;

    while (!S.empty() || cur != NULL)
    {
        while (cur != NULL)
        {
            cout << cur->data << " ";
            S.push(cur);
            cur = cur->left;
        }

        cur = S.top()->right;
        S.pop();
    }
}

void post_order(node *root)
{
    if (root == NULL)
        return;

    stack<node *> S1, S2;

    S1.push(root);

    while (!S1.empty())
    {
        S2.push(S1.top());
        S1.pop();

        if (S2.top()->left != NULL)
            S1.push(S2.top()->left);

        if (S2.top()->right != NULL)
            S1.push(S2.top()->right);
    }

    while (!S2.empty())
    {
        cout << S2.top()->data << " ";
        S2.pop();
    }
}

bool isBST(node *root, int min, int max)
{
    if (root == NULL)
        return true;

    if (isBST(root->left, min, root->data) && isBST(root->right, root->data, max) && root->data > min && root->data < max)
        return true;

    return false;
}

bool isBinarySearchTree(node *root)
{
    return isBST(root, INT_MIN, INT_MAX);
}

node *Delete(node *root, int data)
{
    if (root == NULL)
        return root;
    else if (data < root->data)
        root->left = Delete(root->left, data);
    else if (data > root->data)
        root->right = Delete(root->right, data);
    else
    {
        if (root->left == NULL && root->right == NULL)
        {
            delete root;
            root = NULL;
        }
        else if (root->left == NULL)
        {
            node *temp = root;
            root = root->right;
            delete temp;
        }
        else if (root->right == NULL)
        {
            node *temp = root;
            root = root->left;
            delete temp;
        }
        else
        {
            node *temp = min(root->right);
            root->data = temp->data;
            root->right = Delete(temp, temp->data);
        }
    }
    return root;
}

node *findSuccesor(node *root, int data)
{
    node *cur = find(root, data);

    if (cur == NULL)
        return root;

    if (cur->right != NULL)
        return min(cur->right);

    node *succesor = NULL;
    node *ancestor = root;

    while (ancestor != cur)
    {
        if (ancestor->data > cur->data)
        {
            succesor = ancestor;
            ancestor = ancestor->left;
        }
        else
            ancestor = ancestor->right;
    }

    return succesor;
}

int main()
{
    node *root = NULL;

    root = insert(root, 4);
    root = insert(root, 2);
    root = insert(root, 6);

    post_order(root);
    cout << endl;
    cout << findSuccesor(root, 3)->data << endl;

    return 0;
}

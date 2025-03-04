#include<bits/stdc++.h>

using namespace std;

class Node{
public:
    int data;
    Node *left;
    Node *right;

    Node(int data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

int maxDepth(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int left = maxDepth(root->left);
    int right = maxDepth(root->right);

    int ans = max(left, right) + 1;

    return ans;
}
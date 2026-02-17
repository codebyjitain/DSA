#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};

class Solution
{
private:
    int solve(Node *node)
    {
        if (node == NULL)
        {
            return 0;
        }

        int l = solve(node->left);
        int r = solve(node->right);

        return 1 + max(l, r);
    }

public:
    int height(Node *node)
    {

        int ans = solve(node);
        return ans - 1;
    }
};

// -->Solved on GFG
#include <bits/stdc++.h>
#include "base.h"

using namespace std;

void level(Node *tree)
{
    queue<Node *> q;
    q.push(tree);

    while (!q.empty())
    {
        int size = q.size(); // number of nodes at this level

        for (int i = 0; i < size; i++)
        {
            Node *temp = q.front();
            q.pop();

            cout << temp->data << " ";

            if (temp->left)
                q.push(temp->left);
            if (temp->right)
                q.push(temp->right);
        }
        cout << endl; // new line after each level
    }
}

/* A binary tree Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor
    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/

vector<vector<int>> levelOrder(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    vector<vector<int>> ans;
    if (!root)
        return ans;
    vector<int> x;
    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        if (temp == NULL)
        {

            ans.push_back(x);
            x.clear();

            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            x.push_back(temp->data);
            if (temp->left)
                q.push(temp->left);
            if (temp->right)
                q.push(temp->right);
        }
    }

    return ans;
}

// using NUll approach Solved on GFG

// store in array using level order 
vector<int> level_order(struct Node* root){
    queue<Node*> q;
    q.push(root);
    vector<int> ans;
    while (!q.empty())
    {
        Node* temp = q.front();
        q.pop();
        ans.push_back(temp->data);

        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
    }
    return ans;
    
}

int main()
{
    struct Node *tree = new Node(10);
    generateTree(tree);

    // level(tree);
    vector<int> ans = level_order(tree);
    print(ans);
    return 0;
}
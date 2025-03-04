#include <bits/stdc++.h>

using namespace std;

class Node
{
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

Node *build_tree(Node *root)
{
    cout << "Enter the data: " << endl;
    int data;
    cin >> data;

    root = new Node(data);

    if (data == -1)
    {
        return NULL;
    }

    cout << "Enter data for insert in left of " << data << endl;
    root->left = build_tree(root->left);
    cout << "Enter data for insert in right of " << data << endl;
    root->right = build_tree(root->right);
    return root;
}

void levelOrderTraversal(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }

            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

void inorderTraversal(Node* root){
    if(root == NULL){
        return;
    }
     
    inorderTraversal(root->left);
    cout<<root->data<<" ";
    inorderTraversal(root->right);
}

void preorderTraversal(Node* root){
    if(root==NULL){
        return;
    }

    cout<<root->data<<" ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}

void postorderTraversal(Node* root){
    if(root == NULL){
        return;
    }

    postorderTraversal(root->left);
    postorderTraversal(root->right);
    cout<<root->data<<" ";

}

void build_tree_from_levelorder(Node* &root){
    queue<Node*> q;
    cout<<"Enter data :"<<endl;
    int data;
    cin>>data;
    root = new Node(data);
    q.push(root);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();

        cout<<"Enter data for left of "<<temp->data<<endl;
        int leftData;
        cin>>leftData;

        if(leftData != -1){
            temp->left = new Node(leftData);
            q.push(temp->left);
        }

        cout<<"Enter data for right of "<<temp->data<<endl;
        int rightData;
        cin>>rightData;

        if(rightData != -1){
            temp->right = new Node(rightData);
            q.push(temp->right);
        }
        
    }
    
}

int main()
{

    Node *root = NULL;

    // root = build_tree(root);
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    // levelOrderTraversal(root);

    // inorderTraversal(root);
    // preorderTraversal(root);
    // postorderTraversal(root);
    build_tree_from_levelorder(root);
    levelOrderTraversal(root);



    return 0;
}
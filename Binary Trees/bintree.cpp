#include <iostream>
#include <queue>
#include <map>

using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

void preOrder(struct Node *root)
{
    if (root == NULL)
        return;
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

void inOrder(struct Node *root)
{
    if (root == NULL)
        return;
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

void postOrder(struct Node *root)
{
    if (root == NULL)
        return;

    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}

// Node* searchInBST(Node* root,int key){
//     if(root == NULL) return NULL;

//     if(root->data == key) return root;

//     if(root->data > key) {
//         return searchInBST(root->left,key);
//     }

//     if(root->data < key){
//         return searchInBST(root->right,key);
//     }

// }

void printLevelOrder(Node *root)
{
    if (root == NULL)
        return;

    queue<Node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        Node *node = q.front();
        q.pop();
        if (node != NULL)
        {
            cout << node->data << " ";
            if (node->left)
            {
                q.push(node->left);
            }
            if (node->right)
            {
                q.push(node->right);
            }
        }
        else if (!q.empty())
        {
            q.push(NULL);
        }
    }
}

int sumAtK(Node *root, int K)
{
    if (root == NULL)
        return -1;

    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    int level = 0;
    int sum = 0;

    while (!q.empty())
    {
        Node *node = q.front();
        q.pop();

        if (node != NULL)
        {
            if (level == K)
            {
                sum += node->data;
            }
            if (node->left)
            {
                q.push(node->left);
            }
            if (node->right)
            {
                q.push(node->right);
            }
        }

        else if (!q.empty())
        {
            q.push(NULL);
            level++;
        }
    }
    return sum;
}

int Height(Node *root)
{

    if (root == NULL)
        return 0;

    int lheight = Height(root->left);
    int rheight = Height(root->right);
    return max(lheight, rheight) + 1;
}

int calcSize(Node *root)
{
    if (root == NULL)
        return 0;

    int leftSize = calcSize(root->left);
    int rightSize = calcSize(root->right);

    return leftSize + rightSize + 1;
}

/*
struct Node
{
    int data;
    Node* left;
    Node* right;
};
*/
vector<int> topView(Node *root)
{
    // Your code here
    map<int, int> mpp;
    queue<pair<Node *, int>> q;
    q.push({root, 0});

    while (!q.empty())
    {
        int y = q.front().second;
        Node *root = q.front().first;
        q.pop();
        if (mpp.find(y) == mpp.end())
            mpp[y] = root->data;
        if (root->left)
            q.push({root->left, y - 1});
        if (root->right)
            q.push({root->right, y + 1});
    }

    vector<int> ans;
    for (auto x : mpp)
    {
        ans.push_back(x.second);
    }
    return ans;
}

void rightView(Node *root)
{
    if (root == NULL)
        return;

    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        int n = q.size();

        for (int i = 0; i < n; i++)
        {

            Node *curr = q.front();
            q.pop();

            if (i == n - 1)
            {
                cout << curr->data << " ";
            }
            if (curr->left != NULL)
            {
                q.push(curr->left);
            }
            if (curr->right != NULL)
            {
                q.push(curr->right);
            }
        }
    }
}

void leftView(Node *root)
{
    if (root == NULL)
        return;

    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        int n = q.size();

        for (int i = 0; i < n; i++)
        {

            Node *curr = q.front();
            q.pop();
            if (i == 0)
            {
                cout << curr->data << " ";
            }
            if (curr->left != NULL)
            {
                q.push(curr->left);
            }
            if (curr->right != NULL)
            {
                q.push(curr->right);
            }
        }
    }
}

Node *insertintoBST(Node *root, int data)
{
    if (root == NULL)
    {
        return new Node(data);
    }
    Node *cur = root;
    while (true)
    {
        if (cur->data <= data)
        {
            if (cur->right != NULL)
            {
                cur = cur->right;
            }
            else
            {
                cur->right = new Node(data);
                break;
            }
        }
        else
        {
            if (cur->left != NULL)
            {
                cur = cur->left;
            }
            else
            {
                cur->left = new Node(data);
                break;
            }
        }
    }
    return root;
}

void mirror(Node *root)
{
    if (!root)
        return;

    mirror(root->left);
    mirror(root->right);
    swap(root->left, root->right);
}

int main()
{

    struct Node *root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(5);

    root->right->left = new Node(6);
    root->right->right = new Node(7);

    // if(searchInBST(root,5)==NULL){
    //     cout<<"Doest not exist in BST";
    // }
    // else{
    //     cout << "Key exists";
    // }

    // printLevelOrder(root);

    // cout << sumAtK(root,2);

    // cout << calcHeight(root);

    // cout << calcSize(root);

    // rightView(root);

    leftView(root);

    return 0;
}

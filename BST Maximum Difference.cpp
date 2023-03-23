/*
You are given a Binary Search Tree and a target value. You must find the maximum difference between the sum of node data from root to target and from target to a child leaf node (target exclusive). Initially, you are at the root node.
Note: If the target node is not present in the tree then return -1.
*/

***************************************************************************************************************************

//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;
#define MAX_HEIGHT 100000

// Tree Node
struct Node {
    int data;
    Node *right;
    Node *left;

    Node(int x) {
        data = x;
        right = NULL;
        left = NULL;
    }
};

Node *insert(Node *tree, int val) {
    Node *temp = NULL;
    if (tree == NULL) return new Node(val);

    if (val < tree->data) {
        tree->left = insert(tree->left, val);
    } else if (val > tree->data) {
        tree->right = insert(tree->right, val);
    }

    return tree;
}


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
pair<Node* ,int> sumTarget(Node* root,int target,pair<Node* ,int> &p)
    {
        if(root == NULL) return {NULL,-1};
        if(root->data == target) 
        {
            p.first = root;
            return p;
        }
        if(root->data < target)
        {
            p.first = root;
            p.second += root->data;
            sumTarget(root->right,target,p);
        }
        else
        {
            p.first = root;
            p.second += root->data;
            sumTarget(root->left,target,p);
        }
    }
    int sumLeaf(Node* root)
    {
        if (root == nullptr) {
            return INT_MAX;
        }
        if (root->left == nullptr && root->right == nullptr) {
            return root->data;
        }
        int left = sumLeaf(root->left);
        int right = sumLeaf(root->right);
        return (left < right? left : right) + root->data;
    }
    int maxDifferenceBST(Node *root,int target){
        // Code here
         pair<Node* ,int> p;
        p = sumTarget(root,target,p);
        if(p.second == -1) return -1;
        // cout<<p.first->data;
        int leafSum = sumLeaf(p.first);
        // cout<<leafSum;
        return p.second-leafSum+target;
    }
};

//{ Driver Code Starts.

int main() {
    int T;
    cin >> T;
    while (T--) {
        Node *root = NULL;

        int N;
        cin >> N;
        for (int i = 0; i < N; i++) {
            int k;
            cin >> k;
            root = insert(root, k);
        }

        int target;
        cin >> target;
        Solution ob;
        cout << ob.maxDifferenceBST(root, target);
        cout << endl;
    }
}
// } Driver Code Ends

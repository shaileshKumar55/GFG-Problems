/*
Example 1:

Input:
      2
    /   \
   1     3
K = 2
Output: 2
Explanation: 2 is the 2nd smallest element in the BST

Example 2:

Input:
        2
      /  \
     1    3
K = 5
Output: -1
Explanation: There is no 5th smallest element in the BST as the size of BST is 3
*/

class Solution {
  public:
  void preorder(Node*root,vector<int>&vec)
    {
        if(root==NULL)
        {
            return;
        }
        vec.push_back(root->data);
        preorder(root->left,vec);
        preorder(root->right,vec);
    }
    // Return the Kth smallest element in the given BST
    int KthSmallestElement(Node *root, int K) {
        // add code here.
        vector<int>vec;
        preorder(root,vec);
        sort(vec.begin(),vec.end());
        int ans=-1;
        if(vec.size()>=K)
        {
            return vec[K-1];
        }
        return ans;
    }
};

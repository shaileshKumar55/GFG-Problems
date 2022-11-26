    /* 
    Example 1:

Input: "1(2)(3)" 
Output: 2 1 3
Explanation:
           1
          / \
         2   3
Explanation: first pair of parenthesis contains 
left subtree and second one contains the right 
subtree. Inorder of above tree is "2 1 3".
    */

  /*
  Example 2:

Input: "4(2(3)(1))(6(5))"
Output: 3 2 1 4 5 6
Explanation:
           4
         /   \
        2     6
       / \   / 
      3   1 5   
  */


class Solution{
public:
    // function to construct tree from string
     Node* fun(string &s, int &i){
        int n=s.size();
        int v=0;
        for(;i<n and (s[i]>='0' and s[i]<='9');i++){
            v=v*10+(s[i]-'0');
        }
        Node* root= new Node(v);
        if(s[i]=='('){
            // skip opening bracket
            i++;
            root->left=fun(s, i);
        }
        if(s[i]=='('){
            // skip opening bracket
            i++;
            root->right=fun(s, i);
        }
        // skip closing bracket
        i++;
        return root;
    }
    Node *treeFromString(string str){
        // code here
         int i=0;
        return fun(str, i);
    }
};

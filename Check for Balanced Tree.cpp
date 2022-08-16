class Solution{
    public:
    //Function to check whether "every node" of a binary tree is balanced or not. (i.e. height difference of left-subtree and righ-subtree not more than 1)
    bool ans=true;
    int height(Node* root){
        if(root == NULL)
            return 0;
        int lh=height(root->left);   int rh=height( root->right );
        
        if(abs(lh-rh)>1)
          ans=false;
          
        return 1+max( lh, rh );
    }
    bool isBalanced(Node *root)
    {

        height(root);
        return ans;

    }
};

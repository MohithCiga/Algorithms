    // Function to convert a binary tree into its mirror tree.
    Node* mir(Node* root){
        if(root==NULL)
            return root;
        Node* lh=root->left;
        
        root->left=mir(root->right);
        root->right=mir(lh);
        
        return root;
    }

    void mirror(Node* node) {
        mir(node);
    }

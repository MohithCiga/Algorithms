    //Function to check if S is a subtree of tree T.
    bool ans=false;
    bool identical(Node* T, Node* S){
        if(T==NULL && S==NULL)
            return true;
        if((T==NULL && S!=NULL) || (T!=NULL && S==NULL))
            return false;
        if(T->data != S->data)
            return false;
        return identical(T->left,S->left) && identical(T->right,S->right);
    } 
    bool isSubTree(Node* T, Node* S) 
    {
        if( T == NULL && S == NULL)
            return true;
        if( T == NULL && S != NULL)
            return false;
        if( T->data == S->data ){
            ans=ans|| identical(T,S);
            if(ans)return ans;
        }
        return isSubTree(T->left,S) || isSubTree(T->right,S);
        
    }

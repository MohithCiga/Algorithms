public:
    //Function to find the vertical order traversal of Binary Tree.   
    map<int,vector<int>> v;
    vector<int> ans;
    vector<int> verticalOrder(Node *root)
    {
        queue<pair<Node*,int>> q;
        q.push({root,0});
        while(!q.empty())
        {
           Node* node=q.front().first;
           int level=q.front().second;
          
           v[level].push_back(node->data);
           if(node->left) q.push({node->left,level-1});
           if(node->right)  q.push({node->right,level+1});
           q.pop();
            
        }
        for(auto a:v)
        {
            for(auto b:a.second)
            ans.push_back(b);
        }
        return ans;
    }

    //Function to return a list of nodes visible from the top view 
    //from left to right in Binary Tree.
    map<int,int> m;
    vector<int> ans;
    vector<int> topView(Node *root)
    {
        queue< pair< Node*, int> >q;
        q.push( {root, 0} );
        while(!q.empty())
        {
            Node* node = q.front().first;
            int level = q.front().second;
            if(!m[level]){
                m[level] = node -> data;
            }
            if(node -> left)  q.push( {node -> left, level - 1} );
            if(node -> right) q.push( {node -> right, level + 1} );
            
            q.pop();
        }
        for(auto a : m)
        {
            ans.push_back(a.second);
        }
        return ans;
    }

int findDuplicate(vector<int>& nums){
        
        int n = nums.size();
        
        vector<bool>visited(n+1);
        
        for(int i: nums){
            
            if(visited[i]){
                return i;
            }
            
            visited[i]=true;
        }
        
        return -1;
    }

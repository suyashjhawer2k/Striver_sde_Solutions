vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>>  res ;
        if(intervals.size()==0)
            return res ;
        
        sort(intervals.begin() , intervals.end()) ;
        
        vector<int> ans = intervals[0] ;
        
        for(auto it : intervals)
        {
            if(ans[1]>=it[0])
            {
                ans[1]=max(ans[1] , it[1]) ;
            }
            else
            {
                res.push_back(ans) ;
                ans=it;
            }
        }
        res.push_back(ans) ;
        return res ;
    }

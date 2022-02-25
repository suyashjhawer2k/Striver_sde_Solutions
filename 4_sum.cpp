vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> res ; 
        
        if(nums.size() < 4)
            return res ;
        
        sort(nums.begin() , nums.end()) ;
          int n = nums.size() ;  
            for(int i=0 ; i<n-3 ; i++)
            {
                for(int j=i+1 ; j<n-2 ; j++)
                {
                    int ta = target - (nums[i]+nums[j]) ;
                    int k = j+1 ;
                    int l = n-1 ;
                    while(k<l)
                    {
                        if((nums[k]+nums[l])>ta)
                            l-- ;
                        else if((nums[k]+nums[l])<ta)
                            k++ ;
                        else
                        {
                            vector<int> v(4,0) ;
                            v[0]=nums[i] ;
                            v[1]=nums[j] ;
                            v[2]=nums[k] ;
                            v[3]=nums[l] ;
                            res.push_back(v) ;
                            k++ ;
                            l-- ;
                            while(k<n-1 && v[2]==nums[k])k++ ;
                            while(l>k && v[3]==nums[l])l-- ;
                        }
                    }
                    while(j+1<n-2 && nums[j]==nums[j+1])j++ ;
                }
                while(i+1<n-3 && nums[i]==nums[i+1])i++ ;
            }
        return res ;
    }

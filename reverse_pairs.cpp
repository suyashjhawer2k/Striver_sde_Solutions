int merge(int l , int m , int h , vector<int> &nums)
    {
        
        int j=m+1 ;
        int count = 0 ;
        for(int i=l ; i<=m ; i++)
        {
            while(j<=h && nums[i]>(2LL*nums[j]))
                j++ ;
            
            count = count + (j-(m+1)) ;
        }
        
        vector<int> temp ;
      int   i=l ;
       j=m+1 ;
        while(i<=m && j<=h)
        {
            if(nums[i]<=nums[j])
            {
                temp.push_back(nums[i]) ;
                i++ ;
            }
            else
            {
                temp.push_back(nums[j]) ;
                    j++ ;
            }
        }
        while(i<=m)
        {
            temp.push_back(nums[i]) ;
            i++ ;
        }
        while(j<=h)
        {
            temp.push_back(nums[j]) ;
            j++ ;
        }
        
        for(i=l ; i<=h ; i++)
        {
            nums[i]=temp[i-l] ;
        }
        return count ;
    }
    
    
    int mergesort(int low , int high , vector<int> &nums)
    {
        if(low>=high)return 0 ;
        int mid=(low+high)/2 ;
        int count = 0 ;
        count = count + mergesort(low , mid , nums) ;
        count = count + mergesort(mid+1 , high , nums) ;
        count = count + merge(low , mid , high , nums) ;
        
        return count ; 
    }
    
    
    int reversePairs(vector<int>& nums) {
        return mergesort(0 , nums.size()-1 , nums) ;
    }

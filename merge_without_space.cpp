 void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int j=0 ;
        for(int i=0 ; i<m+n ; i++)
        {
            if(nums1[i]==0)
            {
                if(j==n)
                {
                    break ;
                }
                nums1[i]=nums2[j];
                
                j++ ;
            }
        }
        sort(nums1.begin() , nums1.end()) ;
        
    }

int maxLen(vector<int>&A, int n)
    {   
        // Your code here
        int ma =0 ;
        unordered_map<int , int> m ;
        int sum = 0 ;
        
        for(int i=0 ; i<n ; i++)
        {
            sum=sum+A[i] ;
            if(sum==0)
            ma=i+1 ;
            
            else{
                if(m.find(sum)!=m.end())
                {
                    ma=max(ma,i-m[sum]) ;
                }
                else
                m[sum]=i ;
            }
        }
        return ma ;
    }

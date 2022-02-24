double myPow(double x, int n) {
        double ans = 1 ;
        long long r  = n ;
        if(n<0)
            r=r*-1 ;
        while(r)
        {
            if(r%2==1)
            {
                ans = ans * x ;
                r=r-1 ;
            }
            else
            {
                x=x*x ;
                r=r/2 ;
            }
        }
        if(n<0)
            ans=1/ans ;
        
        return ans ;
    }

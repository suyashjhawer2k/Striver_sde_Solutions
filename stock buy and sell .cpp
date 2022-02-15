int maxProfit(vector<int>& prices) {
        int cp = 0 ;
        int mp = 0 ;
        int minp = prices[0] ;
        
        for(int i=1 ; i<prices.size() ; i++)
        {
            minp=min(prices[i] , minp) ;
            cp=prices[i]-minp ;
            if(mp<cp)
                mp=cp;
        }
        return mp ;
    }

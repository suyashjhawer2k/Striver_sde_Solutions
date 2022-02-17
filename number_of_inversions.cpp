long long int merge(long long int arr[] , long long int temp[] , long long int left, long long int mid ,  long long int right)
    {
        long long int invcount=0 ;
        long long int i=left ;
        long long int j=mid+1 ;
        long long int k=left ;
        while(i<=mid && j<=right)
        {
            if(arr[i]<=arr[j])
            {
                temp[k++]=arr[i++] ;
            }
            else
            {
                temp[k++]=arr[j++] ;
                invcount = invcount + mid-i+1 ;
            }
        }
        while(i<=mid)
        temp[k++]=arr[i++] ;
        while(j<=right)
        temp[k++]=arr[j++] ;
        
        for(int x=left ; x<=right ; x++)
        arr[x]=temp[x] ;
        
        return invcount ;
    }
    long long int mergesort(long long int arr[] , long long int temp[] , long long int left , long long int right)
    {
        long long int mid = (left+right)/2 ;
        long long int invcount=0 ;
        if(left<right)
        {
            invcount = invcount+mergesort(arr , temp , left , mid) ;
            invcount = invcount+mergesort(arr , temp , mid+1 , right) ;
            invcount = invcount+merge(arr , temp , left , mid , right) ;
        }
        return invcount ;
    }
    
    long long int inversionCount(long long arr[], long long N)
    {
        long long int left = 0 ;
        long long int right = N-1 ;
        long long int temp[N] ;
        return mergesort(arr , temp , left , right) ;
    }

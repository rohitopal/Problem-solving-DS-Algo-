int findPeak(int arr[],int l,int r,int n)
{
    if(l<=r){
        int mid = (l+r)/2;
        
        if((mid == 0 || arr[mid] >= arr[mid-1]) && (mid == n-1 || arr[mid] >= arr[mid+1]))
            return mid;
            
        if(mid > 0 && arr[mid-1] > arr[mid])
            return findPeak(arr, l, mid-1, n);
        return findPeak(arr, mid+1, r, n);
    }
    return -1;
        
}

int peakElement(int arr[], int n)
{
   // Your code here
   
   return findPeak(arr,0,n-1,n);
}

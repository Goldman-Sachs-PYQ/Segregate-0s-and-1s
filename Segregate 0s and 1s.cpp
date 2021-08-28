void swap(int *a, int *b)
{
    int t;
    t=*a;
    *a=*b;
    *b=t;
}
    void segregate0and1(int arr[], int n) 
    {
        // code here
        int l=0,m=0,r=n-1;
        
        while(l<r)
        {
            if(arr[m]==0)
            {
                l++;
                m++;
            }
            else if(arr[m]==1)
            {
                swap(&arr[m],&arr[r]);
                r--;
            }
        }
    }

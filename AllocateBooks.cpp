int check(vector<int> &A, int num,int B)
{
    int sr =1;
    int cs=0;
    for(int i=0;i<A.size();i++)
    {
        if(cs>num)
        return 0;

        if((cs+A[i]) <= num)
        {
            cs = cs + A[i];
        }
        else
        {
            sr++;
            cs = A[i];
        }
        if(sr>B)
        return 0;
    }
    return 1;
}



int Solution::books(vector<int> &A, int B) {

    if(A.size()<B)
    return -1;
    if(A.size()==B)
    {
        int max = INT_MIN;
        for(int i : A)
        {
            if(i>max)
            max=i;
        }

        return max;
    }

    int low =0;
    int high=0;
    for(int i : A)
        {
            high = high + i;
        }
     int mid;
     int result = high;
    while(low<high)
    {
        mid = (low + high)/2;

        if(check(A,mid,B))
        {
            result = min(result,mid);
            high = mid;

        }
        else
        low = mid+1;
    }

    return result;
}

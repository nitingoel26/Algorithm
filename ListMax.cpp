#include <iostream>
using namespace std;
int diff[10000002];
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a,b,k,M,i,N;
     cin>>N;
    cin>>M;
    for(i=0;i<M;i++)
        {
            cin>>a>>b>>k;
            diff[a]+=k;
            diff[b+1]-=k;

    }
    long long int max = diff[1];
    long long int current = diff[1];
    for(i=2; i<=N;i++)
        {
        current+= diff[i];
        if(current>max)
            max = current;

    }
    cout<<max;
    return 0;
}

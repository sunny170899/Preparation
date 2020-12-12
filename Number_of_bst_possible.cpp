#include <bits/stdc++.h>
using namespace std;
// Find the total number of binary search trees possible given n number of keys
// O(n^2) complexity - Dynamic Programming Approach
int main()
{
    int n;
    cin>>n;
    lli *dp=(lli *)malloc((n+1)*sizeof(lli));
    dp[0]=1,dp[1]=1;
    //Since number of trees that can be formed for n=0/1 is 1
    for(int i=2;i<=n;i++)
    {
        dp[i]=0;
        for(int j=0;j<i;j++)
        {
            dp[i]+=(dp[j]*dp[i-j-1]);
        }
    }
    //Calculation is same to that of catalan number
    /*for(int i=0;i<=n;i++)
        cout<<dp[i]<<" ";
    cout<<endl;*/
    cout<<dp[n]<<endl;
    free(dp);
    return 0;
}
/* Sample input:-
        n = 5;
        Output = 42;
        */

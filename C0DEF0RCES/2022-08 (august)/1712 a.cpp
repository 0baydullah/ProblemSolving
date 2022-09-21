#include<bits/stdc++.h>
int main()
{
    int t;
    std::cin >> t;
    while(t--)
    {
        int n, k;
        std::cin >> n>>k;

        int a[n+1] , index[n+1];
        int ans=0;
        for(int i=1 ;i<=n ; i++)
        {
            std::cin >> a[i];
            index[a[i]]=i;
        }
        std::sort(a+1,a+n+1);
        for(int i=1 ,j=1 ; i<=k ; i++,j++)
        {
            if(index[a[i]]>k)
            ans++;
        }
        std::cout << ans << std::endl;
    }

    return 0;
}

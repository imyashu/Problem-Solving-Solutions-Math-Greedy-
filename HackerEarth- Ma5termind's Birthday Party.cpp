    #include<bits/stdc++.h>
    using namespace std;
    typedef unsigned long long int ll;
    ll mod=1e9+7;
    #define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
    #define pb push_back
    #define um unordered_map
    #define pr pair
    #define mm multimap
    #define ms multiset
    #define mp make_pair
    #define vr vector
    bool b[1000001]={false};
    int main()
    {
       ll n,m,i,j,k;
       for(i=2;i*i<=1000000;i++)
       {
           if(b[i]==false)
           {
               for(j=i*i;j<=1000000;j+=i)
               {
                   b[j]=true;
               }
           }
       }
      b[2]=false;
      b[3]=false;
      b[4]=false;
      b[1]=true;
     int noprime_count[1000001]={0};
     int freq=0;
     for(int i=1;i<=1000000;i++)
     {
         if(b[i])
         {
             freq++;
         }
         noprime_count[i]=freq;
     }
     int t,l,r;
     scanf("%d",&t);
     while(t--)
     {
         scanf("%d%d",&l,&r);
         int ans=noprime_count[r]-noprime_count[l-1];
         printf("%d\n",ans);
     }
    }

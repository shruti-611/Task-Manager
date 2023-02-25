#include<bits/stdc++.h>
using namespace std;
#define ll long long int


int main()
{
    ll t;
    cin>>t;
    
    while(t--)
    {
        ll n;
        cin>>n;
        
      string s;
      cin>>s;
      
      map<ll,ll>mp;
      
      if(s[0]=='0')
      {
          
          ll ct=0;
          
          for(ll i=0;i<n;i++)
          {
              if(s[i]=='1')
              {
                  ct++;
              }
              else
              {
                  mp[ct]++;
                  ct=0;
              }
          }
          
          if(ct!=0)
          {
              mp[ct]++;
              ct=0;
          }
          
          
          ll cv=0;
          
          
          if(mp.size()==0)
          {
              cout<<"0"<<endl;
              continue;
          }
          
          
          
          vector<ll>sp;
          
          for(auto it=mp.begin();it!=mp.end();it++)
          {
              sp.push_back(it->first);
          }
          
          sort(sp.begin(),sp.end());
          reverse(sp.begin(),sp.end());
          
            if(sp.size()>=1)
              cout<<sp[0]<<endl;
            else
              cout<<"0"<<endl;
          
          
      }
      else
      {
          ll index=-1;
          ll ct1=0;
          vector<ll>sp;
          
          for(ll i=0;i<n-1;i++)
          {
              if(s[i]==s[i+1])
              {
                  ct1++;
                
              }
              else
              {
                  index=i;
                  break;
              }
          }
          
          ct1+=1;
          ll ct=0;
          
          
          if(ct1==n)
          {
              cout<<n<<endl;
              continue;
              
          }
          
          for(ll i=index+1;i<n;i++)
          {
              if(s[i]=='1')
              {
                  ct++;
              }
              else
              {
                  mp[ct]++;
                  ct=0;
              }
          }
          
          if(ct!=0)
          {
              mp[ct]++;
              ct=0;
          }
          
          if(mp.size()==0)
          {
              cout<<ct1<<endl;
              continue;
          }
          
          for(auto it=mp.begin();it!=mp.end();it++)
          {
              sp.push_back(it->first);
          }
          
          
          sort(sp.begin(),sp.end());
           reverse(sp.begin(),sp.end());
          
          if(sp.size()>=1)
          {
             cout<<(ct1+sp[0])<<endl; 
          }
          else
          {
              cout<<ct1<<endl;
          }
      }
      
      
      
      
        
    }
}
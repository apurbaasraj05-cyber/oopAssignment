///Apurba Akar Asraj 2407028
///unordered_multimap assignment

#include <iostream>
#include <unordered_map>
#include <sstream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    unordered_multimap <string, int> mp;
    while(n--)
    {
          string s;
          cin>>s;

          auto range=mp.equal_range(s);
          int mx=0;
          bool found =false;

          for(auto it=range.first; it!=range.second; ++it)
          {
                found=true;
                if(it->second>mx)
                  mx=it->second;
          }
          if(!found)
          {
                cout<<"OK\n";
                mp.insert({s, 1});
          }
          else
          {
                stringstream ss;
                ss<<mx;
                string newName=s+ss.str();
                cout<<newName<<"\n";
                mp.insert({s, mx+1});
                mp.insert({newName, 1});
          }
    }

    return 0;
}

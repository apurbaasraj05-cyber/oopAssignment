///Apurba Akar Asraj 2407028
///unordered_multimap assignment

#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main()
{
      int n;
      cin>>n;

      unordered_multimap<string, int> mp;
      string s;
      while(n--)
      {
            cin>>s;

            if(mp.count(s)>0)
            {
                  cout<<"YES\n";
            }
            else
            {
                  cout<<"NO\n";
            }

            mp.insert({s, 1});
      }
      return 0;
}

#include <iostream>
#include <string>
using namespace std;

int ans;
string s;

int main(){
  cin >> s;
  
  if(s[0] == '1')ans++;
  if(s[1] == '1')ans++;
  if(s[2] == '1')ans++;
  
  cout << ans;
}

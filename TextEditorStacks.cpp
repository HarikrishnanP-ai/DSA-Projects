#include<bits/stdc++.h>
using namespace std;
int main(){
  int k;
  cin>>k;
  while(k--){
    int a;
    cin>>a;
    stack<string> st;
    string s;
    if(a==1){
      string str;
      cin>>str;
      st.push(s);
      s+=str;
    }
	else if(a==2){
		int j;
		cin>>j;
		st.push(s);
		s.erase(s.size()-j);

    }
	else if(a==3){
      int j;
      cin>>j;
      cout<<s[j-1]<<"\n";
    }
    else{
    	s=st.top();
    	st.pop();
	}
  }
  
  return 0;
}

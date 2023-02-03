#include <bits/stdc++.h>
#include<iostream>
using namespace std;

void solve(string str, int index, string output, vector<string>& ans)
{
  if (index >= str.size()) {
    ans.push_back(output);
    return;
  }

  //exclude
  solve(str, index+1, output, ans);

  //include
  char element = str[index];
  output += element;
  solve(str, index+1, output, ans);
}

vector<string> subsequences(string str){
	
	vector<string> ans;
	string output;
	int index = 0;

	solve(str, index, output, ans);
	
	ans.erase(ans.begin());
	return ans;
}

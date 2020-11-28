#include <bits/stdc++.h>
using namespace std;

int n{4};

void search(int k, vector<int> subset) {
  if (k == n) {
  // process subset
  for(int i=0; i<subset.size(); ++i){
  cout << subset[i] << ' ';
  }
  cout << "\n";
  } else {
  // include k in the subset
    subset.push_back(k);
    search(k+1,subset);
    subset.pop_back();
    // don’t include k in the subset
    search(k+1,subset);
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  vector<int> subset;
  search(1,subset);
}



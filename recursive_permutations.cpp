#include <bits/stdc++.h>
using namespace std;

const int n{5};
vector<int> permutation;
bool chosen[n+1];

void search() {
  if(permutation.size() == n) {
    //procass permutations
    for(int i =0; i<n;i++) {
	  cout << permutation[i];
	}
    cout << "\n";
  } else {
    for (int i = 1; i<=n; i++) {
	  if(chosen[i]) continue;
	  chosen[i] = true;
	  permutation.push_back(i);
	  search();
	  chosen[i] = false;
	  permutation.pop_back();
	}
  }
  

}


int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
//  cout << n;
  search();
}



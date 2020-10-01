#include <bits/stdc++.h>
using namespace std;

int main() {
  std::ios::sync_with_stdio(0);
  std::cin.tie(0);
  int n;
  cin >> n;
  vector<string> v;
  while (n--) {
    string s;
    cin >> s;
    v.push_back(s); // We store the strings in vector v
  }
  vector<int> ans;
  int temp = 0;
  // Now we iterate the loop from the last digit i.e, 49 index to 0th index
  for (int i = 49; i >= 0; i--) {
    int s = 0;
    // Now we add the integers at the ith index
    for (string x : v) {
      s += (x[i] - '0'); // We use x[i]-'0' to turn the char to integer
    }
    s += temp;
    // if it's the first index include all the digits of integer s in ans
    // else only store the last digit and pass the rest of the number to temp
    // Add temp to the next iteration like the real life addition
    if (i == 0) {
      while (s) {
        ans.push_back(s % 10);
        s /= 10;
      }
    } else
      ans.push_back(s % 10);
    temp = s / 10;
  }
  // Since we get the vector reversed we can simply print last 10 digits
  for (int i = 0; i < 10; i++)
    cout << ans[ans.size() - i - 1];
}

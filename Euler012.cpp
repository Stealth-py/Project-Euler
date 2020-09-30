// Written and maintained by Otaku619
// https://github.com/Otaku619/Project-Euler

#include <bits/stdc++.h>
using namespace std;

// Declaring a map to store values so that we won't need to run the function
// again and again

map<int, int> v;

// Note: For a number x if the divisors are in the form a^i.b^j.c^k where a,b,c
// are its prime factors, the number of total factors is (i+1)(j+1)(k+1)
// Explanation:
// In the above example we can include a in i ways, b in j ways and c in k ways
// so the answer should be i.j.k but there's another possibility of not adding
// it at all thus adding a 1 making it (i+1).(j+1).(k+1)

// A function to calculate all the divisors of a number
int div(int x) {
  // cnt is the number of factors, e is the exponent of the prime factor which
  // we will use repetatively
  int cnt = 1, e = 0;
  // First we check if the number is prime, if it is, we divide it by 2 and
  // increase e by one each time
  while (x % 2 == 0) {
    e++;
    x /= 2;
  }
  cnt *= (e + 1); // Here we multiply it by (e+1) (Refer to the formula
                  // discussed above)
  e = 0;
  int temp = x;
  // We set e to 0 and now check the other prime factors
  // Notice the increment of i by 2 since all even factors are eliminated
  for (int i = 3; i <= sqrt(temp); i += 2) {
    // We set e to 0 for every prime factor
    e = 0;
    // We apply a loop similar to the one we used in the case of 2
    while (x % i == 0) {
      e++;
      x /= i;
    }
    cnt *= (e + 1);
  }
  // If the number is still greater than 2 it means it is now divided down to a
  // prime number of exponent 1 So in this case exponent is 1 and we multiply
  // cnt by (1+1) i.e, 2
  if (x > 2)
    cnt *= 2;
  // We store the value in the map so that we dont need to use the function
  // again and again
  v[x] = cnt;
  return cnt;
}

int main() {
  int t, n;

  int a[1001];

  // Here we set an array a with the values for the answers which we will refer
  // to later in the code

  // We initialize 1 to 3 since 3 is the first triangle number with divisors>1
  a[1] = 3;

  // Here we declare three variables
  // j for just iterating the number
  // k for sum of the natural numbers upto j
  // z for checking the conditions
  int j = 1, k = 1, z = 1;

  for (int i = 2; i < 1001; i++) {
    while (z <= i) {
      j++;
      k = ((j + 1) * j) / 2;
      // Here we set z to v[k] if v[k] exists else we run the function div()
      if (v[k])
        z = v[k];
      else {
        v[k] = div(k);
        z = v[k];
      }
    }

    a[i] = k; // We assign the answer to the array;
  }
  cin >> t;
  while (t--) {
    cin >> n;
    cout << a[n] << endl;
  }
}

#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n, A[10000];
  cin >> n;
  for (int i = 0; i < n; i++)
  {
      /* code */
      cin >> A[i];
  }

  long long min = *min_element(A, A+n);
  long long max = *max_element(A, A+n);
  long long sum = accumulate(A, A+n,0LL);

  cout << min << " " 
  << max << " " << sum << endl;

}

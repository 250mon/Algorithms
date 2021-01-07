#include <iostream>
#include <new>
using namespace std;

int main() {
  int n, m, idx = -1;
  int * p;

  cin >> n >> m;
  p = new (nothrow) int[n];
  if (p == nullptr)
    cout << "Error: memory could not be allocated";
  else {
    for (int i = 0; i < n; i++)
      cin >> p[i];

    for (int i = n; i > 0; i--) {
      if(p[i-1] == m) {
        idx = i;
        break;
      }
    }
    delete[] p;
    cout << idx;
  }
  return 0;
}


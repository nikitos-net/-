#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
using namespace std;

signed main() {
int a, b;
cin >> a >> b;
int cnt = 0, diff = 0, num = 0;
for (int i = a, x; i <= b; ++i) {
x = i;
vector<int> p;
for (int j = 2; j <= sqrt(x); ++j) {
while (x % j == 0) {
p.push_back(j);
x /= j;
}
}
if (x != 1)
p.push_back(x);
bool ok = p.size() == 3;
for (int j = 1; j < (int) p.size(); ++j)
ok &= p[j - 1] != p[j], ok &= p[j - 1] % 10 == p[j] % 10;
if (ok) {
++cnt;
if (diff < p[2] - p[0]) {
diff = p[2] - p[0];
num = i;
}
}
}
cout << cnt << ' ' << num;
}

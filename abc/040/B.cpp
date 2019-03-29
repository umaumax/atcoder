#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>

int main(int argc, char* argv[]) {
  int n;
  std::cin >> n;

  int ret = 200000;
  for (int x = 1; x <= n; x++) {
    for (int y = 1; y <= n; y++) {
      if (x * y > n) {
        break;
      }
      int remain = n - x * y;
      int val    = std::abs(x - y) + remain;
      ret        = std::min(ret, val);
    }
  }
  std::cout << ret << std::endl;
  return 0;
}

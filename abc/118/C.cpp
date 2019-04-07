#include <algorithm>
#include <cmath>
#include <functional>
#include <iomanip>
#include <iostream>
#include <map>
#include <set>
#include <string>
#include <unordered_map>
#include <vector>

int main(int argc, char* argv[]) {
  int N;
  std::cin >> N;
  std::vector<int> As(N);
  for (auto&& A : As) {
    std::cin >> A;
  }
  for (;;) {
    int v          = *std::min_element(std::begin(As), std::end(As));
    bool diff_flag = false;
    for (auto&& A : As) {
      A %= v;
      if (A == 0) {
        A = v;
      } else {
        diff_flag = true;
      }
    }
    if (!diff_flag) {
      std::cout << v << std::endl;
      break;
    }
  }
  return 0;
}

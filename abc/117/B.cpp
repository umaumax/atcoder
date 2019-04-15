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
  std::vector<int> Ls(N);
  for (auto&& L : Ls) {
    std::cin >> L;
  }
  int max_L = *std::max_element(std::begin(Ls), std::end(Ls));
  int sum   = 0;
  std::for_each(std::begin(Ls), std::end(Ls),
                [&](const decltype(Ls)::value_type& e) { sum += e; });
  sum -= max_L;
  std::cout << (max_L < sum ? "Yes" : "No") << std::endl;
  return 0;
}

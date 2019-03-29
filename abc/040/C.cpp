#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  int N;
  std::cin >> N;
  std::vector<int> aN(N);
  for (auto&& a : aN) {
    std::cin >> a;
  }
  std::vector<int> cost(N);
  cost[0] = 0;
  cost[1] = std::abs(aN[0] - aN[1]);
  for (int i = 2; i < N; i++) {
    cost[i] = std::min(cost[i - 1] + std::abs(aN[i - 1] - aN[i]),
                       cost[i - 2] + std::abs(aN[i - 2] - aN[i]));
  }
  std::cout << cost[N - 1] << std::endl;
  return 0;
}

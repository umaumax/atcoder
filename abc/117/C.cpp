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
  int N, M;
  std::cin >> N >> M;
  if (N >= M) {
    std::cout << "0" << std::endl;
    return 0;
  }
  std::vector<int> Xs(M);
  for (auto&& X : Xs) {
    std::cin >> X;
  }
  std::sort(Xs.begin(), Xs.end());
  std::vector<int> Ls(M - 1);
  for (int i = 0; i + 1 < M; i++) {
    Ls[i] = Xs[i + 1] - Xs[i];
  }
  std::sort(Ls.begin(), Ls.end(), std::greater<int>());
  int sum_l = 0;
  for (int i = 0; i < N - 1; i++) {
    sum_l += Ls[i];
  }
  std::cout << (Xs[M - 1] - Xs[0]) - sum_l << std::endl;
  return 0;
}

#include <algorithm>
#include <cmath>
#include <functional>
#include <iostream>
#include <map>
#include <set>
#include <string>
#include <unordered_map>
#include <vector>

int main(int argc, char* argv[]) {
  int N, A, B, C;
  std::cin >> N >> A >> B >> C;
  std::vector<int> ls(N);
  for (auto&& l : ls) {
    std::cin >> l;
  }
  // NOTE: return cost(MP)
  std::function<int(int cur, int a, int b, int c)> dfs;
  dfs = [&](int cur, int a, int b, int c) {
    if (cur == N) {
      if (a > 0 && b > 0 && c > 0) {
        // NOTE: 対象となる竹のベースが存在し，0ベースとの合成(10MPx3)分のコストを差し引く
        // NOTE: 竹を使用することを0lengthとの合成として考えていたため
        return std::abs(a - A) + std::abs(b - B) + std::abs(c - C) - 30;
      } else {
        return static_cast<int>(1e8);
      }
    }
    // NOTE: not use ls[cur]
    int ret0 = dfs(cur + 1, a, b, c);
    // NOTE: use ls[cur] (concat)
    int ret1 = dfs(cur + 1, a + ls[cur], b, c) + 10;
    int ret2 = dfs(cur + 1, a, b + ls[cur], c) + 10;
    int ret3 = dfs(cur + 1, a, b, c + ls[cur]) + 10;
    return std::min(ret0, std::min(ret1, std::min(ret2, ret3)));
  };
  std::cout << dfs(0, 0, 0, 0) << std::endl;
  return 0;
}

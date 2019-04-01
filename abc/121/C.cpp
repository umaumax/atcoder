#include <algorithm>
#include <iostream>
#include <map>
#include <string>

int main(int argc, char* argv[]) {
  int64_t N, M;
  std::cin >> N >> M;
  std::map<int64_t, int64_t> m;
  int64_t A, B;
  for (int j = 0; j < N; j++) {
    std::cin >> A >> B;
    if (m.find(A) == m.end()) {
      m[A] = B;
    } else {
      m[A] += B;
    }
  }
  int64_t val_sum = 0;
  int64_t cnt_sum = 0;
  for (auto&& e : m) {
    int64_t n = std::min(M - cnt_sum, e.second);
    cnt_sum += n;
    val_sum += e.first * n;
    if (n == 0) {
      break;
    }
  }
  std::cout << val_sum << std::endl;
  return 0;
}

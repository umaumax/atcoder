#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  int N, M, C;
  std::cin >> N >> M >> C;
  std::vector<int> Bs(M);
  for (auto&& B : Bs) {
    std::cin >> B;
  }
  int A;
  int cnt = 0;
  for (int j = 0; j < N; j++) {
    int sum = C;
    for (int i = 0; i < M; i++) {
      std::cin >> A;
      sum += A * Bs[i];
    }
    if (sum > 0) {
      cnt++;
    }
  }
  std::cout << cnt << std::endl;
  return 0;
}

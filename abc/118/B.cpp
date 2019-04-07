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
  int data[N][M];
  for (int j = 0; j < N; j++) {
    for (int i = 0; i < M; i++) {
      data[j][i] = 0;
    }
  }
  for (int j = 0; j < N; j++) {
    int K;
    std::cin >> K;
    for (int i = 0; i < K; i++) {
      int A;
      std::cin >> A;
      data[j][A - 1] = 1;
    }
  }

  int cnt = 0;
  for (int i = 0; i < M; i++) {
    for (int j = 0; j < N; j++) {
      if (data[j][i] == 0) {
        break;
      }
      if (j == N - 1) {
        cnt++;
      }
    }
  }
  std::cout << cnt << std::endl;
  return 0;
}

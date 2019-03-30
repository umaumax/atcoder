#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  int N, Q;
  std::cin >> N >> Q;
  std::string S;
  std::cin >> S;
  std::vector<int> d(N + 1);
  int cnt = 0;
  for (int i = 2; i <= N; i++) {
    if (S[i - 2] == 'A' && S[i - 1] == 'C') {
      cnt++;
    }
    d[i] = cnt;
  }
  int l, r;
  for (int i = 0; i < Q; i++) {
    std::cin >> l >> r;
    int l_cnt = d[l];
    int r_cnt = d[r];
    int ret   = r_cnt - l_cnt;
    std::cout << ret << std::endl;
  }
  return 0;
}

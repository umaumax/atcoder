#include <algorithm>
#include <iostream>
#include <string>

int GCD(int a, int b) {
  if (b == 0) {
    return a;
  }
  return GCD(b, a % b);
}

int main(int argc, char* argv[]) {
  int N;
  std::cin >> N;
  int A;
  int ret = 10e9 + 1;
  for (int i = 0; i < N; i++) {
    std::cin >> A;
    if (A % 2 == 1) {
      ret = 0;
      break;
    }
    if (i == 0) {
      ret = A;
      continue;
    }
    ret = GCD(ret, A);
  }
  int cnt = 0;
  while (ret > 1) {
    ret /= 2;
    cnt++;
  }
  std::cout << cnt << std::endl;
  return 0;
}

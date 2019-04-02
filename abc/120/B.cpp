#include <algorithm>
#include <iostream>
#include <string>

int main(int argc, char* argv[]) {
  int A, B, K;
  std::cin >> A >> B >> K;
  int cnt = 0;
  for (int i = std::max(A, B); i >= 1; i--) {
    if (A % i == 0 && B % i == 0) {
      cnt++;
      if (cnt == K) {
        std::cout << i << std::endl;
        break;
      }
    }
  }
  return 0;
}

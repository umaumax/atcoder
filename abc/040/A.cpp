#include <algorithm>
#include <iostream>
#include <string>

int main(int argc, char* argv[]) {
  int n, x;
  std::cin >> n >> x;
  std::cout << std::min(x - 1, n - x) << std::endl;
  return 0;
}

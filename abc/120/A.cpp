#include <algorithm>
#include <iostream>
#include <string>

int main(int argc, char* argv[]) {
  int A, B, C;
  std::cin >> A >> B >> C;
  std::cout << std::min(C, B / A) << std::endl;
  return 0;
}

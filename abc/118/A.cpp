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
  int A, B;
  std::cin >> A >> B;
  if (B % A == 0) {
    std::cout << A + B << std::endl;
  } else {
    std::cout << B - A << std::endl;
  }
  return 0;
}

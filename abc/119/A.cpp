#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <set>
#include <string>
#include <unordered_map>
#include <vector>

int main(int argc, char* argv[]) {
  std::string S;
  std::cin >> S;
  std::cout << (S <= "2019/04/30" ? "Heisei" : "TBD") << std::endl;
  return 0;
}

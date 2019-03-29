#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<char> s(3);
  for (auto&& c : s) {
    std::cin >> c;
  }
  int cnt = 0;
  for (auto&& c : s) {
    cnt += (c == '1');
  }
  std::cout << cnt << std::endl;
  return 0;
}

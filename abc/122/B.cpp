#include <algorithm>
#include <iostream>
#include <string>

int main(int argc, char* argv[]) {
  std::string S;
  std::cin >> S;

  int ret = 0;
  int cnt = 0;
  for (auto&& s : S) {
    if (s == 'A' || s == 'C' || s == 'G' || s == 'T') {
      cnt++;
      ret = std::max(ret, cnt);
    } else {
      cnt = 0;
    }
  }
  std::cout << ret << std::endl;
  return 0;
}

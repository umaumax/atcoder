#include <iostream>

int main(int argc, const char* argv[]) {
  int a, b, c;
  std::string s;
  std::cin >> a >> b >> c;
  std::cin >> s;
  std::cout << (a + b + c) << " " << s << std::endl;
  return 0;
}

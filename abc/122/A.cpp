#include <iostream>
#include <map>
#include <string>

int main(int argc, char* argv[]) {
  std::map<char, char> m = {
      {'A', 'T'},
      {'C', 'G'},
      {'G', 'C'},
      {'T', 'A'},
  };
  char b;
  std::cin >> b;
  std::cout << m[b] << std::endl;
  return 0;
}

#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <map>
#include <set>
#include <string>
#include <unordered_map>
#include <vector>

int main(int argc, char* argv[]) {
  int N;
  double ret = 0.0;
  std::cin >> N;
  for (int i = 0; i < N; i++) {
    double x;
    std::string u;
    std::cin >> x >> u;
    if (u == "JPY") {
      ret += x;
    } else if (u == "BTC") {
      ret += x * 380000.0;

    } else {
      return 1;
    }
  }
  std::cout << std::setprecision(6) << ret << std::endl;
  return 0;
}

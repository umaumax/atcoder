#include <iostream>
#include <string>

int main(int argc, char* argv[]) {
  int H, W;
  int h, w;
  std::cin >> H >> W;
  std::cin >> h >> w;
  std::cout << H * W - h * W - w * H + h * w << std::endl;
  return 0;
}

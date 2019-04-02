#include <iostream>
#include <stack>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::string S;
  std::cin >> S;
  int N = S.length();
  std::vector<int> vs(N);
  int i = 0;
  for (auto&& s : S) {
    vs[i] = s - '0';
    i++;
  }
  std::stack<int> st;
  for (auto&& v : vs) {
    if (!st.empty()) {
      if (st.top() != v) {
        st.pop();
        continue;
      }
    }
    st.push(v);
  }
  std::cout << N - st.size() << std::endl;
  return 0;
}

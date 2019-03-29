#include <iostream>
#include <string>
#include <vector>

using namespace std;

// FYI: [Union\-Find木の解説と例題 \- Qiita]( https://qiita.com/ofutonfuton/items/c17dfd33fc542c222396 )
struct UnionFind {
  vector<int> par;  // par[i]:iの親の番号　(例) par[3] = 2 : 3の親が2

  UnionFind(int N) : par(N) {  //最初は全てが根であるとして初期化
    for (int i = 0; i < N; i++) par[i] = i;
  }

  int root(int x) {  // データxが属する木の根を再帰で得る：root(x) = {xの木の根}
    if (par[x] == x) return x;
    return par[x] = root(par[x]);
  }

  void unite(int x, int y) {  // xとyの木を併合
    int rx = root(x);         //xの根をrx
    int ry = root(y);         //yの根をry
    if (rx == ry) return;  //xとyの根が同じ(=同じ木にある)時はそのまま
    par[rx] =
        ry;  //xとyの根が同じでない(=同じ木にない)時：xの根rxをyの根ryにつける
  }

  bool same(int x, int y) {  // 2つのデータx, yが属する木が同じならtrueを返す
    int rx = root(x);
    int ry = root(y);
    return rx == ry;
  }
};

int main(int argc, char* argv[]) {
  int N, M;
  std::cin >> N >> M;
  std::vector<int> as(M);
  std::vector<int> bs(M);
  std::vector<int> ys(M);
  for (int i = 0; i < M; i++) {
    std::cin >> as[i] >> bs[i] >> ys[i];
  }
  int Q;
  std::cin >> Q;
  std::vector<int> vs(Q);
  std::vector<int> ws(Q);
  for (int i = 0; i < Q; i++) {
    std::cin >> vs[i] >> ws[i];
  }

  for (int i = 0; i < Q; i++) {
    int v = vs[i];
    int w = ws[i];
    UnionFind tree(N);
    for (int i = 0; i < M; i++) {
      if (ys[i] <= w) {
        continue;
      }
      tree.unite(as[i], bs[i]);
    }
    int v_root = tree.root(v);
    int cnt    = 0;
    for (int i = 0; i < N; i++) {
      int root = tree.root(i);
      if (v_root == root) {
        cnt++;
      }
    }
    std::cout << cnt << std::endl;
  }
  return 0;
}

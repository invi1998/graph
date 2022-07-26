#ifndef MINIMUMSPANTREE_EDGE_H
#define MINIMUMSPANTREE_EDGE_H

#include <cassert>
#include <iostream>

using namespace std;

template <typename Weight> class Edge {
private:
  int a, b;
  Weight weight;

public:
  Edge(int a, int b, Weight weight);
  Edge();
  ~Edge();

public:
  int v();
  int w();
  Weight wt();

  int other(int x);

  // 重载输出运算符
  friend ostream &operator<<(ostream &os, const Edge &e);

  auto operator<=>(const Edge<Weight> &e) const = default;
};

#endif
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
  Weight wt() const;

  int other(int x);

  // 重载输出运算符
  friend ostream &operator<<(ostream &os, const Edge<Weight> &e);
  
  // c++20编译环境搞不定。不用三路了
  // auto operator<=>(const Edge<Weight> &e) const = default;
  bool operator<(const Edge<Weight> &e) { return weight < e.wt(); }
  bool operator<=(const Edge<Weight> &e)  { return weight <= e.wt(); }
  bool operator>(const Edge<Weight> &e)  { return weight > e.wt(); }
  bool operator>=(const Edge<Weight> &e)  { return weight >= e.wt(); }
  bool operator==(const Edge<Weight> &e)  { return weight == e.wt(); }
  bool operator!=(const Edge<Weight> &e)  { return weight != e.wt(); }
};

#endif
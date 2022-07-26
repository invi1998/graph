#include "Edge.h"

template<typename Weight>
Edge<Weight>::Edge() {}

template<typename Weight>
Edge<Weight>::Edge(int a, int b, Weight weight) {
    this->a = a;
    this->b = b;
    this->weight = weight;
}

template<typename Weight>
Edge<Weight>::~Edge() {}

template<typename Weight>
int Edge<Weight>::v() {
    return a;
}

template<typename Weight>
int Edge<Weight>::w() {
    return b;
}

template<typename Weight>
Weight Edge<Weight>::wt() const {
    return weight;
}

template<typename Weight>
int Edge<Weight>::other(int x) {
    assert(x == a || x == b);
    return x == a ? b : a;
}

template<typename Weight>
ostream &operator<<(ostream &os, const Edge<Weight> &e) {
    os << e.a << "-" << e.b << ":" << e.weight;
    return os;
}

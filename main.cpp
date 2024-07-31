#include <iostream>
#include <sstream>
#include <iomanip>
#include <memory>
#include <vector>

#include "Pair.h"

using namespace std;

template<typename T>
T larger(T a, T b) {
    return (a > b) ? a : b;
}

template<typename K, typename V>
void display(K key, V value) {
    cout << key << " = " << value << endl;
}

int main() {
    Pair pair{"Hello", 1};

    return 0;
}
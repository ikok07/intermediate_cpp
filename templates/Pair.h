//
// Created by Kaloyan Petkov on 31.07.24.
//

#ifndef INTERMEDIATE_CPP_PAIR_H
#define INTERMEDIATE_CPP_PAIR_H

#include <string>
using namespace std;

template<typename K, typename V>
class Pair {
public:
    Pair(K key, V Value);
    K get_key();
    V get_value();
private:
    K key;
    V value;
};

template<typename K, typename V>
Pair<K, V>::Pair(K key, V Value) {
    this->key = key;
    this->value = value;
}

template<typename K, typename V>
K Pair<K, V>::get_key() {
    return this->key;
}

template<typename K, typename V>
V Pair<K, V>::get_value() {
    return this->value;
}

#endif //INTERMEDIATE_CPP_PAIR_H

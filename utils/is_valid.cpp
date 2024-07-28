//
// Created by Kaloyan Petkov on 27.07.24.
//

#include <iostream>

using namespace std;

bool is_valid(string& customer_num) {
    if (customer_num.length() != 6) return false;

    for (int i = 0; i < 2; i++)
        if (!isalpha(customer_num[i])) return false;

    for (int i = 2; i < customer_num.length(); i++)
        if (!isnumber(customer_num[i])) return false;

    return true;
}
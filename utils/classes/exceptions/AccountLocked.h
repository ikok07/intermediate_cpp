//
// Created by Kaloyan Petkov on 31.07.24.
//

#ifndef INTERMEDIATE_CPP_ACCOUNTLOCKED_H
#define INTERMEDIATE_CPP_ACCOUNTLOCKED_H

#include <stdexcept>
using namespace std;

class AccountLocked : public exception {
public:
    const char* what() const noexcept override {
        return "Your account is locked! Contact the admin.";
    };
};


#endif //INTERMEDIATE_CPP_ACCOUNTLOCKED_H

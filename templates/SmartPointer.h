//
// Created by Kaloyan Petkov on 30.07.24.
//

#ifndef INTERMEDIATE_CPP_SMARTPOINTER_H
#define INTERMEDIATE_CPP_SMARTPOINTER_H


class SmartPointer {
public:
    explicit SmartPointer(int *ptr);
    ~SmartPointer();
    int& operator*();
private:
    int* ptr;
};


#endif //INTERMEDIATE_CPP_SMARTPOINTER_H

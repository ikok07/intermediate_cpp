//
// Created by Kaloyan Petkov on 30.07.24.
//

#ifndef INTERMEDIATE_CPP_WIDGET_H
#define INTERMEDIATE_CPP_WIDGET_H

class Widget {
public:
    virtual ~Widget() = default;
    virtual void draw() const = 0 ;
    void enable();
    void disable();
    bool is_enabled() const;
private:
    bool enabled;
};


#endif //INTERMEDIATE_CPP_WIDGET_H

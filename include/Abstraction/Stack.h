#ifndef QUEUE_STACK_H
#define QUEUE_STACK_H

#include "Abstraction.h"

template<class T, class Implementer>
class Stack : public Abstraction<T> {
private:
    Implementer implementer;
public:
    bool isEmpty() const {
        return implementer.empty();
    }

    const T &top() const {
        return implementer.back();
    }

    void pop() {
        implementer.pop_back();
    }

    void push(const T &elem) {
        implementer.push_back(elem);
    }
};

#endif //QUEUE_STACK_H

#ifndef QUEUE_QUEUE_H
#define QUEUE_QUEUE_H

#include "Abstraction.h"

template<class T, class Implementer>
class Queue : public Abstraction<T> {
private:
    Implementer implementer;
public:
    bool isEmpty() const {
        return implementer.empty();
    }

    const T& top() const {
        return implementer.back();
    }

    void pop() {
        implementer.pop_back();
    }

    void push(const T &elem) {
        implementer.push_front(elem);
    }
};


#endif //QUEUE_QUEUE_H

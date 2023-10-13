#ifndef QUEUE_LIST_H
#define QUEUE_LIST_H

#include <list>
#include "Implementer.h"

template<class T>
class List : public Implementer<T> {
private:
    std::list<T> list;
public:
    bool empty() const {
        return list.empty();
    }

    const T &back() const {
        return list.back();
    }

    void pop_back() {
        list.pop_back();
    }

    void push_back(const T &elem) {
        list.push_back(elem);
    }

    T &front() {
        return list.front();
    }

    void pop_front() {
        list.pop_front();
    }

    void push_front(const T &elem) {
        list.push_front(elem);
    }
};

#endif //QUEUE_LIST_H

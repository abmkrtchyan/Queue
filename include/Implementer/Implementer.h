#ifndef QUEUE_IMPLEMENTER_H
#define QUEUE_IMPLEMENTER_H

template<class T>
class Implementer {
    virtual bool empty() const = 0;

    virtual const T &back() const = 0;

    virtual void pop_back() = 0;

    virtual void push_back(const T &elem) = 0;

    virtual T &front() = 0;

    virtual void pop_front() = 0;

    virtual void push_front(const T &elem) = 0;
};

#endif //QUEUE_IMPLEMENTER_H

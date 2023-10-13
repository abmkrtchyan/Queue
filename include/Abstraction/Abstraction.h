#ifndef QUEUE_ABSTRACTION_H
#define QUEUE_ABSTRACTION_H

template<class T>
class Abstraction {
public:
    virtual bool isEmpty() const = 0;

    virtual const T &top() const= 0;

    virtual void pop() = 0;

    virtual void push(const T &elem) = 0;
};

#endif //QUEUE_ABSTRACTION_H

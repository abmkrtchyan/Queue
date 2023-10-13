#include "BrideTest.h"

void testStack() {
    Stack<char, List<char>> s;
    std::cout << std::endl << "*** STACK: a, b, c are sequentially pushed and popped ***" << std::endl;
    s.push('a');
    s.push('b');
    s.push('c');
    while (!s.isEmpty()) {
        std::cout << s.top() << std::endl;
        s.pop();
    }
    std::cout << std::endl;
}

void testQueue() {
    Queue<char, List<char>> q;
    std::cout << std::endl << "*** QUEUE: a, b, c are sequentially pushed and popped ***" << std::endl;
    q.push('a');
    q.push('b');
    q.push('c');
    while (!q.isEmpty()) {
        std::cout << q.top() << std::endl;
        q.pop();
    }
    std::cout << std::endl;
}

#include "Queue.hpp"
#include <iostream>

int main() {
    Queue<int> queue;
    queue.enqueue(2);
    queue.enqueue(4);
    queue.enqueue(10);
    queue.print();
    queue.dequeue();
    queue.print();
    queue.dequeue();
    std::cout<<queue.peek()<<std::endl;
    return 0;
}

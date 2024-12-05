//
// Created by 35988 on 12/5/2024.
//

#ifndef WEEK10_TEMPLATES_QUEUE_HPP
#define WEEK10_TEMPLATES_QUEUE_HPP
#include<iostream>
#include<exception>
template <typename T>
struct Node{
    T data;
    Node* next;
    Node(const T& data, Node* next = nullptr) : data(data) , next(next) {}
};
template <typename T>
class Queue {
public:
    Queue() {
       first =last=nullptr;
    }
    Queue(const Queue& other) = delete;
    Queue& operator=(const Queue& other) = delete;

    ~Queue() {
        while(first != nullptr){
            Node<T>* temp =  first->next;
            delete first;
            first=temp;
        }
    }
    void enqueue(const T& element){
        if(first==nullptr){
            first= new Node<T>(element);
            last=first;
        }else{
            last->next=new Node<T>(element);
            last=last->next;
        }
    }
    void dequeue() {
        if(first==nullptr){
            throw std::out_of_range("No elements in queue!");
        }else{
            Node<T>* temp=first->next;
            delete first;
            first=temp;
        }
    }
    T peek() const{
        if(first == nullptr){
            throw std::out_of_range("No elements in queue!");
        }else{
            return first->data;
        }
    }
    void print() const {
        if(first==nullptr){
            return;
        }else{
            Node<T>* curr=first;
            while(curr != nullptr){
                std::cout<<curr->data<<std::endl;
                curr=curr->next;
            }
        }
    }
private:
    Node<T>* first;
    Node<T>* last;
};
#endif //WEEK10_TEMPLATES_QUEUE_HPP

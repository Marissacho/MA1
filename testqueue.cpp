#include "queue.h"
#include "testqueue.hpp"
#include <iostream>

using namespace std:

void testQueueSize(void){
q.enqueue(5);
q.enqueue(10);
cout<<"size after enqueuing 2 elements:"<<q.size()<<endl;
q.dequeue();
q.dequeue();
cout<<"size after dequeueing 2 elements: "<<q.size()<<endl;
}

void testQueueIsEmpty(void){
queue q2;
if(q2.isEmpty()){
cout<<"Queue is empty"<<endl;
}
}

void testQueueIsFull(void){
queue q3(3);
q3.enqueue(1);
q3.enqueue(2);
q3.enqueue(3);
if(q3.isFull())
{
cout<<"Queue is full"<<endl;
}
}

void testQueueDequeue(void){
queue q4;
q4.enqueue(1);
q4.enqueue(2);
cout<<"dequeueing the first element:";
q4.dequeue();
cout<<"Front element after dequeue: "<<q4.peek()<<endl;
}

void testQueueEnqueue(void){
queue q5;
q5.enqueue(5);
cout<<"Front element after enqueueing:"<<q5.peek()<<endl;
}
void testQueuePeek(void){
queue q6(2);
q6.enqueue(5);
q6.enqueue(10);
q6.enqueue(15);

queue q7;
q7.enqueue(1);
q7.enqueue(2);
cout<<"peek front element: "<<q7.peek()<<endl;

queue q8;
cout<<"peek on empty queue: "<<q8.peek()<<endl;

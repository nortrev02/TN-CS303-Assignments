
#include <iostream>
#include <queue>
using namespace std;

int move_to_rear(std::queue<int>& q) {
    q.push(q.front());
    q.pop();
    return 0;
}
// Function that copies the front element in the queue to the back and then deletes the front element
// "moves" the element to the rear

int main()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    cout << "Element at front before move_to_rear ran: " << q.front() << endl;
    move_to_rear(q);
    cout << "Element at front after move_to_rear ran: " << q.front();
}
// Main function used to demonstrate the function.
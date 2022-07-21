void interLeaveQueue(queue<int>& q)
{
    // Initialize an empty queue of int type
    queue<int> temp;
    int halfSize = q.size() / 2;
 
    // Push first half elements into the stack
    // queue:16 17 18 19 20, queue: 11 12 13 14 15
    for (int i = 0; i < halfSize; i++) {
        temp.push(q.front());
        q.pop();
    }
 
    // enqueue back the queue elements alternatively
    // queue: 11 16 12 17 13 18 14 19 15 20
    while (!temp.empty()) {
        q.push(temp.front());
        q.push(q.front());
        q.pop();
        temp.pop();
    }
}
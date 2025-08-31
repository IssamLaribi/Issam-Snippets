// 📌 Snippet: Reverse a Queue using a Stack
// Usage: Call reverseQueue(q) to reverse a queue<int>

#include <queue>
#include <stack>
using namespace std;

void reverseQueue(queue<int>& q) {
    stack<int> s;
    while (!q.empty()) {
        s.push(q.front());
        q.pop();
    }
    while (!s.empty()) {
        q.push(s.top());
        s.pop();
    }
}

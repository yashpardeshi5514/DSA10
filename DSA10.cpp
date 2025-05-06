#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
    int n, mark;

    // Max Heap for maximum marks
    priority_queue<int> maxHeap;

    // Min Heap for minimum marks (using greater<>)
    priority_queue<int, vector<int>, greater<int>> minHeap;

    cout << "Enter number of students: ";
    cin >> n;

    cout << "Enter marks of " << n << " students:\n";
    for (int i = 0; i < n; i++) {
        cin >> mark;
        maxHeap.push(mark);
        minHeap.push(mark);
    }

    if (n == 0) {
        cout << "No marks entered!\n";
        return 0;
    }

    cout << "\nMaximum Marks: " << maxHeap.top();
    cout << "\nMinimum Marks: " << minHeap.top() << endl;

    return 0;
}

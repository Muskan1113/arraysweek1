#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Given vector
    vector<int> v{96, 45, 63, 34, 2, 4, 9, 8, 66, 89, 98, 66, 32, 98, 45, 100, 100 };
    
    // Create a set to store unique elements
    set<int> uniqueSet;
    
    // Insert unique elements from vector to set
    for (int i = 0; i < v.size(); i++) 
    {
        uniqueSet.insert(v[i]);
    }
    
    // Create a priority queue
    priority_queue<int> pq;
    
    // Insert unique elements from set to priority queue
    for (auto it = uniqueSet.begin(); it != uniqueSet.end(); ++it) 
    {
        pq.push(*it);
    }

    // Remove largest element from pq
    pq.pop();

    // Now top of priority queue is the second largest element
    cout << "The Second Largest Element in the Vector is: ";
    cout << pq.top() << endl;

    return 0;
}

#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
using namespace std;

int main() {
    cout << "=== VECTOR OPERATIONS ===" << endl;

    vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(5);
    v.push_back(15);

    cout << "Vector elements: ";
    for (vector<int>::iterator it = v.begin(); it != v.end(); ++it)
        cout << *it << " ";
    cout << endl;

    sort(v.begin(), v.end());

    cout << "After sorting: ";
    for (vector<int>::iterator it = v.begin(); it != v.end(); ++it)
        cout << *it << " ";
    cout << endl;

    reverse(v.begin(), v.end());

    cout << "After reversing: ";
    for (vector<int>::iterator it = v.begin(); it != v.end(); ++it)
        cout << *it << " ";
    cout << endl;

    v.pop_back();

    cout << "After pop_back(): ";
    for (vector<int>::iterator it = v.begin(); it != v.end(); ++it)
        cout << *it << " ";
    cout << endl;

    cout << "Vector size: " << v.size() << endl;

    cout << "\n=== LIST OPERATIONS ===" << endl;

    list<int> l;

    l.push_back(30);
    l.push_back(10);
    l.push_back(40);
    l.push_front(20);

    cout << "List elements: ";
    for (list<int>::iterator it = l.begin(); it != l.end(); ++it)
        cout << *it << " ";
    cout << endl;

    l.sort();

    cout << "After sorting: ";
    for (list<int>::iterator it = l.begin(); it != l.end(); ++it)
        cout << *it << " ";
    cout << endl;

    l.reverse();

    cout << "After reversing: ";
    for (list<int>::iterator it = l.begin(); it != l.end(); ++it)
        cout << *it << " ";
    cout << endl;

    l.remove(20);

    cout << "After removing 20: ";
    for (list<int>::iterator it = l.begin(); it != l.end(); ++it)
        cout << *it << " ";
    cout << endl;

    cout << "List size: " << l.size() << endl;

    return 0;
}

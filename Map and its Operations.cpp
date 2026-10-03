#include <iostream>
#include <map>
using namespace std;

int main() {
    // Creating a map
    map<int, string> students;

    // 1. Insertion
    students[101] = "Ravi";
    students[102] = "Kiran";
    students[103] = "Sai";
    students.insert({104, "Arjun"});

    cout << "Map elements:\n";

    // 2. Traversal
    for (auto x : students) {
        cout << x.first << " -> " << x.second << endl;
    }

    // 3. Accessing an element
    cout << "\nStudent with key 102: " << students[102] << endl;

    // 4. Finding an element
    int key = 103;

    if (students.find(key) != students.end()) {
        cout << "Key " << key << " found." << endl;
    } else {
        cout << "Key " << key << " not found." << endl;
    }

    // 5. Checking count
    cout << "Count of key 101: " << students.count(101) << endl;

    // 6. Updating a value
    students[101] = "Rahul";

    cout << "\nAfter updating key 101:\n";
    for (auto x : students) {
        cout << x.first << " -> " << x.second << endl;
    }

    // 7. Deleting an element
    students.erase(102);

    cout << "\nAfter deleting key 102:\n";
    for (auto x : students) {
        cout << x.first << " -> " << x.second << endl;
    }

    // 8. Size of map
    cout << "\nSize of map: " << students.size() << endl;

    // 9. Check whether map is empty
    if (students.empty()) {
        cout << "Map is empty." << endl;
    } else {
        cout << "Map is not empty." << endl;
    }

    // 10. Clear the map
    students.clear();

    cout << "Size after clear(): " << students.size() << endl;

    return 0;
}

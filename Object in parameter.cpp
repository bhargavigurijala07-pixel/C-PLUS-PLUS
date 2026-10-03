#include <iostream>
using namespace std;
class Student{
public:
    int marks;
    void getData(int m){
        marks=m;
    }
    void compare(Student s){
        if (marks > s.marks)
            cout<<"Current object has higher marks."<< endl;
        else if (marks < s.marks)
            cout<< "Passed object has higher marks."<< endl;
        else
            cout<<"Both have equal marks."<<endl;
    }
};
int main() {
    Student s1, s2;
    s1.getData(85);
    s2.getData(84);
    s1.compare(s2);
    return 0;
} 

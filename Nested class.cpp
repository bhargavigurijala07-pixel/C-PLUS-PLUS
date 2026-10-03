#include <iostream>
using namespace std;
class Student{
public:
    class Marks{
    public:
        int m;
        void getMarks(int x){
            m=x;
        }
        void display(){
            cout<<"Marks="<< m<<endl;
        }
    };
};
int main(){
    Student::Marks s;   
    s.getMarks(95);
    s.display();
    return 0;
}

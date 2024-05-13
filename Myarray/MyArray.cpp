#include "MyArray.hpp"
#include <iostream>
#include <string>
using namespace std;

class Person
{
private:
    string M_name;
    int M_age;
public:
    Person() {};
    Person(string name, int age) {
        M_name = name;
        M_age = age;
    }
    string sear_name() {
        return M_name;
    }
    int sear_age() {
        return M_age;
    }
};

void print_arr(MyArray<int>& arr)
{
    for(int i = 0;i<arr.get_size();++i)
        cout << arr[i] << ' ' ;
}

void print_per(MyArray<Person> arr)
{
    for(int i = 0;i<arr.get_size();++i)
        cout << arr[i].sear_name() << "  " << arr[i].sear_age() << endl;
}

int main()
{
    MyArray<int> arr1(5);
    for(int i = 0;i<5;++i)
    {
        //尾插法插入数据
        arr1.Push_Back(i);
    }
    cout << "arr1: " ;
    print_arr(arr1);
    cout << endl;
    cout << "arr1 size:" << arr1.get_size() << endl;

    MyArray<Person> arr(10);
    Person p1("sun", 999);
    Person p2("sha", 11);
    Person p3("bi", 33);
    Person p4("cao", 99);
    Person p5("nima", 199);

    arr.Push_Back(p1);
    arr.Push_Back(p2);
    arr.Push_Back(p3);
    arr.Push_Back(p4);
    arr.Push_Back(p5);
    print_per(arr);

    return 0;
}
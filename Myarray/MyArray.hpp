#ifndef PROJECT07_MYARRAY_H
#define PROJECT07_MYARRAY_H
#include <iostream>
using namespace std;

//类模板创建时机是在调用的时候
template<class T>
class MyArray
{
private:
    T* pAddress;    //指向堆区开辟的真实的数组
    int m_capacity;
    int m_size;
public:
    MyArray(int capacity) {
        m_capacity = capacity;
        m_size = 0;
        pAddress = new T[m_capacity];
    }
    //拷贝构造
    MyArray(const MyArray& arr) {
        m_capacity = arr.m_capacity;
        m_size = arr.m_size;
//        pAddress = arr.pAddress;
        pAddress = new T[arr.m_capacity];
        //深拷贝
        //讲arr中的数组元素 全部拷贝过来
        for(int i = 0; i < m_size; ++i) {
            pAddress[i] = arr.pAddress[i];
        }
    }

    ~MyArray() {
        if(pAddress != NULL) {
            delete [] pAddress;
            pAddress = NULL;
        }
    }

    //尾插法
    void Push_Back(const T& val) {
        //判断容量是否已经等于最大了
        if(m_capacity == m_size)
            return ;
        pAddress[m_size] = val;
        ++m_size;
    }

    //尾删法
    void Pop_Back() {
        if(m_size == 0)
            return ;
        --m_size;
    }

    //通过下标方式访问数组中的元素


    MyArray& operator=(const MyArray& arr) {
        //判断原来堆区是否有数据，如果有，先释放
        if(pAddress != NULL) {
            delete [] pAddress;
            pAddress = NULL;
            m_capacity = 0;
            m_size = 0;
        }
        m_capacity = arr.m_capacity;
        m_size = arr.m_size;
        pAddress = new T [m_capacity];
        for(int i = 0;i<m_capacity; ++i) {
            pAddress[i] = arr.pAddress[i];
        }
        return *this;
    }

    T& operator[](int index) {  //返回T&，把本身的值作为返回使用
        return pAddress[index];
    }

    int get_size() {
        return m_size;
    }
};

#endif //PROJECT07_MYARRAY_H

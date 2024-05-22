//
// Created by guoqi on 2024/5/20.
//
#include "Heap.h"

void HeapInit(Heap* php)
{
    assert(php);
    php->_a = NULL;
    php->_size = php->_capacity = 0;
}

void HeapDestory(Heap* php)
{
    assert(php);
    assert(php->_a);
    free(php->_a);
    free(php);
    php = NULL;
}

void Swap(HPDataType* a, HPDataType* b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

//向上调整算法
void AdjustUp(HPDataType* _a, int child)
{
    assert(_a);
    int parent = (child - 1) / 2;
    while(child > 0)
    {
        if(_a[child] < _a[parent])
        {
            Swap(&_a[child], &_a[parent]);
            child = parent;
            parent = (child - 1) / 2;
        }
        else
            break;
    }
}

//向下调整算法
void AdjustDown(HPDataType* _a, int parent, int size)
{
    assert(_a);
    int child = parent * 2 + 1;
    while(child < size)
    {
        if(child + 1 < size && _a[child] > _a[child + 1])
            ++child;
        if(_a[child] < _a[parent])
        {
            Swap(&_a[child], &_a[parent]);
            parent = child;
            child = parent * 2 + 1;
        }
        else
            break;
    }
}

// 堆的插入
void HeapPush(Heap* php, HPDataType x)
{
    assert(php);
    if(php->_size == php->_capacity)
    {
        int newcapacity = php->_capacity == 0 ? 4 : 2 * php->_capacity;
        HPDataType *tmp = (HPDataType *) realloc(php->_a, newcapacity * sizeof(HPDataType));
        if (tmp == NULL) {
            perror("realloc failed");
            exit(1);
        }
        php->_a = tmp;
        php->_capacity = newcapacity;
    }
    php->_a[php->_size++] = x;
    AdjustUp(php->_a, php->_size - 1);
}

// 堆的删除
void HeapPop(Heap* php)
{
    assert(php);
    Swap(&php->_a[0], &php->_a[php->_size - 1]);
    --php->_size;
    AdjustDown(php->_a, 0, php->_size);
}

// 取堆顶的数据
HPDataType HeapTop(Heap* php)
{
    assert(php);
    assert(php->_a);
    return php->_a[0];
}

// 堆的数据个数
int HeapSize(Heap* php)
{
    assert(php);
    return php->_size;
}

// 堆的判空
bool HeapEmpty(Heap* php)
{
    assert(php);
    return php->_size == 0;
}
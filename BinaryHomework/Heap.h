//
// Created by guoqi on 2024/5/20.
//

#ifndef BINARYHOMEWORK_HEAP_H
#define BINARYHOMEWORK_HEAP_H

//实现小堆
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>

typedef int HPDataType;
typedef struct Heap
{
	HPDataType* _a;
	int _size;
	int _capacity;
}Heap;

void HeapInit(Heap* php);
// 堆的销毁
void HeapDestory(Heap* php);
// 堆的插入
void HeapPush(Heap* php, HPDataType x);
// 堆的删除
void HeapPop(Heap* php);
// 取堆顶的数据
HPDataType HeapTop(Heap* php);
// 堆的数据个数
int HeapSize(Heap* php);
// 堆的判空
bool HeapEmpty(Heap* php);
//向上调整算法
void AdjustUp(HPDataType* _a, int child);
//向下调整算法
void AdjustDown(HPDataType* _a, int parent, int size);

#endif //BINARYHOMEWORK_HEAP_H

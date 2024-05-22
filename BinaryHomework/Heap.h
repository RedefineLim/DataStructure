//
// Created by guoqi on 2024/5/20.
//

#ifndef BINARYHOMEWORK_HEAP_H
#define BINARYHOMEWORK_HEAP_H

//ʵ��С��
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
// �ѵ�����
void HeapDestory(Heap* php);
// �ѵĲ���
void HeapPush(Heap* php, HPDataType x);
// �ѵ�ɾ��
void HeapPop(Heap* php);
// ȡ�Ѷ�������
HPDataType HeapTop(Heap* php);
// �ѵ����ݸ���
int HeapSize(Heap* php);
// �ѵ��п�
bool HeapEmpty(Heap* php);
//���ϵ����㷨
void AdjustUp(HPDataType* _a, int child);
//���µ����㷨
void AdjustDown(HPDataType* _a, int parent, int size);

#endif //BINARYHOMEWORK_HEAP_H

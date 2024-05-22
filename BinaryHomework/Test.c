//
// Created by guoqi on 2024/5/20.
//
#include "Heap.h"

//void TestHeap1()
//{
//    int a[] = {4,2,8,1,5,6,9,7};
//    Heap Heap;
//    HeapInit(&Heap);
//    for(size_t i =0; i < sizeof(a) / sizeof(int); ++i)
//    {
//        HeapPush(&Heap, a[i]);
//    }
//    while(!HeapEmpty(&Heap))
//    {
//        printf("%d ", HeapTop(&Heap));
//        HeapPop(&Heap);
//    }
////    int k = 0;
////    scanf("%d", &k);
////    while(k--)
////    {
////        printf("%d ", HeapTop(&Heap));
////        HeapPop(&Heap);
////    }
//    printf("\n");
//}

//¶ÑÅÅÐò O(N*logN)
//Ã°ÅÝÅÅÐòO(N^2)
//void HeapSort(int* a, int n)
//{
//    //ÉýÐò, ½¨´ó¶Ñ
//    //½µÐò, ½¨Ð¡¶Ñ
//    for(int i = 1; i < n; ++i)
//    {
//        AdjustUp(a, i);
//    }
//    int end = n - 1;
//    while(end--)
//    {
//        Swap(&a[0], &a[end]);
//        AdjustDown(a, end,0);
//    }
//}



void Swap(HPDataType* a, HPDataType* b);
//¶ÑÅÅÐò
void HeapSort(int* _a, int n)
{
    //ÉýÐò, ½¨´ó¶Ñ
    //½µÐò, ½¨Ð¡¶Ñ
    for(int i = (n - 2) / 2; i >= 0; --i)
    {
//        AdjustUp(_a, 1);
        AdjustDown(_a, i, n);
    }
    int end = n - 1;
    while(end)
    {
        Swap(&_a[0], &_a[end]);
        AdjustDown(_a, 0, end);
        --end;
    }
}
void TestHeap2()
{
    int a[] = {4,2,8,1,5,6,9,7};
    HeapSort(a, sizeof(a) / sizeof(int));
    for(int i = 0; i < sizeof(a) / sizeof(int); ++i)
    {
        printf("%d ", a[i]);
    }
}

int main()
{
//    TestHeap1();
    TestHeap2();

    return 0;
}

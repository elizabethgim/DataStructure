#define MAX_ELEMENT 200

typedef struct{
  int key;
} element;

typedef struct{
  element heap[MAX_ELEMENT];
  int heap_size;
} HeapType;

# 힙의 생성
HeapType heap1;

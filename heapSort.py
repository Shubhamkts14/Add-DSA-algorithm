# HeapSort Implemtation

def heapsort(lst):
    build_max_heap(lst)
    for i in range(len(lst) - 1, 0, -1):
        lst[0], lst[i] = lst[i], lst[0]
        max_heapify(lst, index=0, size=i)
 
def parent(i):
    return (i - 1)//2
 
def left(i):
    return 2*i + 1
 
def right(i):
    return 2*i + 2
 
def build_max_heap(lst):
    length = len(lst)
    start = parent(length - 1)
    while start >= 0:
        max_heapify(lst, index=start, size=length)
        start = start - 1
 
def max_heapify(lst, index, size):
    l = left(index)
    r = right(index)
    if (l < size and lst[l] > lst[index]):
        largest = l
    else:
        largest = index
    if (r < size and lst[r] > lst[largest]):
        largest = r
    if (largest != index):
        lst[largest], lst[index] = lst[index], lst[largest]
        max_heapify(lst, largest, size)
 
 
lst = input('Enter the list of numbers: ').split()
lst = [int(x) for x in lst]
heapsort(lst)
print('Sorted list: ', end='')
print(lst)
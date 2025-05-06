def allocate_fixed_heap():
    arr = [None] * 5
    for i in range(5):
        arr[i] = i * 2
    print(arr)

allocate_fixed_heap()


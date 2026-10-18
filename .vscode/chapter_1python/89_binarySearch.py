
# BINARY SEARCH ITERATIVELY

import numpy as np

def binarySearch(arr, item, start, end):

    mid = start + (end-start)/2;

    while(start<=end):
        if arr[mid]==item:
            return mid
        elif item<arr[mid]:
            end = mid-1
        else:
            start = mid+1
    return -1

arr = np.array([2, 4, 6, 8, 56, 78])

item = 56
n = len(arr)

index = binarySearch(arr, item, 0, n-1)

if arr ==-1:
    print("Element not found")
else:
    print("Element found at index : ", index)

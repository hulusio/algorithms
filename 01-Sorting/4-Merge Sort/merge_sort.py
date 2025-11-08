"""
1. **Divide**:  
   - The array is split into two halves.  
   - This process continues until the array is divided into single-element subarrays.  

2. **Conquer**:  
   - Each subarray is recursively sorted.  
   - Since single-element arrays are already sorted, the next step is merging these sorted arrays.  

3. **Merge**:  
   - Two sorted arrays are merged by comparing the smallest elements of both arrays.  
   - This process continues until all subarrays are merged into a fully sorted array. 
"""

def merge_sort(arr):
    #print(arr)
    if len(arr) <= 1:
        return arr

    mid = len(arr) // 2
    leftHalf = arr[:mid]
    rightHalf = arr[mid:]

    sortedLeft = merge_sort(leftHalf)
    sortedRight = merge_sort(rightHalf)    
    return merge(sortedLeft, sortedRight)

def merge(left, right):
    result = []
    i = j = 0
    #print(left)
    #print(right)

    while i < len(left) and j < len(right):
        if left[i] < right[j]:
            result.append(left[i])
            i += 1
        else:
            result.append(right[j])
            j += 1

    result.extend(left[i:])
    result.extend(right[j:])
    #print(result)
    #print("------")
    return result

unsortedArr = [3, 7, 6, -10, 15, 23.5, 55, -13]
sortedArr = merge_sort(unsortedArr)
print("Sorted array:", sortedArr)

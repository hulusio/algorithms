"""
1- Choose a value in the array to be the pivot element.
2- Order the rest of the array so that lower values than the pivot element are on the left, and 
 higher values are on the right.
3- Swap the pivot element with the first element of the higher values so that the pivot element lands
 in between the lower and higher values.
4- Do the same operations (recursively) for the sub-arrays on the left and right side of the pivot
 element
"""

def partition(array, low, high):
    pivot = array[high]
    i = low - 1

    for j in range(low, high):
        if array[j] <= pivot:
            i += 1
            array[i], array[j] = array[j], array[i]

    array[i+1], array[high] = array[high], array[i+1]
    return i+1

def quick_sort(array, low=0, high=None):
    if high is None:
        high = len(array) - 1
        
    #print("",array, low, high)
    if low < high:
        pivot_index = partition(array, low, high)
        quick_sort(array, low, pivot_index-1)
        quick_sort(array, pivot_index+1, high)

my_array = [64, 34, 25, 12, 22, 11, 90, 5]
quick_sort(my_array)
print("Sorted array:", my_array)

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
""""

def merge_sort(lst):
    length_list = len(lst)
    for i in range(1, length_list):
        key   = lst[i]
        #print(key)
        j = i -1
  	# In each pass, the largest elements are pushed to the end
        while( j >= 0 and lst[j] > key):                      
            lst[j + 1] = lst[j]
            j = j -1
        lst[j +1] = key     
if __name__ == "__main__":
	lst = [5, 2, 9, 1, 5, 6]
    # sort function
	merge_sort(lst)
	print(lst);

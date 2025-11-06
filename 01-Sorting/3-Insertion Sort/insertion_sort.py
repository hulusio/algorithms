#1-Initial State: The algorithm starts from the second element of the array (the first element is considered 
# already sorted).
#2-Nested Loop: The selected element (current element) is compared with the sorted part and placed in the 
# correct position.
#3-Placement: If the current element is smaller than an element in the sorted part, the sorted element is 
# shifted right, and the current element is inserted in the correct position.
#4- Repeat: The algorithm continues until the end of the array, placing each element in the correct position.
def insertion_sort(lst):
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
	insertion_sort(lst)
	print(lst);

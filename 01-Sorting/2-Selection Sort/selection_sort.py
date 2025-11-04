def selection_sort(lst):
    length_list = len(lst)
    for i in range(length_list):
        min_val   = lst[i]
        min_index = i
  	# In each pass, the largest elements are pushed to the end
        for j  in range(i + 1, length_list):
            if lst[j] < min_val:
                min_val       = lst[j]
                min_index = j
    			#print(smallest)
        lst[i], lst[min_index] = lst[min_index], lst[i]
             
if __name__ == "__main__":
	lst = [5, -6, 8, 1, 4, 2, 0]
    # sort function
	selection_sort(lst)
	print(lst);


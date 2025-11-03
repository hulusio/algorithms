def selection_sort(lst):
  smallest = 100;
  length_list = len(lst)
  for i in range(length_list):
    smallest = 100
  	# In each pass, the largest elements are pushed to the end
    for j  in range(i, length_list):
      if lst[j] < smallest:
        smallest       = lst[j]
        smallest_index = j
    #print(smallest)
    temp = lst[i]
    lst[i]  = smallest
    lst[smallest_index] = temp
             
if __name__ == "__main__":
	lst = [5, 3, 8, 1, 4, 2, 0]
    # sort function
	selection_sort(lst)
	print(lst);

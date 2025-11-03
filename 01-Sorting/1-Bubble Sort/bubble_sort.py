def bubble_sort(lst):
  length_list = len(lst)
  for i in range(length_list - 1):
  	# In each pass, the largest elements are pushed to the end
    for j in range(length_list - 1 - i):
      if lst[j] > lst[j+1]:
        temp = lst[j]
        lst[j] = lst[j+1]
        lst[j+1] = temp 
            
if __name__ == "__main__":
	lst = [5, 3, 8, 4, 2, 1, 7, 5, 0]
    # sort function
	bubble_sort(lst)
	print(lst);


#1- get array first
#2- heapfy as max or min 
#3- replace heapfied array's  root with last element
#4- repeat all of them 

import math


def heapfy(lst,ln ,i):
	parent  = i
	left  	= 2 * i + 1
	right 	= 2 * i + 2

	if(left < ln and lst[left] > lst[parent]):
		parent = left

	if(right < ln and lst[right] > lst[parent]):
		parent = right

	if parent != i:
		lst[i], lst[parent] = lst[parent], lst[i]
		heapfy(lst, ln, parent)


def heap_sort(lst):
	length_list = len(lst)
	for i in range(len(lst)//2 - 1, -1 ,-1):
		#print("",i,end=" ")
		heapfy(lst,length_list, i)
		#print(lst)

	for i in range(len(lst) - 1, 0 ,-1):
		lst[i], lst[0] = lst[0], lst[i]
		heapfy(lst, i, 0)


if __name__ == "__main__":
	lst = [5, 8, 1, 4, 2, 0, 9]
	heap_sort(lst)
	print(lst)




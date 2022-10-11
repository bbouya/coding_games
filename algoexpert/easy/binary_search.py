# Binary search

# Iterative Binary Search Function
# It returns index of x in given array arr if present,
# else returns -1
def binary__search(arr, x):
	low = 0
	high = len(arr) - 1
	mid = 0

	while low <= high:

		mid = (high + low) // 2

		# If x is greater, ignore left half
		if arr[mid] < x:
			low = mid + 1

		# If x is smaller, ignore right half
		elif arr[mid] > x:
			high = mid - 1

		# means x is present at mid
		else:
			return mid

	# If we reach here, then the element was not present
	return -1




def binary_Search(array, target):
    # Write your f code 
    left = 0
    right = len(array) - 1
    while left <= right:
        mid = (left + right) // 2
        if array[mid] == target:
            return mid
        test = array[mid]
        if target < array[mid]:
            right = mid - 1
        else:
            left = mid + 1

    return -1

# recursive way
def binarySearch(array, target):
    return findNumber(array, target, 0, len(array) - 1)

def findNumber(array, target, left, right):
    if left > right:
        return -1
    mid = (left + right) // 2
    if array[mid] == target:
        return mid
    
    if target < array[mid] : 
        return findNumber(array, target, left, mid - 1)
    else:
        return findNumber(array, target, mid + 1, right)


if __name__ =='__main__':

    #stringg = 'ayoubel'
    #arr1 = [1,5,6,12,2,5,0,1,3]
    #res = binarySearch(arr1, 0)

    #print(res)
    # Test array
    arr = [ 10, 2, 3, 4, 40,5 ]
    x = 10

    # Function call
    result = binary__search(arr, x)

    if result != -1:
    	print("Element is present at index", str(result))
    else:
    	print("Element is not present in array")


"""
what is a binary search 
its to search from left and right in the same time : 
        --> ayoub <--

"""
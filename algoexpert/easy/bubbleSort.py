#Solution 1

from mimetypes import init
from multiprocessing import reduction


def bubleSort(array):
    #write you code 
    for i in range(len(array)):
        aleadysorted = True
        res = array
        for j in range(len(array) - i - 1):
            if array[j] > array[j+1]:
                aleadysorted = False
                array[j], array[j+1] = array[j+1] , array[j]
            
        if aleadysorted:
            break
    return array

#Solution 2

def bubbleSort2(array):
    #Write your code :
    alreadysorted = False
    i = 0
    while not alreadysorted:
        alreadysorted = True
        for j in range(len(array) - i - 1):
            if array[j] > array[j+1]:
                alreadysorted = False
                array[j], array[j+1] = array[j+1], array[i]
        i +=1

# Tester la solution
if __name__ == '__main__':

    array = [5,1,7,3,4,6]
    array_sorted = bubleSort(array)

    print(array_sorted)

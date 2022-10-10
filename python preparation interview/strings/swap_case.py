"""
creation d'un programme pour swap strings
"""

def swap_case(s):
    '''swaps upper/lower case letter to loower ...'''

    return s.swapcase()

if __name__ == '__main__':
    s = input()
    result = swap_case(s)
    print(result)
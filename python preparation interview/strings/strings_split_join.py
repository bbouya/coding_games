"""
split and join strings
"""




def split_and_join(line):
    '''converts space to - '''
    line = line.split(' ')
    line = '-'.join(line)
    return line


if __name__ == '__main__':
    line = input()
    result = split_and_join(line)
    print(result)
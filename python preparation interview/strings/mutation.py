


from turtle import position


def mutate_string(string, position, character):
    '''Changes a character at a given index'''
    return string[:position] + character + string[position + 1:]




if __name__ == '__main__':
    '''change a character at a given index'''
    s = input()
    i, c = input().split()
    s_new = mutation_string(s, int(i), c)
    print(s_new)
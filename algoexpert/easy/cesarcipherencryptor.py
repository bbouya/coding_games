# O(N) time and space : 

from imghdr import tests


def caesarCipherEncryptor(string, key):
    #Write your code 
    result = []

    for x in string:
        modifiedasc = ord(x) - 97
        newascii = (modifiedasc + key) % 26
        newChar = chr(97 + newascii)
        result.append(newChar)
    
    return ''.join(result)


if __name__ == "__main__":
    test = 'ayoun'
    test = caesarCipherEncryptor(test,4)
    print(test)
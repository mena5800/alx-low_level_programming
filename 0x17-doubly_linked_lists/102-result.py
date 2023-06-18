def is_palindrome(string):
    for i in range(len(string) // 2):
        if string[i] == string[len(string) - 1 - i]:
            continue
        else:
            return False
    return True

def len_num(num):
    return len(str(num))


max_value = 999 * 999
for i in range(max_value,0,-1):
    for j in range(999,100,-1):
        if (i % j == 0) and is_palindrome(str(i)) and len_num(i // j) == 3:
            print(i," ", j , " ",i / j)
            exit()

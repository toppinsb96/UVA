def numOfPress(s):
    if s in "adgjmptw": return 1
    if s in "behknqux": return 2
    if s in "cfilorvy": return 3
    if s in "sz": return 4
    return 1

T = int(input())
for line in range(T):
    message = input()
    result = 0

    for i in range(len(message)):
        result += numOfPress(message[i])

    print("Case #" + str(line + 1) + ": " + str(result))

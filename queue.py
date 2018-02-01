import sys
from collections import deque

for line in sys.stdin:
    command = line.split()
    case = 0

    queue = deque()

    if(command[0] != "N" and command[0] != "E"):
        P = command[0]
        N = command[1]

    if(command[0] == "N"):
        print(command[0])

    elif(command[0] == "E"):
        print(command[0])

#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'maxSubarray' function below.
#
# The function is expected to return an INTEGER_ARRAY.
# The function accepts INTEGER_ARRAY arr as parameter.
#

def maxSubarray(arr):
    sum=0
    sums=0
    max_sum = -10000001

    for i in arr:
        sum += i
        if(i>0):
            sums += i
        if(max_sum < sum):
            max_sum = sum
        if(sum<0):
            sum = 0
            
    if(sums == 0):
        sums = max(arr)

    return [max_sum,sums]

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    t = int(input().strip())

    for t_itr in range(t):
        n = int(input().strip())

        arr = list(map(int, input().rstrip().split()))

        result = maxSubarray(arr)

        fptr.write(' '.join(map(str, result)))
        fptr.write('\n')

    fptr.close()

#Question was that you have 2 arrays A and B, where in array A, if an element is not prime number then it should be replaced with 0. If it is prime then no operations to be performed. Array B is a binary array -which means it only consists of 0s and 1s. You need to calculate the max value by adding the products of the elements in A and B (i.e A[i]*B[i]) and obtain a max value. Next you need to swap 2 elements inside the array B and try to perform the operation again. Whichever value return the maximum should be the output.
from typing import List
import math

def product(A, B):
    maxVal = 0
    for i in range(len(B)):
        maxVal += A[i]*B[i]
    return maxVal

def isPrime(n):
    if n < 2:
        return False
    
    for i in range(2, int(n**0.5)+1):
        if n%i == 0:
            return False
    return True

def maxValue(A, B):
    
    for i in range(len(A)):
        if not isPrime(A[i]):
            A[i] = 0
            
    maxm = product(A, B)
    
    for i in range(len(B)):
        for j in range(i+1, len(B)):
            if B[i] != B[j]:
                B[i], B[j] = B[j], B[i]
                maxm = max(maxm, product(A, B))
                B[i], B[j] = B[j], B[i]
    return max(maxm, product(A, B))

if __name__ == "__main__":
    A = [3, 4, 3, 6, 5]
    B = [1, 0, 1, 0, 0]
    result = maxValue(A, B)
    print(result)

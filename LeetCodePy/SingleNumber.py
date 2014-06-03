def singleNumber(A):
    dict = {}
    for i in range(len(A)):
        if A[i] not in dict:
            dict[A[i]] = A[i]
        else:
            del dict[A[i]]
    return dict.keys()[0]

a = [1,2,3,3,2,]
print singleNumber(a)

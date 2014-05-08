def reverseWords(s):
    newSs = False   
    ss = ""

    L = []
    newS = ""
    for i in range(len(s)):
        if s[i] != " ":
            if newSs:
                ss += s[i]
            else:
                newSs = True
                ss += s[i]
            if i == len(s) - 1: 
                L.append(ss) 
        else:
            if newSs:
                newSs = False
                L.append(ss)
                L.append(s[i])
                ss = ""

    if len(L) != 0 and L[len(L)-1] == " ":
       L.pop()

    for j in range(len(L)):
        newS += L.pop();
         
    return newS     

print reverseWords("  the girl   is hot!    ")


def findZeroes(arr, n, m) :
    maxi=0
    start=0
    z=0
    for end in range(n):
        if arr[end]==0:
            z+=1
        if z>m:
            
            if arr[start]==0:
                z-=1
            start+=1
        maxi=max(maxi,end-start+1)
    return maxi

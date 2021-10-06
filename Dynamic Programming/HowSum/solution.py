def howSumMemo(target, values,memo = {}):
    if(target<0):
        return(None)
    if(target==0):
        return([])
    if(target in memo):
        return(memo[target])
    for val in values:
        new_target = target-val
        res = howSumMemo(new_target,values,memo)
        if(res!=None):
            memo[target] = res + [val]
            return(memo[new_target]) 
    memo[target] = None
    return(None)

target,values = 220,[14,7]

print("Possible permutation of {} that generates the sum {}: {}\n".format(values,target,howSumMemo(target,values)))

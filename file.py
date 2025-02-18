def gcd(u,v): 
   # for computing the GCD
    while v != 0:
        r = u % v # compute remainder
        u = v
        v = r
    return u

if __name__ == '__main__':
    a = int(input('First value: '))
    b = int(input('Second value: '))
    print ('gcd:', gcd(a,b))
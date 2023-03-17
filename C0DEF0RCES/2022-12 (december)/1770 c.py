from math import gcd

def solve(a):
  g = a[0]
  for i in range(1, len(a)):
    g = gcd(g, a[i])

  # gcd 1 hole yes
  if g == 1:
    return "YES"

#lcm ber kora
  llcm = a[0]
  for i in range(1, len(a)):
    llcm = (lcm * a[i]) // gcd(lcm, a[i])

  if llcm > 1:
    return "YES"
  else:
    return "NO"


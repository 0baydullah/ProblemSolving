from math import gcd

def solve(a):
  # Find the GCD of all the numbers in the array
  g = a[0]
  for i in range(1, len(a)):
    g = gcd(g, a[i])

  # If the GCD is 1, then we can return "YES"
  if g == 1:
    return "YES"

  # Find the LCM of all the numbers in the array
  lcm = a[0]
  for i in range(1, len(a)):
    lcm = (lcm * a[i]) // gcd(lcm, a[i])

  # If the LCM is greater than 1, then the GCD of all the numbers
  # in the array plus the LCM will be 1
  if lcm > 1:
    return "YES"
  else:
    return "NO"


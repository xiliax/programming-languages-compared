
print ("Complex Numbers in Python")

a = 5 + 3j
print( "a = ", a)

b = a * a
print ("b = ", b)

c = 3.6 + 2.5j
c = c.__add__(0 + 2.5j)
print ("c = ", c)

d = b + a
print ("d = ", d)

z4 = 1.0 + 2j
z5 = 1.0 + -2j
print (z4, " * ", z5,  " = ", z4 * z5)

print ("imag(a) = ", a.imag)

print ("abs(a): ", abs(a))

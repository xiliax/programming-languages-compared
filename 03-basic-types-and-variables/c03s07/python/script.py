# package main

def varInit():
	print("\nvariable initialization\n")

	r = 'J'
	flag = True
	b  = 35
	i = 23432343
	l = 938920l
	f = 903.3909
	d = 90929324909023.290932342
	#  us uint16 = 65000
	#  uc uint8 = 128

	print("0.\tbflag - {}".format(flag))
	print("1.\tr - {:s}".format(r))
	print("2.\tb - {:d}".format(b))
	print("3.\ti - {:d}".format(i))
	print("4.\tl- 0x{:X}".format(l))
	print("5.\tf - {:f}".format(f))
	print("6.\td - {:f}".format(d))

def varDeclar():
	print("\nvariable declaration\n")

	r  = chr(48)	 # = '0'
	flag  = False
	b  = 0
	i = 0
	l = 0l
	f = 0.0
	d = 0.0
	#  us uint16
	#  uc uint8

	print "0.\tbflag -", flag
	print "1.\tr -", r
	print "2.\tb -", b
	print "3.\ti -", i
	print "4.\tl -", hex(l)
	print "5.\tf -", f
	print "6.\td -", d

varDeclar()
varInit()
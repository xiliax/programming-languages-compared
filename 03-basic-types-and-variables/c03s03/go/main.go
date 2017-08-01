package main

import "fmt"

func main() {
	varDeclar()
	varInit()
}

func varInit() {
	fmt.Print("variable initialization\n")

	var r = 'J'
	var flag = true
	var b byte = 35
	var i = 23432343
	var l = 892320938920
	var f = 90892232e23
	var d = 90929324909023.290932342
	var ld = 90992343e208
	// var us uint16 = 65000
	// var uc uint8 = 128

	fmt.Printf("0.\tbflag - %v\n", flag)
	fmt.Printf("1.\tr - %v\n", r)
	fmt.Printf("2.\tb - %v\n", b)
	fmt.Printf("3.\ti - %v\n", i)
	fmt.Printf("4.\tl- 0x%X\n", l)
	fmt.Printf("5.\tf - %v\n", f)
	fmt.Printf("6.\td - %v\n", d)
	fmt.Printf("7.\tld - %v\n", ld)
}

func varDeclar() {
	fmt.Printf("variable declaration\n")

	var r rune
	var flag bool
	var b byte
	var i int
	var l int64
	var f float32
	var d float64
	var ld float64
	// var us uint16
	// var uc uint8

	fmt.Printf("0.\tbflag - %v\n", flag)
	fmt.Printf("1.\tr - %v\n", r)
	fmt.Printf("2.\tb - %v\n", b)
	fmt.Printf("3.\ti - %v\n", i)
	fmt.Printf("3.\ti - %v\n", i)
	fmt.Printf("4.\tl- 0x%X\n", l)
	fmt.Printf("5.\tf - %v\n", f)
	fmt.Printf("6.\td - %v\n", d)
	fmt.Printf("7.\tld - %v\n", ld)
}

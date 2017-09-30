package main

import "fmt"
import "math/cmplx"

func main() {

	fmt.Println("Complex Numbers")
	var a = 5 + 3i

	fmt.Println("a = ", a)
	var b = a * a

	fmt.Println("b = ", b)

	var c = complex(3.6, 2.5)
	c += complex(0, 2.5)

	fmt.Println("c = ", c)

	var z4, z5 = 1. + 2i, 1. - 2i
	fmt.Println(z4, " * ", z5, " = ", z4*z5)

	fmt.Println("imag(a) = ", imag(a))

	fmt.Println("abs(a): ", cmplx.Abs(a))
}

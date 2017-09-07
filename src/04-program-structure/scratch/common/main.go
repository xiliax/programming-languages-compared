package main

import (
	"04-program-structure/scratch/pkg_a"
	"04-program-structure/scratch/pkg_a/pkg_b"
	b "04-program-structure/scratch/pkg_b"
	"fmt"
)

func main() {
	fmt.Println("Using Package: " + pkg_a.Name)
	fmt.Println("File1 from " + pkg_a.FileName1)
	fmt.Println("Hidden stuff from pkg_a: " + pkg_a.GetHiddenStuff())
	fmt.Println("File1 from " + pkg_b.FileName1)
	fmt.Println("File1 from " + b.FileName1)
}

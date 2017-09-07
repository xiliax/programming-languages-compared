package text

import (
	"04-program-structure/c04s03-go/aa_ui"
	"fmt"
)

func Factory() aa_ui.UIPrompter {
	fmt.Println("Creating Text Prompter")
	return &TextPrompter{}
}

type TextPrompter struct {
	// .. fields here
}

func (r *TextPrompter) Write(b []byte) (int, error) {
	fmt.Println("Writing prompt to user")
	return len(b), nil
}

func (r *TextPrompter) Read(b []byte) (int, error) {
	fmt.Println("Reading data from user")
	return len(b), nil
}

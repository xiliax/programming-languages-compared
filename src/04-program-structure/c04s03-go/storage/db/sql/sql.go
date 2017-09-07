package sql

import (
	"04-program-structure/c04s03-go/storage"
	"fmt"
)

func Factory() storage.Storer {
	fmt.Println("Creating SQL storage engine")
	return &SqlStorer{}
}

type SqlStorer struct {
	// .. fields
}

func (r *SqlStorer) GetData(b []byte) (int, error) {
	fmt.Println("GetData from Sql Storage engine")
	return len(b), nil
}
func (r *SqlStorer) Write(b []byte) (int, error) {
	fmt.Println("Writing data to Sql Storage engine")
	return len(b), nil
}
func (r *SqlStorer) Read(b []byte) (int, error) {
	fmt.Println("Reading data from Sql Storage engine")
	return len(b), nil
}

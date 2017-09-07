package storage

type Storer interface {
	Write(b []byte) (int, error)
	Read(b []byte) (int, error)
	GetData(b []byte) (int, error)
}

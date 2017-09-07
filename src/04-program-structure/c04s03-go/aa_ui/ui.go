package aa_ui

type UIPrompter interface {
	Write(b []byte) (int, error)
	Read(b []byte) (int, error)
}

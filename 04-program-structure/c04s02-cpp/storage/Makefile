CC=g++
CFLAGS=-I.
LDFLAGS=-shared
DEPS = storage.h
OBJ = db/net/sql.o

%.o: %.cpp $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

libstorage.so: $(OBJ)
	$(CC) -o $@ $^ $(LDFLAGS)

.PHONY: clean
clean:
	rm -f libstorage.so $(OBJ)
CC=g++
CFLAGS=-I. -Istorage -Iui -Icompute
LDFLAGS=-Lstorage -lstorage -Lui -lui
DEPS = common/main.h compute/compute.h storage/storage.h ui/ui.h
OBJ = common/main.o common/other.o

%.o: %.cpp $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

app: $(OBJ)
	$(CC) -o $@ $^ $(LDFLAGS)

.PHONY: clean
clean:
	rm -f app $(OBJ)
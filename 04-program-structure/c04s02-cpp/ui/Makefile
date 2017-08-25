CC=g++
CFLAGS=-I.
LDFLAGS=-shared
DEPS = ui.h
OBJ = ui.o

%.o: %.cpp $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

libui.so: $(OBJ)
	$(CC) -o $@ $^ $(LDFLAGS)

.PHONY: clean
clean:
	rm -f libui.so $(OBJ)
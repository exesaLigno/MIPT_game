CC=g++
CFLAGS=-c -Wall
LDFLAGS=
SOURCES=main.cpp object.cpp enemy.cpp position.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=app.out

all: $(SOURCES) $(EXECUTABLE)
	
$(EXECUTABLE): $(OBJECTS) 
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@ -lsfml-graphics -lsfml-window -lsfml-system

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@
	
.PHONY: clean
clean:
	rm -rf *.o app.out
	
.PHONY: run
run:
	./"$(EXECUTABLE)" 

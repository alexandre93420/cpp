CC = g++ # Flag for implicit rules

CFLAGS = -g # Flag for implicit rules. Turn on debug info



objects = main.o funct.o



all: $(objects)



%.o: %.cpp
	$(CC) -cpp $(CFLAGS) $(CPPFLAGS) $< -o $@



ex1.exe: $(objects)
	g++ -o $@ $(objects)



clean:
	rm -f *.o *.exe
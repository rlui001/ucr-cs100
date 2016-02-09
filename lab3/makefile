CC = g++
CC_FLAGS = -Wall -ansi
EXEC = test.out
SOURCES = $(wildcard*.cpp)
OBJECTS = $(SOURCES:.cpp=.o)

$(EXEC): $(OBJECTS)
	$(CC) $(OBJECTS -o $(EXEC)


%.o: %.cpp
	 $(CC) -c $(cc_flags) $< -O $@


clean:
	 rm -f $(EXEC) $(OBJECTS)

PROJ_NAME=adminApp

# .cpp files
CPP_SOURCE=$(wildcard ./source/*.cpp)

#.hpp files
HPP_SOURCE=$(wildcard ./source/*.hpp)

# Object files
OBJ=$(CPP_SOURCE:.c=.o)

# compiler and linker
CC=g++

#compiler's flags
CC_FLAGS= -Wall -g

all: $(PROJ_NAME)

$(PROJ_NAME): $(OBJ)
    @ echo 'Building binary using GCC linker: $@'
    $(CC) $^ -out $@
    @ echo 'Finished building binary: $@'
    @ echo ' '
 
./objects/%.o: ./source/%.cpp ./source/%.hpp
    @ echo 'Building target using GCC compiler: $<'
    $(CC) $< $(CC_FLAGS) -o $@
    @ echo ' '
 
./objects/main.o: ./source/main.c $(HPP_SOURCE)
    @ echo 'Building target using GCC compiler: $<'
    $(CC) $< $(CC_FLAGS) -o $@
    @ echo ' '
 
objFolder:
    @ mkdir -p objects
 
clean:
    @ $(RM) ./objects/*.o $(PROJ_NAME) *~
    @ rmdir objects
 
.PHONY: all clean
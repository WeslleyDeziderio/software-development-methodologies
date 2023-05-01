PROJ_NAME=locadora

# .cpp files
CPP_SOURCE=$(wildcard ./src/*.cpp)

#.hpp files
HPP_SOURCE=$(wildcard ./include/*.hpp)

# Object files
OBJ=$(CPP_SOURCE:.c=.o)

# compiler and linker
CXX=g++

#compiler's flags
CXXFLAGS= -Wall

all: $(PROJ_NAME)

$(PROJ_NAME): $(OBJ)
	@ echo 'Building binary using G++ linker: $@'
	$(CXX) $^ -o $@
	@ echo 'Finished building binary: $@'
	@ echo ' '

./objects/%.o: ./src/%.cpp ininclude/%.hpp
	@ echo 'Building target using G++ compiler: $<'
	$(CXX) $< $(CXXFLAGS) -o $@
	@ echo ' '

./objects/main.o: ./src/main.cpp $(HPP_SOURCE)
	@ echo 'Building target using G++ compiler: $<'
	$(CXX) $< $(CXXFLAGS) -o $@
	@ echo ' '

objFolder:
	@ mkdir -p objects

clean:
	@ $(RM) ./objects/*.o $(PROJ_NAME) *~
	@ rmdir objects

.PHONY: all clean

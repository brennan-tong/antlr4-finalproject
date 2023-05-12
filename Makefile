ANTLR4_CPP_RUNTIME_DIR=/usr/local/include/antlr4-runtime
ANTLR4_CPP_LIB_DIR=/usr/local/lib
ANTLR4_CPP_LIB=antlr4-runtime
CPP=g++
CPP_FILES := $(wildcard *.cpp)
OBJ_FILES := $(addprefix ,$(notdir $(CPP_FILES:.cpp=.o)))
CPPFLAGS=-Wall

all: prog

prog: $(OBJ_FILES)
	$(CPP) $(CPPFLAGS) -o $@ $^  \
		-L$(ANTLR4_CPP_LIB_DIR) \
		-I$(ANTLR4_CPP_RUNTIME_DIR) \
		-l$(ANTLR4_CPP_LIB)

%.o: %.cpp
	$(CPP) $(CPPFLAGS) -c -o $@ $<  -I$(ANTLR4_CPP_RUNTIME_DIR)

clean:
	rm -f *.o prog *~

CXX = g++
# CXX = clang++

CXXFLAGS= -Wall -Wno-uninitialized

BINARIES=strFuncsTest

COMMON_OBJECTS=tddFuncs.o strFuncs.o

all: ${BINARIES}

tests: ${BINARIES}
	./strFuncsTest

strFuncsTest: strFuncsTest.o $(COMMON_OBJECTS)
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $^ -o $@ 

clean:
	/bin/rm -f ${BINARIES} *.o

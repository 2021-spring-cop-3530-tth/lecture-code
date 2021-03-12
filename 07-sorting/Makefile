CXX = g++
CXXFLAGS = -std=c++11 -Wall

clean:
	$(RM) *.o

test: test/test.cpp selection-sort.o merge-sort.o
	$(CXX) $(CXXFLAGS) $^ -o test/$@
	test/$@ --success

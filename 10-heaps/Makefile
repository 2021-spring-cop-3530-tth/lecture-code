CXX = g++
CXXFLAGS = -std=c++11 -Wall

clean:
	$(RM) *.o

heap-test: test/heap-test.cpp heap.o ../catch/catch.o
	$(CXX) $(CXXFLAGS) $^ -o test/$@
	test/$@ --success

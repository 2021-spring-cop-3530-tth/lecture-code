CXX = g++
CXXFLAGS = -std=c++11 -Wall

clean:
	$(RM) *.o

adjacency-test: test/adjacency-test.cpp graph.o ../catch/catch.o
	$(CXX) $(CXXFLAGS) $^ -o test/$@
	test/$@ --success

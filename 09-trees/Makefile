CXX = g++
CXXFLAGS = -std=c++11 -Wall

clean:
	$(RM) *.o

node-test: test/node-test.cpp node.o
	$(CXX) $(CXXFLAGS) $^ -o test/$@
	test/$@ --success

tree-test: test/tree-test.cpp node.o tree.o
	$(CXX) $(CXXFLAGS) $^ -o test/$@
	test/$@ --success

CXX = g++
CXXFLAGS = -g -std=c++11 -Wall

testBuild: test.cpp binary-search.o
	$(CXX) $(CXXFLAGS) -o test $^

test: testBuild
	./$@ --success

clean:
	$(RM) *.o a.out test

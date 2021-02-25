CXX = g++
CXXFLAGS = -std=c++11 -Wall

test: test.cpp linear-search.o binary-search.o
	$(CXX) $(CXXFLAGS) -o $@ $^
	./$@ --success

benchmark: benchmark.cpp linear-search.o binary-search.o
	$(CXX) $(CXXFLAGS) -o $@ $<
	./$@

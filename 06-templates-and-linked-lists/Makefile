CXX = g++
CXXFLAGS = -std=c++11 -Wall

clean:
	$(RM) *.o

student-main: student.o student-main.cpp
	$(CXX) $(CXXFLAGS) $^ -o $@
	./$@

test: test/test.cpp node.o list.o
	$(CXX) $(CXXFLAGS) $^ -o test/$@
	test/$@ --success

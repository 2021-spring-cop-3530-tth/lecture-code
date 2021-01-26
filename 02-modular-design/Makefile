CXXFLAGS=-std=c++11 -g
CXX=g++

main: main.cpp student.o
	$(CXX) $(CXXFLAGS) -o $@ $^

clean:
	$(RM) a.out main *.o

test: test.cpp student.cpp
	$(CXX) $(CXXFLAGS) -o $@ $^
	./test --success
CXX = g++
CXXFLAGS = -std=c++11 -Wall

all: main

clean: rm main

main: main\ copy.cpp
	$(CXX) $(CXXFLAGS) main\ copy.cpp -o main

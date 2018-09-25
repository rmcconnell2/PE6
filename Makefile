CXX = g++
CXXFLAGS = -std=c++11 -Wall

all: main

clean: rm main

main: main.cpp
	$(CXX) $(CXXFLAGS) main.cpp

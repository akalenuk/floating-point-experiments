all:
	g++ -O3 -std=c++11 floating_as_binary.cpp -o floating_as_binary
	./floating_as_binary
clean:
	rm ./floating_as_binary

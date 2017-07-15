all:
	g++ -O3 -std=c++11 floating_as_binary.cpp -o floating_as_binary
	g++ -O3 -std=c++11 non_algebraic.cpp -o non_algebraic
	./floating_as_binary
	./non_algebraic
clean:
	rm ./floating_as_binary
	rm ./non_algebraic

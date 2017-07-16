all:
	g++ -O3 -std=c++11 floating_as_binary.cpp -o floating_as_binary
	g++ -O3 -std=c++11 non_algebraic.cpp -o non_algebraic
	g++ -O3 -std=c++11 run_through.cpp -o run_through
	./floating_as_binary
	./non_algebraic
	./run_through
clean:
	rm ./floating_as_binary
	rm ./non_algebraic
	rm ./run_through

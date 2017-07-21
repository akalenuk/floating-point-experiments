all:
	g++ -O3 -std=c++11 floating_as_binary.cpp -o floating_as_binary
	g++ -O3 -std=c++11 non_algebraic.cpp -o non_algebraic
	g++ -O3 -std=c++11 run_through.cpp -o run_through
	g++ -O3 -std=c++11 integer_overflow.cpp -o integer_overflow
	g++ -O3 -std=c++11 equality.cpp -o equality
	g++ -O3 -std=c++11 equality_better.cpp -o equality_better
	./floating_as_binary
	./non_algebraic
	./run_through
	./integer_overflow
	./equality
	./equality_better
clean:
	rm ./floating_as_binary
	rm ./non_algebraic
	rm ./run_through
	rm ./integer_overflow
	rm ./equality
	rm ./equality_better

it: iterative.o
	g++ -g -o iterative iterative.o

iterative.o: iterative.cc
	g++ -g -c iterative.cc

re: recursive.o
	g++ -g -o recursive recursive.o

recursive.o: recursive.cc
	g++ -g -c recursive.cc


clean:
	\rm *.o
	\rm iterative
	\rm recursive

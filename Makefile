CombinationSum1: CombinationSum1.o
	g++ -g -o CombinationSum1.exe CombinationSum1.o -pthread    

CombinationSum1.o: CombinationSum1/CombinationSum1.cpp
	g++ -g  -c -pthread CombinationSum1/CombinationSum1.cpp

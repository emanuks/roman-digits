all: roman_numerals_test.cpp   roman_numerals.cpp roman_numerals.hpp roman_numerals.o
	g++ -std=c++11 -Wall roman_numerals.o roman_numerals_test.cpp -o roman_numerals_test
	./roman_numerals_test

compile: roman_numerals_test.cpp   roman_numerals.cpp roman_numerals.hpp roman_numerals.o
	g++ -std=c++11 -Wall roman_numerals.o roman_numerals_test.cpp -o roman_numerals_test
	
test: roman_numerals_test
	./roman_numerals_test
	
cpplint: roman_numerals_test.cpp   roman_numerals.cpp roman_numerals.hpp
	cpplint   --exclude=catch.hpp  *.*
	
gcov: roman_numerals_test.cpp   roman_numerals.cpp roman_numerals.hpp
	g++ -std=c++11 -Wall -Wall -fprofile-arcs -ftest-coverage -c romanos.cpp
	g++ -std=c++11 -Wall -fprofile-arcs -ftest-coverage romanos.o testa_romanos.cpp -o testa_romanos
	./testa_romanos
	gcov *.cpp	
	
debug: roman_numerals_test.cpp   roman_numerals.cpp roman_numerals.hpp
	g++ -std=c++11 -Wall -Wall -g -c roman_numerals.cpp
	g++ -std=c++11 -Wall  -g roman_numerals.o roman_numerals_test.cpp -o roman_numerals_test
	gdb roman_numerals_test
	
	
cppcheck: roman_numerals_test.cpp   roman_numerals.cpp roman_numerals.hpp
	cppcheck  --enable=warning . 

valgrind: roman_numerals_test
	valgrind --leak-check=yes --log-file=valgrind.rpt roman_numerals_test

roman_numerals.o: roman_numerals.cpp roman_numerals.hpp
	g++ -std=c++11 -Wall -Wall -c roman_numerals.cpp
	
roman_numerals_test: 	roman_numerals_test.cpp   roman_numerals.cpp roman_numerals.hpp roman_numerals.o
	g++ -std=c++11 -Wall roman_numerals.o roman_numerals_test.cpp -o roman_numerals_test

clean:
	rm -rf *.o *.exe *.gc* 
	
	

all: O3 O0

O3p.o: p.cpp
	g++ -c -g -O3 $< -o $@

O0p.o: p.cpp
	g++ -c -g -O0 $< -o $@

O3: main.cpp O3p.o
	g++ -g -O3 $^ -o $@

O0: main.cpp O0p.o
	g++ -g -O0 $^ -o $@

clean:
	rm -f O3p.o O0p.o O3 O0

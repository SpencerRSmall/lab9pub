m:
	g++ -std=c++11 -Wall -g driver.cpp Book.cpp BookList.cpp -o driver
r:
	./driver books.txt outfile.txt
c:
	rm driver outfile.txt
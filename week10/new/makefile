all: store

store: storeMain.o Product.o Customer.o Store.o
	g++ -g storeMain.o Product.o Customer.o Store.o -o store

storeMain.o: storeMain.cpp Product.hpp Customer.hpp Store.hpp
	g++ -c storeMain.cpp

Product.o: Product.cpp Product.hpp
	g++ -c Product.cpp

Customer.o: Customer.cpp Customer.hpp Product.hpp
	g++ -c Customer.cpp

Store.o: Store.cpp Store.hpp Customer.hpp Product.hpp
	g++ -c Store.cpp

clean:
	rm -f *.o 

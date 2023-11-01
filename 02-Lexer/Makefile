all: tests lexer

lexer: reconocedor.o
	gcc AFD.c reconocedor.o -o Lexer
	./Lexer

reconocedor.o: reconocedor.c
	gcc -c reconocedor.c

reconocedor_tests: reconocedor.o
	gcc tests.c reconocedor.o -o ReconocedorTests

tests: reconocedor_tests
	./ReconocedorTests

clean:
	rm -rf ReconocedorTests Lexer *.o
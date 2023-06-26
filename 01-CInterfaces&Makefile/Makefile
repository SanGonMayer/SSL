all: tests tablas_de_conversion

tablas_de_conversion: conversion.o
	cc tablasDeConversion.c conversion.o -tablas_de_conversion

conversion.o: conversion.c
	cc -c conversion.c

conversion_tests: conversion.o
	cc conversion_tests.c conversion.o -o conversion_tests

tests: conversion_tests
	\.conversion_tests

clean:
	rm -rf conversion_tests tablas_de_conversion *.o


default: bin/hello

test: bin/test
	bin/test

bin/hello: build/main.o build/test_for_win.o build/print_field.o
	gcc -Werror build/main.o build/test_for_win.o build/print_field.o -o bin/hello

bin/test: build/main_test.o build/test_for_win.o
	gcc -Werror build/main_test.o build/test_for_win.o -o bin/test

build/test_for_win.o: src/test_for_win.c
	gcc -std=c99 -Werror -c src/test_for_win.c -o build/test_for_win.o

build/print_field.o: src/print_field.c
	gcc -std=c99 -Werror -c src/print_field.c -o build/print_field.o

build/main.o: src/main.c
	gcc -std=c99 -Werror -c src/main.c -o build/main.o

build/main_test.o: test/main.c
	gcc -std=c99 -Werror -I src -I thirdparty -c test/main.c -o build/main_test.o

.PHONY : clean
clean:
	rm -rf build/*.o

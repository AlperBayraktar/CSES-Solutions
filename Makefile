compile_cpp:
	g++ $(path) -o output
	./output


compile_c:
	gcc $(path) -o output
	./output

run:
	./output
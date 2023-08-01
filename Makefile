run_cpp:
	g++ $(path) -o output
	./output


run_c:
	gcc $(path) -o output
	./output
all:
	@cat Makefile
t:
	@g++ -std=c++17 -Wshadow -Wall -o a.out generate.cpp -fsanitize=address -fsanitize=undefined -D_GLIBCXX_DEBUG -g
	@./a.out
	@rm a.out
input:
	@gedit solution.cpp
	@gedit brute_force.cpp
	@cp template generate.cpp
	@vim generate.cpp
test:
	@g++ -O2 -std=c++17 -Wno-unused-result -Wshadow -Wall -o gen generate.cpp
	@g++ -O2 -std=c++17 -Wno-unused-result -Wshadow -Wall -o sol solution.cpp
	@g++ -O2 -std=c++17 -Wno-unused-result -Wshadow -Wall -o brute brute_force.cpp
	@./tst.sh
	@rm brut_out sol_out brute gen sol
s:
	@xclip -selection clipboard < solution.cpp
git:
	@git add .
	@git commit -S 
	@git push
	@clear

all:
	cat Makefile
tag:
	ctags -R .
run:
	javac com/*java
	java com.Main
	rm com/*class

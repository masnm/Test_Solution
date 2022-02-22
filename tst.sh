#!/bin/bash

for (( i = 0 ; i < 10001 ; ++i )); do
	echo $i
	./gen $i > in1
	./sol < in1 > sol_out
	./brute < in1 > brut_out
	diff -w sol_out brut_out || break
done

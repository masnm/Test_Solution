#!/bin/bash

for (( i = 0 ; i < 1001 ; ++i )); do
	echo $i
	./gen $i > in1
	./sol < in1 > sol_out || break
done

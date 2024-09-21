#!/bin/bash
a=$#
echo "The total length of all arguments is: $a: "
avg=0
for var in "$@"
do
    (( avg += $var ))
done
avg=$(( $avg / $a ))
echo "The average number is: $avg"

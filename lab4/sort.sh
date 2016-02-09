#!/bin/sh

size=0
total=$#
index=1
declare -a ARRAY



# while [ $size -lt $total ]; do
#   ARRAY[size]= $var
#   echo $size
#   let size=size+1
#   let index=index+1
#done

#echo ${ARRAY[*]}


for var in "$@"
do
   ARRAY[size]=$var
   let size=size+1
done

echo "Array inputs:"
echo ${ARRAY[*]}

n=$#

for (( i = 0; i < $n ; ++i))
do
for (( j = $i; j < $n ; ++j))
do
if [ ${ARRAY[$i]} -gt ${ARRAY[$j]} ]; then
t=${ARRAY[$i]}
ARRAY[$i]=${ARRAY[$j]}
ARRAY[$j]=$t
fi
done
done

echo "Sorted numbers in ascending order: "
echo ${ARRAY[*]}

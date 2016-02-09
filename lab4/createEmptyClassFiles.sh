#!/bin/sh

vim $1.cc
vim $1.hh

cat Ronson_861171527.txt > $1.cc
cat Ronson_861171527.txt > $1.hh

echo >> $1.cc
echo >> $1.hh

# default input for hh file
echo "#ifndef" $1_hh >> $1.hh
echo "#define" $1_hh >> $1.hh
echo >> $1.hh
echo "class" $1 "{ " >> $1.hh
echo "   public:" >> $1.hh
echo "      "$1"();" >> $1.hh
echo "      ~"$1"();" >> $1.hh
echo >> $1.hh
echo "   private:" >> $1.hh
echo "};" >> $1.hh
echo "#endif" >> $1.hh


# default input for cc file
echo "#include" "\"./$1.hh\"" >> $1.cc
echo >> $1.cc
echo $1"::"$1"(){}" >> $1.cc
echo >> $1.cc
echo $1"::~"$1"(){}" >> $1.cc

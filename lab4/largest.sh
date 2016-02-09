#!/bin/sh

if [ "$#" -ne "3" ]; then
   echo "Error: Please enter 3 numbers."
else


if [ "$1" -gt "$2" ]; then
   if [ "$1" -gt "$3" ]; then
      echo $1 "is the greatest number."
   fi
fi

if [ "$2" -gt "$1" ]; then
   if [ "$2" -gt "$3" ]; then
      echo $2 "is the greatest number."
   fi
fi

if [ "$3" -gt "$1" ]; then
   if [ "$3" -gt "$2" ]; then
      echo $3 "is the greatest number."
   fi
fi

if [ "$1" -eq "$2" ]; then
   if [ "$2" -eq "$3" ]; then
      echo "All three numbers are equivalent."
   fi
fi

fi

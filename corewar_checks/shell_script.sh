#!/bin/bash

CHEMIN=$1
FILES=$CHEMIN/*.s
EXE=$2
EXEZAZ=$3
FLAGPRINT=$4
COUNTER=0
COUNTER_ZAZ=0

# Check input information
if [ "$CHEMIN" = '-h' ]
then
	echo "Help message : arg1 = CHEMIN to files arg2 = exe1 arg3 = exe2 arg4 = [-p]"
	echo "Exception for the arg1 with -h for help"
	exit
fi
# Check each argument
if [ ! $CHEMIN ]
then
	echo "No Files or file CHEMIN"
	exit
fi
if [ ! $EXE ]
then
	echo "No Executables"
	exit
fi
if [ ! $EXEZAZ ]
then
	echo "No Second executable"
	exit
fi
echo "executable 1 : " $EXE
echo "executable 2 : " $EXEZAZ

# Print files

if [ "$FLAGPRINT" = '-p' ]
then
	for item in $FILES
	do
		echo "Files : " $item
	done
fi

# Compile the .s files with each exe and puts them in variables

for file in $FILES
do
	./$EXE $file
	./$EXEZAZ $file
done
NEWFILES=*.cor
NEWFILESZAZ=$CHEMIN/*.cor

# The end will Count the number of different cor files supposedly
# from each assemblor. Prevents the case of different files differenciation

for item in $NEWFILES
do
	ls $item
	COUNTER=$[$COUNTER+1]
done
for item in $NEWFILESZAZ
do
	COUNTER_ZAZ=$[$COUNTER_ZAZ+1]
done
echo "counts = " $COUNTER $COUNTER_ZAZ

if [ $COUNTER -ne $COUNTER_ZAZ ]
then
	echo "Not the same number of cor files between the two assemblors, THIS may cause errors"
fi

# Hexdump each cor files then checks if the returned value of the diff cmd
# if nothing diff worked

for items in $NEWFILES
do
	hexdump -C $items > my_diff.txt
	hexdump -C $CHEMIN/$items > zaz_diff.txt
	if [ -e $(diff "my_diff.txt" "zaz_diff.txt")]
	then
		echo "If nothing writen above : \x1B[32m[SUCCESS]\x1B[0m "$cmp $1
	else
		echo "Problem with the output : \x1B[31m[FAIL]\x1B[0m "$cmp $1
	fi
	# cat my_diff.txt zaz_diff.txt
	rm  my_diff.txt zaz_diff.txt
	rm $items $CHEMIN/$items

done

# BatteryChecks
A checklist for all the functions in my lib.
Not finished.

## For Corewar

Note : *ALL these checks are for the assembler program*
**shell_script.sh**:	- Compare two assembors write -h as first argument for hte usage.
			- Will look in the path given for all *.s files in it and it will compile them. Note that the goal 				of this script is to do the difference between the hexdump of the same cor files in different 				places. 
			- *If your assemblor send the cor file in the same path as zaz and not int he current directory you				willl have to tweak the paths, advice make it put the cor files in current path for more			simplicity* 
**diff_check.sh** is to compare two assemblers with only valid files. The idea is to make sure the binary input is correct without having to read it.
z_corewar and zaz are the two witness executables from the school project.
Steps:
	Put all valid *.s files in the sam directory.
	Change path in diff_check.sh to access that directory, and Change the witness executables' name.
	Then execute the script with as argument the executable you want to test.
PS: if the two executables create the files in the same area don't forget to send them else where.
 
I gathered these other tests from other poeple:

This one is from 'fxbabin'.
testor.sh is to be used to verifie leaks/segfaults and what ever debugs you come up with.
	Same as before put all *.s files in a directory, put that path in testor.sh.
	in the compiling part put the flags you want so you can see leaks or other.
(Small tip send the results in a file so you can grep the parts you are interested in)

Malloc_corrup put your executable as argument it will corrupt your mallocs to make sure they are all protected.

## For comparing files

Steps:
	Make
	Add both files to compare as arguments hit enter
	it will tell you if they are identical or not with a couple of other options to see the differences.
	I learned later on of the 'diff' command. But still a interesting little program to code.

![File_checker](https://github.com/mmanley42/ressources/blob/master/file_checker.gif)

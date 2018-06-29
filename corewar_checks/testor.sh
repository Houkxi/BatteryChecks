dir=cc/poub/champs
#dir=~/ASM_Corewar_tests

rm $dir/*.cor
for file in $dir/*.s;
do
	echo "==> $file <=="
	~/Git/last_core/./asm $file 2>> test_1.txt
	echo ""
	echo ""
done

echo "hello bash"
file="qlsv.c randomName.c"
executable="qlsv"

gcc qlsv.c myRandom.c -o qlsv -Wall -I.

./"$executable"

rm -f "$executable"
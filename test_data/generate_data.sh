# $i $i
# $i+1 $i+1
# $i+2 $i+2 .... といったデータを発生させる

i=0
while [ $i != 10000 ]
do
  echo "$i $i" >> test_1.txt
  let i++
done 

param($file)
$cpp=$file+".cpp"
$o=$file+".ow"
$s=$file+".sw"
$exe=$file+".exe"

g++ -c $cpp -o $o
g++ -S $cpp -o $s
g++ -o $exe $o
strip --strip-unneeded $exe
& $exe
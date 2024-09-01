foreach ($dir in ls -Directory "??_*") {
    cd $dir
    echo $dir.BaseName
    clang++ -W -Wall -pedantic-errors *.cpp
    ./a
    echo ""
}

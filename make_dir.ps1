$name = $args[0]
mkdir $name

@"
#pragma once
"@ > $name/$name.h

@"
#include "$name.h"
"@ > $name/$name.cpp

@"
#include "$name.h"

int main()
{
    return 0;
}
"@ > $name/main.cpp

#!/bin/bash 
echo -n "Enteranumber1<x<10:" #ask user input 
read num    # store input in var 
if [ "$num" -lt 10 ]; then
    if [ "$num" -gt 1 ]; then 
        echo "$num*$num=$(($num*$num))"
    else 
        echo "Wrong insertion !"
    fi
else
    echo "Wrong insertion !" 
fi


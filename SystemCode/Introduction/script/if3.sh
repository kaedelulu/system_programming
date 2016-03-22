#!/bin/bash 
echo -n "Enter your login name: "   # ask user input 
read name   # store input in var 
if [ "$name" = "$USER" ];
then
    echo "Hello, $name. How are you today ?"
else
    echo "You are not $USER, so who are you ?" 
fi

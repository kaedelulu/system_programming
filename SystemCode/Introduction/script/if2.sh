if grep "UNIX" myfile2 >/dev/null 
then
    echo "UNIX occurs in myfile2" 
else
    echo "No!"
    echo "UNIX does not occur in myfile2" 
fi


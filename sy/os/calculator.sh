while :
do
    echo "1.add 2.subtract 3.multiply 4.divide 5.exit"
    read choice
    case $choice in
        1)
        echo "input first number"
        read a
        echo "input second number"
        read b
        echo "$a + $b = "`expr $a \+ $b`;;
        2)
        echo "input first number"
        read a
        echo "input second number"
        read b
        echo "$a - $b = "`expr $a \- $b`;;
        3)
        echo "input first number"
        read a
        echo "input second number"
        read b
        echo "$a * $b = "`expr $a \* $b`;;
        4)
        echo "input first number"
        read a
        echo "input second number"
        read b
        echo "$a / $b = "`expr $a \/ $b`;;
        5)exit;;
        *)echo "invalid input";;
    esac
done

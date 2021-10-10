color a

d:

cd work

echo "Creating a first directory"

mkdir a\b\c\d

cd a

copy nul test.txt

cd..

echo "Creating a second directory"

mkdir i\f\g\h

cd i

copy nul test1.txt

cd..

set /p directory="Choose from the suggested directories("a" or "i"(or any of the available ones)) which one do you want to delete: "

rmdir /s /q %directory%

pause
color a

d:

cd work

echo "directory creation"
 
mkdir A

mkdir B

cd A

copy nul test.txt

pause

echo "link creation"

mklink /h d:\work\B\test1.txt d:\work\A\test.txt

echo "Deleting folders and file"

pause

cd..

rmdir /s /q A

rmdir /s /q B

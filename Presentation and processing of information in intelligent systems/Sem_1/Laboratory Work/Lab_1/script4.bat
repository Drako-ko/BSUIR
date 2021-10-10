color a

d:

cd work

echo "directory creation"

set /p directory1="first directory creation: "
 
mkdir %directory1%

set /p directory2="second directory creation: "

mkdir %directory2%

cd %directory1%

set /p file="file creation: "

copy con %file%

set /p link="link creation: "

pause

mklink /h d:\work\%directory2%\%link% d:\work\%directory1%\%file%

echo "Deleting folders and file"

pause

cd..

rmdir /s /q %directory1%

rmdir /s /q %directory2%

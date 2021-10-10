#!/bin/bash

cd /d/work

echo "Создание папок и файла"
 
mkdir A

mkdir B

cd /d/work/A

touch test.html

read -s -n 1 -p "Нажмите любую клавишу чтобы продолжить"

echo ""

echo "Создание ссылки"

ln -s /d/work/A/test.html /d/work/B/test1.html

echo "Удаление папок и файла"

read -s -n 1 -p "Нажмите любую клавишу чтобы продолжить"

cd /d/work

rm -r A

rm -r B

#!/bin/bash

cd /d/work

echo "Создание каталога и файла"

mkdir -p a/b/c/d

cd /d/work/a

touch test.html

cd /d/work

read -s -n 1 -p "Нажмите любую клавишу чтобы продолжить"

echo ""

echo "Удаление папок"

rm -r a

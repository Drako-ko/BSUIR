#!/bin/bash

cd /d/work

echo "Создание первой папки"

read directory1
 
mkdir $directory1

echo "Создание второй папки"

read directory2

mkdir $directory2

cd /d/work/$directory1

echo "Выберите название файлы"

read file

touch $file

echo "Введите текст файла"

cat > $file

ls -1 -a /d/work

echo "Выберите название ссылки"

read link

read -s -n 1 -p "Нажмите любую клавишу чтобы продолжить"

echo ""

echo "Создание ссылки"

ln -s /d/work/$directory1/$file /d/work/$directory2/$link

echo "Удаление папок и файла"

read -s -n 1 -p "Нажмите любую клавишу чтобы продолжить"

cd /d/work

rm -r $directory1

rm -r $directory2

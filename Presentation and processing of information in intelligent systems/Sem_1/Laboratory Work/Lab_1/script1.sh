#!/bin/bash

cd /d/work

echo "Создание каталога "a" "

mkdir -p a/b/c/d

cd /d/work/a

touch test.html

cd /d/work

echo "Создание каталога "i" "

mkdir -p i/f/g/h

cd /d/work/i

touch test1.html

cd /d/work

echo "Выберите из предложеных катологов("a" или "i"(или любой из имеющихся)) какой хотите удалить"

read directory

rm -r $directory

read -s -n 1 -p "Нажмите любую клавишу чтобы продолжить"

echo ""




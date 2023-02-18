#include <iostream>
#include <exception>
#include "IntArr.h"

int main() {

    IntArr array(15); // объявляем массив с 15 элементами
    
    try {
        for (int i = 0; i < 15; ++i) // заполняем массив числами от 1 до 15
        {
            array[i] = i + 1;
        }
        
        array.resize(7);// изменяем размер массива до 7
        
        array.insertBefore(33, 5);//вставляем число 33 перед элементом с индексом 5
        
        array.remove(3);//удаляем элемент с индесом 3
        
        array.insertAtEnd(49);//добавляем число 49 в конец
        
        array.insertAtBeginning(38);//добавляем число 38 в начало
        
        //выводим все элементы массива
        for(int i = 0; i < array.getLength(); ++i) 
        {
                std::cout << array[i] << ' ';
            }
    }
    
    catch (std::exception& e) 
    {
        e.what();
    }
    
    return 0;
}
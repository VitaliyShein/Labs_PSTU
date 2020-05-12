#pragma once
struct Shift;
Shift* CreateShift(char *word, int sizew); // Обратный массив символов с таблицей переноса
int Slice(int Pos, Shift* shift, char fsym, int sizew); // Поиск символа в таблице смещения
void search(); // Поиск заданной подстроки
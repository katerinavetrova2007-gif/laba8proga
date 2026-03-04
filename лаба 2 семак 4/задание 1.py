import os

def proverka_faila(filename):
    if not os.path.exists(filename):
        print(f"Ошибка: файл '{filename}' не существует")
        return False

    if os.path.getsize(filename) == 0:
        print(f"Ошибка: файл '{filename}' пустой")
        return False
    return True

def chtenie_faila(filename):
    with open(filename, 'r', encoding='utf-8') as f:
        lines = f.readlines()
    return [line.rstrip('\n') for line in lines]

def zapis_v_fail(filename, lines):
    with open(filename, 'w', encoding='utf-8') as f:
        for line in lines:
            f.write(line + '\n')

def zadanie1():
    print("Задание 1: Замена пустых строк")

    filename = input("Введите имя файла: ").strip()
    if not filename:
        print("Ошибка: имя файла не может быть пустым")
        return

    if not proverka_faila(filename):
        return

    if not filename.endswith('.txt'):
        print("Ошибка: файл должен иметь расширение .txt")
        return

    s = input("Введите строку S для замены пустых строк: ")

    lines = chtenie_faila(filename)
    empty_count = 0

    for i in range(len(lines)):
        if lines[i] == "":
            lines[i] = s
            empty_count += 1

    zapis_v_fail(filename, lines)

    print(f"Найдено пустых строк: {empty_count}")
    print(f"Заменено на: '{s}'")
    print("Готово!")
zadanie1()
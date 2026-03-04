import os
import random

def proverka_faila(filename):
    if not os.path.exists(filename):
        print(f"Ошибка: файл '{filename}' не существует")
        return False

    if os.path.getsize(filename) == 0:
        print(f"Ошибка: файл '{filename}' пустой")
        return False

    return True

def generirovat_pary(count):
    pairs = []
    for _ in range(count):
        x = random.randint(-100, 100)
        y = random.randint(-100, 100)
        pairs.append((x, y))
    return pairs

def zapis_pary_v_fail(filename, pairs):
    with open(filename, 'w', encoding='utf-8') as f:
        for x, y in pairs:
            f.write(f"{x} {y}\n")
    print(f"Сохранено {len(pairs)} пар в файл {filename}")

def chitat_pary_iz_faila(filename):
    pairs = []
    with open(filename, 'r', encoding='utf-8') as f:
        for line_num, line in enumerate(f, 1):
            line = line.strip()
            if not line:
                continue

            parts = line.split()
            if len(parts) != 2:
                print(f"Ошибка в строке {line_num}: ожидалось 2 числа")
                return None

            try:
                x = int(parts[0])
                y = int(parts[1])
                pairs.append((x, y))
            except ValueError:
                print(f"Ошибка в строке {line_num}: не числа")
                return None

    return pairs

def obrabotat_pary(pairs):
    result = []
    for x, y in pairs:
        if x > y:
            result.append((y, x))
        else:
            result.append((x, y))
    return result

def zadanie2():
    print("Задание 2: Генерация и обработка пар чисел")
    print("1 - Сгенерировать новые пары")
    print("2 - Обработать существующий файл")

    choice = input("Выберите (1/2): ").strip()

    if choice == '1':
        try:
            count = int(input("Сколько пар сгенерировать? "))
            if count <= 0:
                print("Ошибка: введите положительное число")
                return
        except ValueError:
            print("Ошибка: введите целое число")
            return

        pairs = generirovat_pary(count)
        filename = input("Имя файла для сохранения: ").strip()

        if not filename:
            print("Ошибка: имя файла не может быть пустым")
            return

        if '.' not in filename:
            filename += '.txt'
            print(f"Автоматически добавлено расширение: {filename}")

        zapis_pary_v_fail(filename, pairs)

    elif choice == '2':
        filename = input("Введите имя файла с парами: ").strip()

        if not filename:
            print("Ошибка: имя файла не может быть пустым")
            return

        if '.' not in filename:
            filename += '.txt'
            print(f"Автоматически добавлено расширение: {filename}")

        if not proverka_faila(filename):
            return

        pairs = chitat_pary_iz_faila(filename)
        if pairs is None:
            return

        print(f"Прочитано пар: {len(pairs)}")
        processed = obrabotat_pary(pairs)

        out_file = input("Имя файла для результата: ").strip()
        if not out_file:
            print("Ошибка: имя файла не может быть пустым")
            return

        if '.' not in out_file:
            out_file += '.txt'
            print(f"Автоматически добавлено расширение: {out_file}")

        zapis_pary_v_fail(out_file, processed)

    else:
        print("Ошибка: выберите 1 или 2")

zadanie2()
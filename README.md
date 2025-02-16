Лабораторная работа 1: Основы работы с Git, CMake и сборки C++ проектов

Цели работы:
  - Изучить основные операции с системой контроля версий Git: клонирование репозитория, добавление файлов, коммиты, создание веток, слияние изменений и разрешение конфликтов.
  - Освоить создание системы сборки для C++ проектов с использованием инструмента CMake.
  - Понять, как работает сборка многофайлового проекта.
Описание работы:
  -В ходе этой лабораторной работы был создан репозиторий на GitHub для небольшого C++ проекта. Также был написан файл CMakeLists.txt для настройки сборки проекта.

Задачи:
  1. Создание репозитория.
    Был создан новый репозиторий на платформе GitHub и затем клонирован на локальный компьютер.

  2. Настройка CMake:
    В корне репозитория была создана директория src.
    Внутри директории src были добавлены два файла:
      - main.cpp — файл с функцией main, которая использует функции из utils.cpp.
      - utils.cpp — файл с несколькими простыми функциями для сложения и вычитания.
    В корневой директории репозитория был создан файл CMakeLists.txt, который настраивает процесс сборки проекта.
    Проект корректно собирается с помощью CMake.

  3.Работа с Git:
    В корне проекта был инициализирован репозиторий Git.
    Все файлы были добавлены в репозиторий и выполнен первый коммит с сообщением: "Initial commit: CMake project setup"
    Создал новую ветку с именем featureutils, в которой добавил функцию умножения в файл utils.cpp и обновил main.cpp для использования этой функции. Эти изменения были закоммичены с сообщением:
    "feat: Add multiplication function to utils"
    Вернулся на основную ветку (main).
    Внес изменения в main.cpp, обновив вывод программы, и закоммитил изменения с сообщением:  "fix: Update main output message in main branch"
    Попытался слить ветку featureutils с основной веткой.
    Конфликтов при слиянии не возникло, процесс прошел успешно.
    Все ветки и коммиты были отправлены в удаленный репозиторий.

Используемые инструменты:
Git: система контроля версий, используемая для управления репозиторием и отслеживания изменений в коде.
CMake: инструмент для автоматизации сборки проектов на языке C.
Компилятор C (например, gcc или clang): используется для компиляции C программы.

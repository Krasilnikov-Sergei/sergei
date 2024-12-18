#include <iostream>
#include <cstdio>
#include "structure.h"

using namespace std;

void Sobitia_Sergeia()
{
    setlocale(LC_CTYPE, "Russian");

    srand((unsigned)time(NULL));
    int incident = rand() % 2 + 1;
    int choice;

    int karma_points;
    /* Это обязательная переменная! Ее значение (от -3 до 3),
    должно быть указано после каждого case! Она занимается
    начисление очков за каждое выбранное действие игроком.*/

    int enemy_max_damage;
    int enemy_protection;
    int enemy_health;

    // Пример события #1:
    if (incident == 1)
    {
        cout << "Мэр, соседний город хочет перекрыть дорогу ведущую к нам!" << endl;
        cout << "1 - Хорошо! Пусть делают что хотят!" << endl;
        cout << "2 - Нужно узнать причину и всё переговорить!" << endl;
        cout << "3 - Мы сделаем это первее!!!" << endl;

        cout << "-> "; cin >> choice; // Пожалуйста, при вводе значений в переменную, соблюдайте такой стиль.

        switch (choice)
        {
        case 1:
        {
            cout << "Они перекрыли дорогу и теперь мы не можем возить товар" << endl;
            karma_points = 1; // Начисляем 3 очка за выбор.
            game_points(karma_points); // Передаем 3 очка в функцию по расчету очков.
            break;
        }
        case 2:
        {
                cout << "Переговоры прошли успешно! Они просто хотели ее обновить)";
                karma_points = 3;
                game_points(karma_points);
                break;
        }
        default:
        {
            cout << "К сожалению теперь мы не можем ездить в другие города через эту дорогу..." << endl;
            karma_points = -3;
            game_points(karma_points);
            break;
        }

        }
    }

    if (incident == 2)
    {
        cout << "Шериф: Мэр, люди требуют строительства новой церкви!" << endl;
        cout << "1 - Приказать шерифу их успокоить" << endl;
        cout << "2 - Объявить строительство новой церкви и выделить деньги" << endl;
        cout << "3 - Сказать что церковь не нужна и наказать" << endl;

        cout << "-> "; cin >> choice;

        switch (choice)
        {

        case 1:
        {
            cout << "Шериф упокотл людей, но они остались недовольны и злы" << endl;
            karma_points = 1;
            game_points(karma_points);
            break;
        }

        case 2:
        {
            cout << "Вы объявили строительство новой церкви! Народ радуется!" << endl;
            karma_points = 3;
            game_points(karma_points);
            break;
        }

        default:
        {
            cout << "Вы наказали этих людей, теперь к вам много вопросов!!" << endl;
            karma_points = -2;
            game_points(karma_points);
            break;
        }

        }
    }

    if (incident == 3)
    {
        cout << "В городе появляется новый вирус, что делать?" << endl;
        cout << "1 - Делать вид что ничего нет" << endl;
        cout << "2 - Объявить карантин" << endl;
        cout << "3 - Посторить больницу и лабораторию по изучению болезни" << endl;

        cout << "-> "; cin >> choice;

        switch (choice)
        {

        case 1:
        {
            cout << "К сожаление большинство людей заболело и многие умерли" << endl;
            karma_points = -2;
            game_points(karma_points);
            break;
        }

        case 2:
        {
            cout << "Вы объявили карантин, но болезнь не уходит" << endl;
            karma_points = 1;
            game_points(karma_points);
            break;
        }

        default:
        {
            cout << "Вы нашли вакцину от болезни!! Теперь все хорошо)" << endl;
            karma_points = 3;
            game_points(karma_points);
            break;
        }

        }
    }

    if (incident == 4)
    {
        cout << "В городе появляются много людей без работы, что с ними делать?" << endl;
        cout << "1 - Не обращать на них внимание" << endl;
        cout << "2 - Сажать таких в тюрму" << endl;
        cout << "3 - Создать фонд для нахождения работы и трудоустройства" << endl;

        cout << "-> "; cin >> choice;

        switch (choice)
        {

        case 1:
        {
            cout << "Люди продожают ходить без дела и не приносить пользу" << endl;
            karma_points = 1;
            game_points(karma_points);
            break;
        }

        case 2:
        {
            cout << "Все жалуются на такое жестокое отношение, собирается бунт!" << endl;
            karma_points = -3;
            game_points(karma_points);
            break;
        }

        default:
        {
            cout << "Вы помогли им найти работу и экономика города улучшилась" << endl;
            karma_points = 3;
            game_points(karma_points);
            break;
        }

        }
    }

    if (incident == 5)
    {
        cout << "Шериф: Мэр, в городе появился самозванец который хочет смену власти!" << endl;
        cout << "1 - Приказать шерифу устронить его" << endl;
        cout << "2 - Объявить о проведении новых выборов мэра" << endl;
        cout << "3 - Поговорить с ним лично" << endl;

        cout << "-> "; cin >> choice;

        switch (choice)
        {

        case 1:
        {
            cout << "Злодей устронен, но люди стали вас бояться" << endl;
            karma_points = 1;
            game_points(karma_points);
            break;
        }

        case 2:
        {
            cout << "Это опасно, вас могут отстранить, лучше этого избежать" << endl;
            karma_points = -2;
            game_points(karma_points);
            break;
        }

        default:
        {
            cout << "Вы поговорили с ним лично и разрешили весь конфликт!" << endl;
            karma_points = 3;
            game_points(karma_points);
            break;
        }

        }
    }

    if (incident == 6)
    {
        cout << "В городе становиться всё больше нелегальной торговли, нужно что-то делать! " << endl;
        cout << "1 - Не обращать внимание" << endl;
        cout << "2 - Сажать в тюрму и забирать деньги" << endl;
        cout << "3 - Брать с людей налог и штрафовать за непослушание" << endl;

        cout << "-> "; cin >> choice;

        switch (choice)
        {

        case 1:
        {
            cout << "Начинается сильный рост цен на товары, экономика рушится" << endl;
            karma_points = -2;
            game_points(karma_points);
            break;
        }

        case 2:
        {
            cout << "Торговцы посажены, но люди недовольны таким жестоким решениям, авторитет снизился" << endl;
            karma_points = 1;
            game_points(karma_points);
            break;
        }

        default:
        {
            cout << "Люди стали подписывать договоры о налогах и теперь экономика улучшится!" << endl;
            karma_points = 3;
            game_points(karma_points);
            break;
        }

        }
    }
}
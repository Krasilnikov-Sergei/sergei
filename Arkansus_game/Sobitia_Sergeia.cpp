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
    /* ��� ������������ ����������! �� �������� (�� -3 �� 3),
    ������ ���� ������� ����� ������� case! ��� ����������
    ���������� ����� �� ������ ��������� �������� �������.*/

    int enemy_max_damage;
    int enemy_protection;
    int enemy_health;

    // ������ ������� #1:
    if (incident == 1)
    {
        cout << "���, �������� ����� ����� ��������� ������ ������� � ���!" << endl;
        cout << "1 - ������! ����� ������ ��� �����!" << endl;
        cout << "2 - ����� ������ ������� � �� ������������!" << endl;
        cout << "3 - �� ������� ��� ������!!!" << endl;

        cout << "-> "; cin >> choice; // ����������, ��� ����� �������� � ����������, ���������� ����� �����.

        switch (choice)
        {
        case 1:
        {
            cout << "��� ��������� ������ � ������ �� �� ����� ������ �����" << endl;
            karma_points = 1; // ��������� 3 ���� �� �����.
            game_points(karma_points); // �������� 3 ���� � ������� �� ������� �����.
            break;
        }
        case 2:
        {
                cout << "���������� ������ �������! ��� ������ ������ �� ��������)";
                karma_points = 3;
                game_points(karma_points);
                break;
        }
        default:
        {
            cout << "� ��������� ������ �� �� ����� ������ � ������ ������ ����� ��� ������..." << endl;
            karma_points = -3;
            game_points(karma_points);
            break;
        }

        }
    }

    if (incident == 2)
    {
        cout << "�����: ���, ���� ������� ������������� ����� ������!" << endl;
        cout << "1 - ��������� ������ �� ���������" << endl;
        cout << "2 - �������� ������������� ����� ������ � �������� ������" << endl;
        cout << "3 - ������� ��� ������� �� ����� � ��������" << endl;

        cout << "-> "; cin >> choice;

        switch (choice)
        {

        case 1:
        {
            cout << "����� ������� �����, �� ��� �������� ���������� � ���" << endl;
            karma_points = 1;
            game_points(karma_points);
            break;
        }

        case 2:
        {
            cout << "�� �������� ������������� ����� ������! ����� ��������!" << endl;
            karma_points = 3;
            game_points(karma_points);
            break;
        }

        default:
        {
            cout << "�� �������� ���� �����, ������ � ��� ����� ��������!!" << endl;
            karma_points = -2;
            game_points(karma_points);
            break;
        }

        }
    }

    if (incident == 3)
    {
        cout << "� ������ ���������� ����� �����, ��� ������?" << endl;
        cout << "1 - ������ ��� ��� ������ ���" << endl;
        cout << "2 - �������� ��������" << endl;
        cout << "3 - ��������� �������� � ����������� �� �������� �������" << endl;

        cout << "-> "; cin >> choice;

        switch (choice)
        {

        case 1:
        {
            cout << "� ��������� ����������� ����� �������� � ������ ������" << endl;
            karma_points = -2;
            game_points(karma_points);
            break;
        }

        case 2:
        {
            cout << "�� �������� ��������, �� ������� �� ������" << endl;
            karma_points = 1;
            game_points(karma_points);
            break;
        }

        default:
        {
            cout << "�� ����� ������� �� �������!! ������ ��� ������)" << endl;
            karma_points = 3;
            game_points(karma_points);
            break;
        }

        }
    }

    if (incident == 4)
    {
        cout << "� ������ ���������� ����� ����� ��� ������, ��� � ���� ������?" << endl;
        cout << "1 - �� �������� �� ��� ��������" << endl;
        cout << "2 - ������ ����� � �����" << endl;
        cout << "3 - ������� ���� ��� ���������� ������ � ���������������" << endl;

        cout << "-> "; cin >> choice;

        switch (choice)
        {

        case 1:
        {
            cout << "���� ��������� ������ ��� ���� � �� ��������� ������" << endl;
            karma_points = 1;
            game_points(karma_points);
            break;
        }

        case 2:
        {
            cout << "��� �������� �� ����� �������� ���������, ���������� ����!" << endl;
            karma_points = -3;
            game_points(karma_points);
            break;
        }

        default:
        {
            cout << "�� ������� �� ����� ������ � ��������� ������ ����������" << endl;
            karma_points = 3;
            game_points(karma_points);
            break;
        }

        }
    }

    if (incident == 5)
    {
        cout << "�����: ���, � ������ �������� ���������� ������� ����� ����� ������!" << endl;
        cout << "1 - ��������� ������ ��������� ���" << endl;
        cout << "2 - �������� � ���������� ����� ������� ����" << endl;
        cout << "3 - ���������� � ��� �����" << endl;

        cout << "-> "; cin >> choice;

        switch (choice)
        {

        case 1:
        {
            cout << "������ ��������, �� ���� ����� ��� �������" << endl;
            karma_points = 1;
            game_points(karma_points);
            break;
        }

        case 2:
        {
            cout << "��� ������, ��� ����� ����������, ����� ����� ��������" << endl;
            karma_points = -2;
            game_points(karma_points);
            break;
        }

        default:
        {
            cout << "�� ���������� � ��� ����� � ��������� ���� ��������!" << endl;
            karma_points = 3;
            game_points(karma_points);
            break;
        }

        }
    }

    if (incident == 6)
    {
        cout << "� ������ ����������� �� ������ ����������� ��������, ����� ���-�� ������! " << endl;
        cout << "1 - �� �������� ��������" << endl;
        cout << "2 - ������ � ����� � �������� ������" << endl;
        cout << "3 - ����� � ����� ����� � ���������� �� ������������" << endl;

        cout << "-> "; cin >> choice;

        switch (choice)
        {

        case 1:
        {
            cout << "���������� ������� ���� ��� �� ������, ��������� �������" << endl;
            karma_points = -2;
            game_points(karma_points);
            break;
        }

        case 2:
        {
            cout << "�������� ��������, �� ���� ���������� ����� �������� ��������, ��������� ��������" << endl;
            karma_points = 1;
            game_points(karma_points);
            break;
        }

        default:
        {
            cout << "���� ����� ����������� �������� � ������� � ������ ��������� ���������!" << endl;
            karma_points = 3;
            game_points(karma_points);
            break;
        }

        }
    }
}
#pragma once
#include <list>
#include "Enemy.h"

 GLfloat xRotated, yRotated, zRotated;

GlobalCoordinator glCoorndinator;

GLfloat X, Y, Z;

//������ ����� �����
GLfloat RainLenth = 0.05f;
//���������� ����� ��� ���
bool setRain = 0;

list<Enemy> EnemiesList;
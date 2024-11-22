#ifndef GLOBAL_H
#define GLOBAL_H

#include <QWidget>
#include <functional>
#include "QStyle"
#include <mutex>
#include <iostream>
#include <memory>

extern std::function<void(QWidget*)> repolish;

#endif // GLOBAL_H

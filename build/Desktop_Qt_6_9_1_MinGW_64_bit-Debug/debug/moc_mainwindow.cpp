/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../mainwindow.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN10MainWindowE_t {};
} // unnamed namespace

template <> constexpr inline auto MainWindow::qt_create_metaobjectdata<qt_meta_tag_ZN10MainWindowE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "MainWindow",
        "criarNovaViagem",
        "",
        "mostrarPaginaViagens",
        "mostrarPaginaHistorico",
        "editarViagem",
        "id",
        "excluirViagem",
        "entrarNaViagem",
        "finalizarViagem",
        "on_listHistorico_itemSelectionChanged"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'criarNovaViagem'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'mostrarPaginaViagens'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'mostrarPaginaHistorico'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'editarViagem'
        QtMocHelpers::SlotData<void(QUuid)>(5, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QUuid, 6 },
        }}),
        // Slot 'excluirViagem'
        QtMocHelpers::SlotData<void(QUuid)>(7, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QUuid, 6 },
        }}),
        // Slot 'entrarNaViagem'
        QtMocHelpers::SlotData<void(QUuid)>(8, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QUuid, 6 },
        }}),
        // Slot 'finalizarViagem'
        QtMocHelpers::SlotData<void(QUuid)>(9, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QUuid, 6 },
        }}),
        // Slot 'on_listHistorico_itemSelectionChanged'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<MainWindow, qt_meta_tag_ZN10MainWindowE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10MainWindowE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10MainWindowE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN10MainWindowE_t>.metaTypes,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<MainWindow *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->criarNovaViagem(); break;
        case 1: _t->mostrarPaginaViagens(); break;
        case 2: _t->mostrarPaginaHistorico(); break;
        case 3: _t->editarViagem((*reinterpret_cast< std::add_pointer_t<QUuid>>(_a[1]))); break;
        case 4: _t->excluirViagem((*reinterpret_cast< std::add_pointer_t<QUuid>>(_a[1]))); break;
        case 5: _t->entrarNaViagem((*reinterpret_cast< std::add_pointer_t<QUuid>>(_a[1]))); break;
        case 6: _t->finalizarViagem((*reinterpret_cast< std::add_pointer_t<QUuid>>(_a[1]))); break;
        case 7: _t->on_listHistorico_itemSelectionChanged(); break;
        default: ;
        }
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10MainWindowE_t>.strings))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP

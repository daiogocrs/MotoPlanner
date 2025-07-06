/****************************************************************************
** Meta object code from reading C++ file 'itemviagemwidget.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../itemviagemwidget.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'itemviagemwidget.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN16ItemViagemWidgetE_t {};
} // unnamed namespace

template <> constexpr inline auto ItemViagemWidget::qt_create_metaobjectdata<qt_meta_tag_ZN16ItemViagemWidgetE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "ItemViagemWidget",
        "editarRequisitado",
        "",
        "id",
        "excluirRequisitado",
        "entrarRequisitado",
        "finalizarRequisitado"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'editarRequisitado'
        QtMocHelpers::SignalData<void(QUuid)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QUuid, 3 },
        }}),
        // Signal 'excluirRequisitado'
        QtMocHelpers::SignalData<void(QUuid)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QUuid, 3 },
        }}),
        // Signal 'entrarRequisitado'
        QtMocHelpers::SignalData<void(QUuid)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QUuid, 3 },
        }}),
        // Signal 'finalizarRequisitado'
        QtMocHelpers::SignalData<void(QUuid)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QUuid, 3 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ItemViagemWidget, qt_meta_tag_ZN16ItemViagemWidgetE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject ItemViagemWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16ItemViagemWidgetE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16ItemViagemWidgetE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN16ItemViagemWidgetE_t>.metaTypes,
    nullptr
} };

void ItemViagemWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ItemViagemWidget *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->editarRequisitado((*reinterpret_cast< std::add_pointer_t<QUuid>>(_a[1]))); break;
        case 1: _t->excluirRequisitado((*reinterpret_cast< std::add_pointer_t<QUuid>>(_a[1]))); break;
        case 2: _t->entrarRequisitado((*reinterpret_cast< std::add_pointer_t<QUuid>>(_a[1]))); break;
        case 3: _t->finalizarRequisitado((*reinterpret_cast< std::add_pointer_t<QUuid>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (ItemViagemWidget::*)(QUuid )>(_a, &ItemViagemWidget::editarRequisitado, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (ItemViagemWidget::*)(QUuid )>(_a, &ItemViagemWidget::excluirRequisitado, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (ItemViagemWidget::*)(QUuid )>(_a, &ItemViagemWidget::entrarRequisitado, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (ItemViagemWidget::*)(QUuid )>(_a, &ItemViagemWidget::finalizarRequisitado, 3))
            return;
    }
}

const QMetaObject *ItemViagemWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ItemViagemWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16ItemViagemWidgetE_t>.strings))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ItemViagemWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void ItemViagemWidget::editarRequisitado(QUuid _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void ItemViagemWidget::excluirRequisitado(QUuid _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void ItemViagemWidget::entrarRequisitado(QUuid _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void ItemViagemWidget::finalizarRequisitado(QUuid _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}
QT_WARNING_POP

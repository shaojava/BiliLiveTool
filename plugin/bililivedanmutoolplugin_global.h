#ifndef BILILIVEDANMUTOOLPLUGIN_GLOBAL_H
#define BILILIVEDANMUTOOLPLUGIN_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(BILILIVEDANMUTOOLPLUGIN_LIBRARY)
#  define BILILIVEDANMUTOOLPLUGINSHARED_EXPORT Q_DECL_EXPORT
#else
#  define BILILIVEDANMUTOOLPLUGINSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // BILILIVEDANMUTOOLPLUGIN_GLOBAL_H

#ifndef UI_BUILDER_H
#define UI_BUILDER_H

#include "nav.h" 
#include "utils.h"

Nav* createNav(QWidget* parent = nullptr);
QScrollArea* createWelcomeWidget();
QScrollArea* createLocaleWidget();
QScrollArea* createDiskSetupWidget();
QScrollArea* createUsersWidget();
QScrollArea* createNetworkWidget();
QScrollArea* createPackagesWidget();
QScrollArea* createInstallWidget();

#endif 



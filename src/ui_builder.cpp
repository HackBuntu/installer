#include "ui_builder.h"

Nav* createNav(QWidget* parent) {
    Nav* nav = new Nav(parent);
    nav->setFixedSize(200, 800);
    loadWidgetStyleSheet(nav, ":/styles/styles/nav.qss");
    return nav;
}

QScrollArea* createWelcomeWidget() {

    QWidget* welcomeWidget = new QWidget();
    QVBoxLayout* layout = new QVBoxLayout(welcomeWidget);

    layout->insertStretch(-1, 1);

    welcomeWidget->setLayout(layout);

    QScrollArea* scrollArea = new QScrollArea();
    scrollArea->setWidget(welcomeWidget);
    scrollArea->setWidgetResizable(true); 
    scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff); 
    scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);

    return scrollArea;
}

QScrollArea* createLocaleWidget() {

    QWidget* localeWidget = new QWidget();
    QVBoxLayout* layout = new QVBoxLayout(localeWidget);

    layout->insertStretch(-1, 1);

    localeWidget->setLayout(layout);

    QScrollArea* scrollArea = new QScrollArea();
    scrollArea->setWidget(localeWidget);
    scrollArea->setWidgetResizable(true); 
    scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff); 
    scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);

    return scrollArea;
}

QScrollArea* createDiskSetupWidget() {

    QWidget* diskSetupWidget = new QWidget();
    QVBoxLayout* layout = new QVBoxLayout(diskSetupWidget);

    layout->insertStretch(-1, 1);

    diskSetupWidget->setLayout(layout);

    QScrollArea* scrollArea = new QScrollArea();
    scrollArea->setWidget(diskSetupWidget);
    scrollArea->setWidgetResizable(true); 
    scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff); 
    scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);

    return scrollArea;
}

QScrollArea* createUsersWidget() {

    QWidget* usersWidget = new QWidget();
    QVBoxLayout* layout = new QVBoxLayout(usersWidget);

    layout->insertStretch(-1, 1);

    usersWidget->setLayout(layout);

    QScrollArea* scrollArea = new QScrollArea();
    scrollArea->setWidget(usersWidget);
    scrollArea->setWidgetResizable(true); 
    scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff); 
    scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);

    return scrollArea;
}

QScrollArea* createNetworkWidget() {

    QWidget* networkWidget = new QWidget();
    QVBoxLayout* layout = new QVBoxLayout(networkWidget);

    layout->insertStretch(-1, 1);

    networkWidget->setLayout(layout);

    QScrollArea* scrollArea = new QScrollArea();
    scrollArea->setWidget(networkWidget);
    scrollArea->setWidgetResizable(true); 
    scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff); 
    scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);

    return scrollArea;
}

QScrollArea* createPackagesWidget() {

    QWidget* packagesWidget = new QWidget();
    QVBoxLayout* layout = new QVBoxLayout(packagesWidget);

    layout->insertStretch(-1, 1);

    packagesWidget->setLayout(layout);

    QScrollArea* scrollArea = new QScrollArea();
    scrollArea->setWidget(packagesWidget);
    scrollArea->setWidgetResizable(true); 
    scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff); 
    scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);

    return scrollArea;
}

QScrollArea* createInstallWidget() {

    QWidget* installWidget = new QWidget();
    QVBoxLayout* layout = new QVBoxLayout(installWidget);

    layout->insertStretch(-1, 1);

    installWidget->setLayout(layout);

    QScrollArea* scrollArea = new QScrollArea();
    scrollArea->setWidget(installWidget);
    scrollArea->setWidgetResizable(true); 
    scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff); 
    scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);

    return scrollArea;
}

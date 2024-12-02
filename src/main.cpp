#include "main.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    loadAppStyleSheet(app, ":/styles/styles/styles.qss");

    QWidget mainWindow;
    QVBoxLayout* layout = new QVBoxLayout(&mainWindow);

    Nav* nav = createNav();
    layout->addWidget(nav); 

    QScrollArea* welcomeWidget = createWelcomeWidget();
    QScrollArea* localeWidget = createLocaleWidget();
    QScrollArea* diskSetupWidget = createDiskSetupWidget();
    QScrollArea* usersWidget = createUsersWidget();
    QScrollArea* networkWidget = createNetworkWidget();
    QScrollArea* packagesWidget = createPackagesWidget();
    QScrollArea* installWidget = createInstallWidget();

    QStackedWidget* stackedWidget = new QStackedWidget();
    stackedWidget->addWidget(welcomeWidget);
    stackedWidget->addWidget(localeWidget);
    stackedWidget->addWidget(diskSetupWidget);
    stackedWidget->addWidget(usersWidget);
    stackedWidget->addWidget(networkWidget);
    stackedWidget->addWidget(packagesWidget);
    stackedWidget->addWidget(installWidget);
    layout->addWidget(stackedWidget); 

    QObject::connect(nav, &Nav::buttonClicked, [=](const QString &buttonName) {
        if (buttonName == "welcome") {
            stackedWidget->setCurrentWidget(welcomeWidget);
        } else if (buttonName == "locale") {
            stackedWidget->setCurrentWidget(localeWidget);
        } else if (buttonName == "diskSetup") {
            stackedWidget->setCurrentWidget(diskSetupWidget);
        } else if (buttonName == "users") {
            stackedWidget->setCurrentWidget(usersWidget);
        } else if (buttonName == "network") {
            stackedWidget->setCurrentWidget(networkWidget);
        } else if (buttonName == "packages") {
            stackedWidget->setCurrentWidget(packagesWidget);
        } else if (buttonName == "install") {
            stackedWidget->setCurrentWidget(installWidget);
        } 
    });

    mainWindow.setLayout(layout);
    mainWindow.setFixedSize(1200, 800);
    mainWindow.show();

    return app.exec();
}



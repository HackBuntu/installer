#include "nav.h"

Nav::Nav(QWidget *parent) : QWidget(parent), ui(new Ui::Nav) {
    ui->setupUi(this);

    QVector<QPushButton*> navButtons = {
        ui->welcome,
        ui->locale,
        ui->diskSetup,
        ui->users,
        ui->network,
        ui->packages,
        ui->install
    };

    const auto& children = parent->findChildren<QPushButton*>();
    for (auto* button : children) {
        button->setProperty("active", false);
        button->style()->polish(button);
    }

    ui->welcome->setProperty("active", true);
    ui->welcome->style()->polish(ui->welcome);

    connect(ui->welcome, &QPushButton::clicked, [=]() {
        QWidget* parent = ui->welcome->parentWidget();

        const auto& children = parent->findChildren<QPushButton*>();
        for (auto* button : children) {
            button->setProperty("active", false);
            button->style()->polish(button);
        }

        ui->welcome->setProperty("active", true);
        ui->welcome->style()->polish(ui->welcome);

        emit buttonClicked("welcome");
    });

    connect(ui->locale, &QPushButton::clicked, [=]() {
        QWidget* parent = ui->locale->parentWidget();

        const auto& children = parent->findChildren<QPushButton*>();
        for (auto* button : children) {
            button->setProperty("active", false);
            button->style()->polish(button);
        }

        ui->locale->setProperty("active", true);
        ui->locale->style()->polish(ui->locale);

        emit buttonClicked("locale");
    });

    connect(ui->diskSetup, &QPushButton::clicked, [=]() {
        QWidget* parent = ui->diskSetup->parentWidget();

        const auto& children = parent->findChildren<QPushButton*>();
        for (auto* button : children) {
            button->setProperty("active", false);
            button->style()->polish(button);
        }

        ui->diskSetup->setProperty("active", true);
        ui->diskSetup->style()->polish(ui->diskSetup);

        emit buttonClicked("diskSetup");
    });

    connect(ui->users, &QPushButton::clicked, [=]() {
        QWidget* parent = ui->users->parentWidget();

        const auto& children = parent->findChildren<QPushButton*>();
        for (auto* button : children) {
            button->setProperty("active", false);
            button->style()->polish(button);
        }

        ui->users->setProperty("active", true);
        ui->users->style()->polish(ui->users);

        emit buttonClicked("users");
    });

    connect(ui->network, &QPushButton::clicked, [=]() {
        QWidget* parent = ui->network->parentWidget();

        const auto& children = parent->findChildren<QPushButton*>();
        for (auto* button : children) {
            button->setProperty("active", false);
            button->style()->polish(button);
        }

        ui->network->setProperty("active", true);
        ui->network->style()->polish(ui->network);

        emit buttonClicked("network");
    });

    connect(ui->packages, &QPushButton::clicked, [=]() {
        QWidget* parent = ui->packages->parentWidget();

        const auto& children = parent->findChildren<QPushButton*>();
        for (auto* button : children) {
            button->setProperty("active", false);
            button->style()->polish(button);
        }

        ui->packages->setProperty("active", true);
        ui->packages->style()->polish(ui->packages);

        emit buttonClicked("packages");
    });

    connect(ui->install, &QPushButton::clicked, [=]() {
        QWidget* parent = ui->install->parentWidget();

        const auto& children = parent->findChildren<QPushButton*>();
        for (auto* button : children) {
            button->setProperty("active", false);
            button->style()->polish(button);
        }

        ui->install->setProperty("active", true);
        ui->install->style()->polish(ui->install);

        emit buttonClicked("install");
    });
}

Nav::~Nav() {
    delete ui;
}

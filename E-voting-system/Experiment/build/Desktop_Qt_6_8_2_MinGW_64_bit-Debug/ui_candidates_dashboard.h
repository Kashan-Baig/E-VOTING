/********************************************************************************
** Form generated from reading UI file 'candidates_dashboard.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CANDIDATES_DASHBOARD_H
#define UI_CANDIDATES_DASHBOARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_candidates_dashboard
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *Title;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *dashboard_btn;
    QPushButton *voters_btn;
    QPushButton *cadidates_btn;
    QPushButton *result_btn;
    QGridLayout *gridLayout_2;
    QLabel *candidates;
    QLabel *total_candidates;
    QLabel *vters;
    QLabel *total_voters;
    QLabel *castsvote;
    QLabel *total_votes_casted;
    QLabel *LIVE_STATS;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QGridLayout *gridLayout;
    QLabel *id_2;
    QLabel *bio_1;
    QLabel *name;
    QLabel *party_1;
    QLabel *id;
    QLabel *bio_2;
    QLabel *id_1;
    QLabel *name_1;
    QLabel *party_2;
    QLabel *party;
    QLabel *name_2;
    QLabel *actions;

    void setupUi(QWidget *candidates_dashboard)
    {
        if (candidates_dashboard->objectName().isEmpty())
            candidates_dashboard->setObjectName("candidates_dashboard");
        candidates_dashboard->resize(725, 553);
        candidates_dashboard->setMaximumSize(QSize(16777215, 16777215));
        candidates_dashboard->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_2 = new QVBoxLayout(candidates_dashboard);
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        Title = new QLabel(candidates_dashboard);
        Title->setObjectName("Title");
        Title->setMaximumSize(QSize(16777215, 50));
        QFont font;
        font.setPointSize(15);
        font.setBold(true);
        font.setUnderline(true);
        font.setStrikeOut(false);
        Title->setFont(font);
        Title->setStyleSheet(QString::fromUtf8("color : black;"));
        Title->setAlignment(Qt::AlignmentFlag::AlignCenter);
        Title->setIndent(-1);

        horizontalLayout->addWidget(Title);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        dashboard_btn = new QPushButton(candidates_dashboard);
        dashboard_btn->setObjectName("dashboard_btn");
        QFont font1;
        font1.setWeight(QFont::DemiBold);
        dashboard_btn->setFont(font1);
        dashboard_btn->setAutoFillBackground(false);
        dashboard_btn->setStyleSheet(QString::fromUtf8(" background-color: rgb(26, 62, 140);\n"
"    color: white;\n"
"    border: none;\n"
"    border-radius: 6px;\n"
"    padding: 10px 20px;\n"
"    margin: 0 5px;\n"
"    font-size: 14px;\n"
"    font-weight: 600;\n"
"    min-width: 120px;;"));

        horizontalLayout_2->addWidget(dashboard_btn);

        voters_btn = new QPushButton(candidates_dashboard);
        voters_btn->setObjectName("voters_btn");
        voters_btn->setFont(font1);
        voters_btn->setStyleSheet(QString::fromUtf8(" background-color: rgb(26, 62, 140);\n"
"    color: white;\n"
"    border: none;\n"
"    border-radius: 6px;\n"
"    padding: 10px 20px;\n"
"    margin: 0 5px;\n"
"    font-size: 14px;\n"
"    font-weight: 600;\n"
"    min-width: 120px;"));

        horizontalLayout_2->addWidget(voters_btn);

        cadidates_btn = new QPushButton(candidates_dashboard);
        cadidates_btn->setObjectName("cadidates_btn");
        cadidates_btn->setFont(font1);
        cadidates_btn->setStyleSheet(QString::fromUtf8(" background-color: rgb(26, 62, 140);\n"
"    color: white;\n"
"    border: none;\n"
"    border-radius: 6px;\n"
"    padding: 10px 20px;\n"
"    margin: 0 5px;\n"
"    font-size: 14px;\n"
"    font-weight: 600;\n"
"    min-width: 120px;"));

        horizontalLayout_2->addWidget(cadidates_btn);

        result_btn = new QPushButton(candidates_dashboard);
        result_btn->setObjectName("result_btn");
        result_btn->setFont(font1);
        result_btn->setStyleSheet(QString::fromUtf8(" background-color: rgb(26, 62, 140);\n"
"    color: white;\n"
"    border: none;\n"
"    border-radius: 6px;\n"
"    padding: 10px 20px;\n"
"    margin: 0 5px;\n"
"    font-size: 14px;\n"
"    font-weight: 600;\n"
"    min-width: 120px;"));

        horizontalLayout_2->addWidget(result_btn);


        verticalLayout_2->addLayout(horizontalLayout_2);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        candidates = new QLabel(candidates_dashboard);
        candidates->setObjectName("candidates");
        QFont font2;
        font2.setPointSize(11);
        font2.setBold(true);
        candidates->setFont(font2);
        candidates->setStyleSheet(QString::fromUtf8("color:black"));
        candidates->setAlignment(Qt::AlignmentFlag::AlignCenter);
        candidates->setMargin(5);

        gridLayout_2->addWidget(candidates, 1, 0, 1, 1);

        total_candidates = new QLabel(candidates_dashboard);
        total_candidates->setObjectName("total_candidates");
        total_candidates->setStyleSheet(QString::fromUtf8("   font-size: 13px;\n"
"    font-weight: 650;\n"
"    color: #444444;\n"
"    margin-bottom: 5px;"));

        gridLayout_2->addWidget(total_candidates, 1, 1, 1, 1);

        vters = new QLabel(candidates_dashboard);
        vters->setObjectName("vters");
        vters->setFont(font2);
        vters->setStyleSheet(QString::fromUtf8("color:black"));
        vters->setAlignment(Qt::AlignmentFlag::AlignCenter);
        vters->setMargin(5);

        gridLayout_2->addWidget(vters, 2, 0, 1, 1);

        total_voters = new QLabel(candidates_dashboard);
        total_voters->setObjectName("total_voters");
        total_voters->setStyleSheet(QString::fromUtf8("   font-size: 13px;\n"
"    font-weight: 650;\n"
"    color: #444444;\n"
"    margin-bottom: 5px;"));

        gridLayout_2->addWidget(total_voters, 2, 1, 1, 1);

        castsvote = new QLabel(candidates_dashboard);
        castsvote->setObjectName("castsvote");
        castsvote->setFont(font2);
        castsvote->setStyleSheet(QString::fromUtf8("color:black"));
        castsvote->setAlignment(Qt::AlignmentFlag::AlignCenter);
        castsvote->setMargin(5);

        gridLayout_2->addWidget(castsvote, 3, 0, 1, 1);

        total_votes_casted = new QLabel(candidates_dashboard);
        total_votes_casted->setObjectName("total_votes_casted");
        total_votes_casted->setStyleSheet(QString::fromUtf8("   font-size: 13px;\n"
"    font-weight: 650;\n"
"    color: #444444;\n"
"    margin-bottom: 5px;"));

        gridLayout_2->addWidget(total_votes_casted, 3, 1, 1, 1);

        LIVE_STATS = new QLabel(candidates_dashboard);
        LIVE_STATS->setObjectName("LIVE_STATS");
        LIVE_STATS->setFont(font2);
        LIVE_STATS->setStyleSheet(QString::fromUtf8("color:black"));
        LIVE_STATS->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_2->addWidget(LIVE_STATS, 0, 0, 1, 2);


        verticalLayout_2->addLayout(gridLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(5);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setSizeConstraint(QLayout::SizeConstraint::SetMinimumSize);
        horizontalLayout_3->setContentsMargins(0, -1, -1, -1);
        label = new QLabel(candidates_dashboard);
        label->setObjectName("label");
        label->setMinimumSize(QSize(0, 20));
        label->setMaximumSize(QSize(16777215, 39));
        label->setSizeIncrement(QSize(0, 50));
        label->setBaseSize(QSize(0, 50));
        label->setFont(font2);
        label->setStyleSheet(QString::fromUtf8("color : black; "));
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label->setMargin(10);

        horizontalLayout_3->addWidget(label);


        verticalLayout_2->addLayout(horizontalLayout_3);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        id_2 = new QLabel(candidates_dashboard);
        id_2->setObjectName("id_2");
        id_2->setStyleSheet(QString::fromUtf8("   font-size: 13px;\n"
"    font-weight: 800;\n"
"    color: #444444;\n"
"    margin-bottom: 5px;"));
        id_2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(id_2, 3, 0, 1, 1);

        bio_1 = new QLabel(candidates_dashboard);
        bio_1->setObjectName("bio_1");
        bio_1->setStyleSheet(QString::fromUtf8("   font-size: 13px;\n"
"    font-weight: 600;\n"
"    color: #444444;\n"
"    margin-bottom: 5px;"));
        bio_1->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(bio_1, 2, 3, 1, 1);

        name = new QLabel(candidates_dashboard);
        name->setObjectName("name");
        QFont font3;
        font3.setPointSize(10);
        font3.setBold(true);
        name->setFont(font3);
        name->setStyleSheet(QString::fromUtf8("color:black"));
        name->setFrameShape(QFrame::Shape::NoFrame);
        name->setLineWidth(1);
        name->setAlignment(Qt::AlignmentFlag::AlignCenter);
        name->setMargin(6);

        gridLayout->addWidget(name, 1, 1, 1, 1);

        party_1 = new QLabel(candidates_dashboard);
        party_1->setObjectName("party_1");
        party_1->setStyleSheet(QString::fromUtf8("   font-size: 13px;\n"
"    font-weight: 600;\n"
"    color: #444444;\n"
"    margin-bottom: 5px;"));
        party_1->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(party_1, 2, 2, 1, 1);

        id = new QLabel(candidates_dashboard);
        id->setObjectName("id");
        id->setMaximumSize(QSize(70, 16777215));
        id->setFont(font3);
        id->setStyleSheet(QString::fromUtf8("color:black"));
        id->setFrameShape(QFrame::Shape::NoFrame);
        id->setFrameShadow(QFrame::Shadow::Raised);
        id->setLineWidth(1);
        id->setMidLineWidth(0);
        id->setAlignment(Qt::AlignmentFlag::AlignCenter);
        id->setMargin(6);

        gridLayout->addWidget(id, 1, 0, 1, 1);

        bio_2 = new QLabel(candidates_dashboard);
        bio_2->setObjectName("bio_2");
        bio_2->setStyleSheet(QString::fromUtf8("   font-size: 13px;\n"
"    font-weight: 600;\n"
"    color: #444444;\n"
"    margin-bottom: 5px;"));
        bio_2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(bio_2, 3, 3, 1, 1);

        id_1 = new QLabel(candidates_dashboard);
        id_1->setObjectName("id_1");
        id_1->setStyleSheet(QString::fromUtf8("   font-size: 13px;\n"
"    font-weight: 800;\n"
"    color: #444444;\n"
"    margin-bottom: 5px;"));
        id_1->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(id_1, 2, 0, 1, 1);

        name_1 = new QLabel(candidates_dashboard);
        name_1->setObjectName("name_1");
        name_1->setStyleSheet(QString::fromUtf8("   font-size: 13px;\n"
"    font-weight: 600;\n"
"    color: #444444;\n"
"    margin-bottom: 5px;"));
        name_1->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(name_1, 2, 1, 1, 1);

        party_2 = new QLabel(candidates_dashboard);
        party_2->setObjectName("party_2");
        party_2->setStyleSheet(QString::fromUtf8("   font-size: 13px;\n"
"    font-weight: 600;\n"
"    color: #444444;\n"
"    margin-bottom: 5px;"));
        party_2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(party_2, 3, 2, 1, 1);

        party = new QLabel(candidates_dashboard);
        party->setObjectName("party");
        party->setMaximumSize(QSize(130, 16777215));
        party->setFont(font3);
        party->setStyleSheet(QString::fromUtf8("color:black"));
        party->setAlignment(Qt::AlignmentFlag::AlignCenter);
        party->setMargin(6);

        gridLayout->addWidget(party, 1, 2, 1, 1);

        name_2 = new QLabel(candidates_dashboard);
        name_2->setObjectName("name_2");
        name_2->setStyleSheet(QString::fromUtf8("   font-size: 13px;\n"
"    font-weight: 600;\n"
"    color: #444444;\n"
"    margin-bottom: 5px;"));
        name_2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(name_2, 3, 1, 1, 1);

        actions = new QLabel(candidates_dashboard);
        actions->setObjectName("actions");
        actions->setFont(font3);
        actions->setStyleSheet(QString::fromUtf8("color:black"));
        actions->setAlignment(Qt::AlignmentFlag::AlignCenter);
        actions->setMargin(6);

        gridLayout->addWidget(actions, 1, 3, 1, 1);


        verticalLayout_2->addLayout(gridLayout);


        retranslateUi(candidates_dashboard);

        QMetaObject::connectSlotsByName(candidates_dashboard);
    } // setupUi

    void retranslateUi(QWidget *candidates_dashboard)
    {
        candidates_dashboard->setWindowTitle(QCoreApplication::translate("candidates_dashboard", "Form", nullptr));
        Title->setText(QCoreApplication::translate("candidates_dashboard", "ELECTION ADMIN PORTAL", nullptr));
        dashboard_btn->setText(QCoreApplication::translate("candidates_dashboard", "Dashboard", nullptr));
        voters_btn->setText(QCoreApplication::translate("candidates_dashboard", "Candidates", nullptr));
        cadidates_btn->setText(QCoreApplication::translate("candidates_dashboard", "Voters", nullptr));
        result_btn->setText(QCoreApplication::translate("candidates_dashboard", "Results", nullptr));
        candidates->setText(QCoreApplication::translate("candidates_dashboard", "Candidates :", nullptr));
        total_candidates->setText(QCoreApplication::translate("candidates_dashboard", "TextLabel", nullptr));
        vters->setText(QCoreApplication::translate("candidates_dashboard", "Voters :", nullptr));
        total_voters->setText(QCoreApplication::translate("candidates_dashboard", "TextLabel", nullptr));
        castsvote->setText(QCoreApplication::translate("candidates_dashboard", "Votes Cast :", nullptr));
        total_votes_casted->setText(QCoreApplication::translate("candidates_dashboard", "TextLabel", nullptr));
        LIVE_STATS->setText(QCoreApplication::translate("candidates_dashboard", "LIVE STATS", nullptr));
        label->setText(QCoreApplication::translate("candidates_dashboard", "RECENT CANDIDATES", nullptr));
        id_2->setText(QCoreApplication::translate("candidates_dashboard", "TextLabel", nullptr));
        bio_1->setText(QCoreApplication::translate("candidates_dashboard", "TextLabel", nullptr));
        name->setText(QCoreApplication::translate("candidates_dashboard", "Name", nullptr));
        party_1->setText(QCoreApplication::translate("candidates_dashboard", "TextLabel", nullptr));
        id->setText(QCoreApplication::translate("candidates_dashboard", "ID", nullptr));
        bio_2->setText(QCoreApplication::translate("candidates_dashboard", "TextLabel", nullptr));
        id_1->setText(QCoreApplication::translate("candidates_dashboard", "TextLabel", nullptr));
        name_1->setText(QCoreApplication::translate("candidates_dashboard", "TextLabel", nullptr));
        party_2->setText(QCoreApplication::translate("candidates_dashboard", "TextLabel", nullptr));
        party->setText(QCoreApplication::translate("candidates_dashboard", "Party", nullptr));
        name_2->setText(QCoreApplication::translate("candidates_dashboard", "TextLabel", nullptr));
        actions->setText(QCoreApplication::translate("candidates_dashboard", "BIO", nullptr));
    } // retranslateUi

};

namespace Ui {
    class candidates_dashboard: public Ui_candidates_dashboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CANDIDATES_DASHBOARD_H

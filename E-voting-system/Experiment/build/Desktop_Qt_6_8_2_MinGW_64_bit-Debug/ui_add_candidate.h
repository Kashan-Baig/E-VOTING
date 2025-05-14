/********************************************************************************
** Form generated from reading UI file 'add_candidate.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_CANDIDATE_H
#define UI_ADD_CANDIDATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Candidate
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *addcandidate;
    QFrame *line;
    QHBoxLayout *horizontalLayout_2;
    QLabel *fullname;
    QLineEdit *nameField;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QComboBox *partyDropDown;
    QGridLayout *gridLayout;
    QComboBox *AGE_NO;
    QLabel *add_pictureLabel;
    QPushButton *pushButton;
    QLabel *gender;
    QLabel *gender_name;
    QSpinBox *ageField;
    QLabel *picture_label;
    QHBoxLayout *horizontalLayout_6;
    QLabel *BIO;
    QTextEdit *bioFiled;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *save;
    QPushButton *cancel;

    void setupUi(QDialog *Candidate)
    {
        if (Candidate->objectName().isEmpty())
            Candidate->setObjectName("Candidate");
        Candidate->resize(679, 559);
        Candidate->setMinimumSize(QSize(100, 0));
        verticalLayout = new QVBoxLayout(Candidate);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        addcandidate = new QLabel(Candidate);
        addcandidate->setObjectName("addcandidate");
        QFont font;
        font.setBold(true);
        addcandidate->setFont(font);
        addcandidate->setStyleSheet(QString::fromUtf8(" font-size: 20px;\n"
"    font-weight: bold;\n"
"    color: #1a3e8c;\n"
"    margin-bottom: 10px;"));
        addcandidate->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout->addWidget(addcandidate);


        verticalLayout->addLayout(horizontalLayout);

        line = new QFrame(Candidate);
        line->setObjectName("line");
        line->setStyleSheet(QString::fromUtf8("color:black;\n"
""));
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout->addWidget(line);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, -1, 8, -1);
        fullname = new QLabel(Candidate);
        fullname->setObjectName("fullname");
        fullname->setMaximumSize(QSize(292, 30));
        fullname->setFont(font);
        fullname->setStyleSheet(QString::fromUtf8("   font-size: 13px;\n"
"    font-weight: 700;\n"
"    color: rgb(26, 62, 140);\n"
""));
        fullname->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        fullname->setMargin(8);

        horizontalLayout_2->addWidget(fullname);

        nameField = new QLineEdit(Candidate);
        nameField->setObjectName("nameField");
        nameField->setMaximumSize(QSize(464, 16777215));
        nameField->setStyleSheet(QString::fromUtf8("    background: white;\n"
"    border: 1px solid #ddd;\n"
"    border-radius: 5px;\n"
"    padding: 6px;\n"
"    margin: 0px 0;\n"
"    min-width: 150px;"));

        horizontalLayout_2->addWidget(nameField);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(9, -1, 8, -1);
        label_3 = new QLabel(Candidate);
        label_3->setObjectName("label_3");
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("   font-size: 13px;\n"
"    font-weight: 700;\n"
"    color: rgb(26, 62, 140);\n"
""));

        horizontalLayout_3->addWidget(label_3);

        partyDropDown = new QComboBox(Candidate);
        partyDropDown->addItem(QString());
        partyDropDown->addItem(QString());
        partyDropDown->addItem(QString());
        partyDropDown->addItem(QString());
        partyDropDown->addItem(QString());
        partyDropDown->setObjectName("partyDropDown");
        partyDropDown->setMaximumSize(QSize(60, 30));

        horizontalLayout_3->addWidget(partyDropDown);


        verticalLayout->addLayout(horizontalLayout_3);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(9, -1, 8, -1);
        AGE_NO = new QComboBox(Candidate);
        AGE_NO->addItem(QString());
        AGE_NO->addItem(QString());
        AGE_NO->addItem(QString());
        AGE_NO->setObjectName("AGE_NO");
        AGE_NO->setMaximumSize(QSize(80, 30));
        AGE_NO->setStyleSheet(QString::fromUtf8("background-color: rgb(26, 62, 140);"));

        gridLayout->addWidget(AGE_NO, 0, 4, 1, 1);

        add_pictureLabel = new QLabel(Candidate);
        add_pictureLabel->setObjectName("add_pictureLabel");
        add_pictureLabel->setStyleSheet(QString::fromUtf8("   font-size: 13px;\n"
"    font-weight: 700;\n"
"    color: rgb(26, 62, 140);\n"
""));
        add_pictureLabel->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignTop);

        gridLayout->addWidget(add_pictureLabel, 1, 1, 1, 4);

        pushButton = new QPushButton(Candidate);
        pushButton->setObjectName("pushButton");
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("/* Normal + hover + pressed directly together */\n"
"#pushButton {\n"
"    background-color: #1a3e8c;   /* Blue */\n"
"    color: white;\n"
"    border: none;\n"
"    border-radius: 5px;\n"
"    padding: 10px 20px;\n"
"    margin: 15px 10px;\n"
"    min-width: 100px;\n"
"}\n"
"\n"
"/* Hover effect */\n"
"#pushButton:hover {\n"
"    background-color: #303f9f;   /* Darker blue on hover */\n"
"    color: white;\n"
"}\n"
"\n"
"/* Pressed effect */\n"
"#pushButton:pressed {\n"
"    background-color: #0d47a1;   /* Even darker blue when pressed */\n"
"}\n"
"\n"
"   "));

        gridLayout->addWidget(pushButton, 2, 1, 1, 4);

        gender = new QLabel(Candidate);
        gender->setObjectName("gender");
        gender->setStyleSheet(QString::fromUtf8("   font-size: 13px;\n"
"    font-weight: 700;\n"
"    color: rgb(26, 62, 140);\n"
"\n"
""));

        gridLayout->addWidget(gender, 0, 1, 1, 1);

        gender_name = new QLabel(Candidate);
        gender_name->setObjectName("gender_name");
        gender_name->setStyleSheet(QString::fromUtf8("   font-size: 13px;\n"
"    font-weight: 700;\n"
"    color: rgb(26, 62, 140);\n"
""));

        gridLayout->addWidget(gender_name, 0, 3, 1, 1);

        ageField = new QSpinBox(Candidate);
        ageField->setObjectName("ageField");
        ageField->setStyleSheet(QString::fromUtf8("    background: white;\n"
"    border: 1px solid #ddd;\n"
"    border-radius: 5px;\n"
"    padding: 6px;\n"
"    margin: 0px 0;\n"
"    min-width: 150px;"));

        gridLayout->addWidget(ageField, 0, 2, 1, 1);

        picture_label = new QLabel(Candidate);
        picture_label->setObjectName("picture_label");
        picture_label->setMinimumSize(QSize(150, 150));
        picture_label->setMaximumSize(QSize(150, 150));

        gridLayout->addWidget(picture_label, 3, 1, 1, 4, Qt::AlignmentFlag::AlignHCenter);


        verticalLayout->addLayout(gridLayout);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setSizeConstraint(QLayout::SizeConstraint::SetMinimumSize);
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        BIO = new QLabel(Candidate);
        BIO->setObjectName("BIO");
        BIO->setMaximumSize(QSize(16777215, 50));
        BIO->setStyleSheet(QString::fromUtf8("   font-size: 13px;\n"
"    font-weight: 700;\n"
"    color: rgb(26, 62, 140);\n"
""));
        BIO->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);

        horizontalLayout_6->addWidget(BIO);

        bioFiled = new QTextEdit(Candidate);
        bioFiled->setObjectName("bioFiled");
        bioFiled->setMinimumSize(QSize(164, 50));
        bioFiled->setMaximumSize(QSize(16777215, 50));
        bioFiled->setStyleSheet(QString::fromUtf8("    background: white;\n"
"    border: 1px solid #ddd;\n"
"    border-radius: 5px;\n"
"    padding: 6px;\n"
"    margin: 0px 0;\n"
"    min-width: 150px;"));

        horizontalLayout_6->addWidget(bioFiled);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalLayout_7->setContentsMargins(9, -1, 8, -1);
        save = new QPushButton(Candidate);
        save->setObjectName("save");
        save->setFont(font);
        save->setStyleSheet(QString::fromUtf8("#save {\n"
"    background-color: #1a3e8c;   /* Blue */\n"
"    color: white;\n"
"    border: none;\n"
"    border-radius: 5px;\n"
"    padding: 10px 20px;\n"
"    margin: 15px 10px;\n"
"    min-width: 100px;\n"
"}\n"
"\n"
"/* Hover effect */\n"
"#save:hover {\n"
"    background-color: #303f9f;   /* Darker blue on hover */\n"
"    color: white;\n"
"}\n"
"\n"
"/* Pressed effect */\n"
"#save:pressed {\n"
"    background-color: #0d47a1;   /* Even darker blue when pressed */\n"
"}\n"
"\n"
"   \n"
"   "));

        horizontalLayout_7->addWidget(save);

        cancel = new QPushButton(Candidate);
        cancel->setObjectName("cancel");
        cancel->setStyleSheet(QString::fromUtf8("background-color: rgb(229, 62, 62);\n"
" color: white;\n"
"    border: none;\n"
"    border-radius: 6px;\n"
"    font-size: 14px;\n"
"    font-weight: 600;\n"
"    padding:5px;\n"
"   "));

        horizontalLayout_7->addWidget(cancel);


        verticalLayout->addLayout(horizontalLayout_7);


        retranslateUi(Candidate);

        QMetaObject::connectSlotsByName(Candidate);
    } // setupUi

    void retranslateUi(QDialog *Candidate)
    {
        Candidate->setWindowTitle(QCoreApplication::translate("Candidate", "Candidate Page", nullptr));
        addcandidate->setText(QCoreApplication::translate("Candidate", "ADD CANDIDATE", nullptr));
        fullname->setText(QCoreApplication::translate("Candidate", "FullName:", nullptr));
        nameField->setPlaceholderText(QCoreApplication::translate("Candidate", "Enter your name", nullptr));
        label_3->setText(QCoreApplication::translate("Candidate", "Parties:", nullptr));
        partyDropDown->setItemText(0, QCoreApplication::translate("Candidate", "Pak-Muslim league N", nullptr));
        partyDropDown->setItemText(1, QCoreApplication::translate("Candidate", "Pakistan tehreek-e-Insaaf", nullptr));
        partyDropDown->setItemText(2, QCoreApplication::translate("Candidate", "Pakistan People's Party", nullptr));
        partyDropDown->setItemText(3, QCoreApplication::translate("Candidate", "tehreek-e-labbaik", nullptr));
        partyDropDown->setItemText(4, QCoreApplication::translate("Candidate", "Jamat-e-Islami", nullptr));

        AGE_NO->setItemText(0, QCoreApplication::translate("Candidate", "MALE", nullptr));
        AGE_NO->setItemText(1, QCoreApplication::translate("Candidate", "FEMALE", nullptr));
        AGE_NO->setItemText(2, QCoreApplication::translate("Candidate", "INTERSEX", nullptr));

        add_pictureLabel->setText(QCoreApplication::translate("Candidate", "Add Candidate Picture", nullptr));
        pushButton->setText(QCoreApplication::translate("Candidate", "Add Picture", nullptr));
        gender->setText(QCoreApplication::translate("Candidate", "AGE:", nullptr));
        gender_name->setText(QCoreApplication::translate("Candidate", "Gender:", nullptr));
        picture_label->setText(QString());
        BIO->setText(QCoreApplication::translate("Candidate", "BIO:", nullptr));
        bioFiled->setPlaceholderText(QCoreApplication::translate("Candidate", "Add your bio briefly", nullptr));
        save->setText(QCoreApplication::translate("Candidate", "Save", nullptr));
        cancel->setText(QCoreApplication::translate("Candidate", "< Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Candidate: public Ui_Candidate {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_CANDIDATE_H

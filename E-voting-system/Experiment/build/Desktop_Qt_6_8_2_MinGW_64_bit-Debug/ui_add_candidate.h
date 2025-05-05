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
    QPushButton *back;
    QFrame *line;
    QHBoxLayout *horizontalLayout_2;
    QLabel *fullname;
    QLineEdit *nameField;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QComboBox *partyDropDown;
    QGridLayout *gridLayout;
    QSpinBox *ageField;
    QLabel *gender;
    QComboBox *AGE_NO;
    QLabel *pictureLabel;
    QLabel *gender_name;
    QPushButton *pushButton;
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
        Candidate->resize(572, 452);
        verticalLayout = new QVBoxLayout(Candidate);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        addcandidate = new QLabel(Candidate);
        addcandidate->setObjectName("addcandidate");
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        addcandidate->setFont(font);
        addcandidate->setStyleSheet(QString::fromUtf8("color:black;"));

        horizontalLayout->addWidget(addcandidate);

        back = new QPushButton(Candidate);
        back->setObjectName("back");
        back->setMaximumSize(QSize(120, 30));
        back->setStyleSheet(QString::fromUtf8("background-color: rgb(26, 62, 140);\n"
"    color: white;\n"
"    border: none;\n"
"    border-radius: 6px;\n"
"    font-size: 14px;\n"
"    font-weight: 600;\n"
"   "));

        horizontalLayout->addWidget(back);


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
        fullname = new QLabel(Candidate);
        fullname->setObjectName("fullname");
        fullname->setMaximumSize(QSize(292, 30));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        fullname->setFont(font1);
        fullname->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        fullname->setMargin(8);

        horizontalLayout_2->addWidget(fullname);

        nameField = new QLineEdit(Candidate);
        nameField->setObjectName("nameField");
        nameField->setMaximumSize(QSize(464, 16777215));
        nameField->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_2->addWidget(nameField);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_3 = new QLabel(Candidate);
        label_3->setObjectName("label_3");
        label_3->setFont(font1);

        horizontalLayout_3->addWidget(label_3);

        partyDropDown = new QComboBox(Candidate);
        partyDropDown->addItem(QString());
        partyDropDown->setObjectName("partyDropDown");
        partyDropDown->setMaximumSize(QSize(30, 30));

        horizontalLayout_3->addWidget(partyDropDown);


        verticalLayout->addLayout(horizontalLayout_3);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        ageField = new QSpinBox(Candidate);
        ageField->setObjectName("ageField");

        gridLayout->addWidget(ageField, 0, 2, 1, 1);

        gender = new QLabel(Candidate);
        gender->setObjectName("gender");

        gridLayout->addWidget(gender, 0, 1, 1, 1);

        AGE_NO = new QComboBox(Candidate);
        AGE_NO->addItem(QString());
        AGE_NO->addItem(QString());
        AGE_NO->addItem(QString());
        AGE_NO->setObjectName("AGE_NO");
        AGE_NO->setMaximumSize(QSize(30, 30));

        gridLayout->addWidget(AGE_NO, 0, 4, 1, 1);

        pictureLabel = new QLabel(Candidate);
        pictureLabel->setObjectName("pictureLabel");
        pictureLabel->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignTop);

        gridLayout->addWidget(pictureLabel, 1, 1, 1, 2);

        gender_name = new QLabel(Candidate);
        gender_name->setObjectName("gender_name");

        gridLayout->addWidget(gender_name, 0, 3, 1, 1);

        pushButton = new QPushButton(Candidate);
        pushButton->setObjectName("pushButton");

        gridLayout->addWidget(pushButton, 2, 1, 1, 4);


        verticalLayout->addLayout(gridLayout);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        BIO = new QLabel(Candidate);
        BIO->setObjectName("BIO");
        BIO->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignTop);

        horizontalLayout_6->addWidget(BIO);

        bioFiled = new QTextEdit(Candidate);
        bioFiled->setObjectName("bioFiled");

        horizontalLayout_6->addWidget(bioFiled);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        save = new QPushButton(Candidate);
        save->setObjectName("save");
        save->setStyleSheet(QString::fromUtf8("background-color: rgb(26, 62, 140);\n"
"    color: white;\n"
"    border: none;\n"
"    border-radius: 6px;\n"
"    font-size: 14px;\n"
"    font-weight: 600;\n"
"    padding:5px;\n"
"   "));

        horizontalLayout_7->addWidget(save);

        cancel = new QPushButton(Candidate);
        cancel->setObjectName("cancel");
        cancel->setStyleSheet(QString::fromUtf8("background-color: rgb(26, 62, 140);\n"
"    color: white;\n"
"    border: none;\n"
"    border-radius: 6px;\n"
"    font-size: 14px;\n"
"    font-weight: 600;\n"
"    padding:5px\n"
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
        back->setText(QCoreApplication::translate("Candidate", "<-Back", nullptr));
        fullname->setText(QCoreApplication::translate("Candidate", "FullName:", nullptr));
        nameField->setPlaceholderText(QCoreApplication::translate("Candidate", "Enter your name", nullptr));
        label_3->setText(QCoreApplication::translate("Candidate", "Parties:", nullptr));
        partyDropDown->setItemText(0, QCoreApplication::translate("Candidate", "<", nullptr));

        gender->setText(QCoreApplication::translate("Candidate", "AGE:", nullptr));
        AGE_NO->setItemText(0, QCoreApplication::translate("Candidate", "MALE", nullptr));
        AGE_NO->setItemText(1, QCoreApplication::translate("Candidate", "FEMALE", nullptr));
        AGE_NO->setItemText(2, QCoreApplication::translate("Candidate", "OTHER", nullptr));

        pictureLabel->setText(QCoreApplication::translate("Candidate", "add candidate picture", nullptr));
        gender_name->setText(QCoreApplication::translate("Candidate", "Gender:", nullptr));
        pushButton->setText(QCoreApplication::translate("Candidate", "add picture", nullptr));
        BIO->setText(QCoreApplication::translate("Candidate", "BIO:", nullptr));
        save->setText(QCoreApplication::translate("Candidate", "Save", nullptr));
        cancel->setText(QCoreApplication::translate("Candidate", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Candidate: public Ui_Candidate {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_CANDIDATE_H

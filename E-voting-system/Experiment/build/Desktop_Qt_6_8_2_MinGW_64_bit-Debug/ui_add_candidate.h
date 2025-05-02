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
    QLineEdit *name_eidt;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QComboBox *comboBox;
    QHBoxLayout *horizontalLayout_4;
    QLabel *gender;
    QSpinBox *age;
    QLabel *gender_name;
    QComboBox *AGE_NO;
    QHBoxLayout *horizontalLayout_5;
    QLabel *Constituency;
    QTextEdit *multi_lines;
    QHBoxLayout *horizontalLayout_6;
    QLabel *BIO;
    QTextEdit *multi_lines2;
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

        name_eidt = new QLineEdit(Candidate);
        name_eidt->setObjectName("name_eidt");
        name_eidt->setMaximumSize(QSize(464, 16777215));
        name_eidt->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_2->addWidget(name_eidt);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_3 = new QLabel(Candidate);
        label_3->setObjectName("label_3");
        label_3->setFont(font1);

        horizontalLayout_3->addWidget(label_3);

        comboBox = new QComboBox(Candidate);
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setMaximumSize(QSize(30, 30));

        horizontalLayout_3->addWidget(comboBox);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        gender = new QLabel(Candidate);
        gender->setObjectName("gender");

        horizontalLayout_4->addWidget(gender);

        age = new QSpinBox(Candidate);
        age->setObjectName("age");

        horizontalLayout_4->addWidget(age);

        gender_name = new QLabel(Candidate);
        gender_name->setObjectName("gender_name");

        horizontalLayout_4->addWidget(gender_name);

        AGE_NO = new QComboBox(Candidate);
        AGE_NO->addItem(QString());
        AGE_NO->addItem(QString());
        AGE_NO->addItem(QString());
        AGE_NO->setObjectName("AGE_NO");
        AGE_NO->setMaximumSize(QSize(30, 30));

        horizontalLayout_4->addWidget(AGE_NO);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        Constituency = new QLabel(Candidate);
        Constituency->setObjectName("Constituency");
        Constituency->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignTop);

        horizontalLayout_5->addWidget(Constituency);

        multi_lines = new QTextEdit(Candidate);
        multi_lines->setObjectName("multi_lines");

        horizontalLayout_5->addWidget(multi_lines);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        BIO = new QLabel(Candidate);
        BIO->setObjectName("BIO");
        BIO->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignTop);

        horizontalLayout_6->addWidget(BIO);

        multi_lines2 = new QTextEdit(Candidate);
        multi_lines2->setObjectName("multi_lines2");

        horizontalLayout_6->addWidget(multi_lines2);


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
        name_eidt->setPlaceholderText(QCoreApplication::translate("Candidate", "Enter your name", nullptr));
        label_3->setText(QCoreApplication::translate("Candidate", "Parties:", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("Candidate", "<", nullptr));

        gender->setText(QCoreApplication::translate("Candidate", "AGE:", nullptr));
        gender_name->setText(QCoreApplication::translate("Candidate", "Gender:", nullptr));
        AGE_NO->setItemText(0, QCoreApplication::translate("Candidate", "MALE", nullptr));
        AGE_NO->setItemText(1, QCoreApplication::translate("Candidate", "FEMALE", nullptr));
        AGE_NO->setItemText(2, QCoreApplication::translate("Candidate", "OTHER", nullptr));

        Constituency->setText(QCoreApplication::translate("Candidate", "Constituency:", nullptr));
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

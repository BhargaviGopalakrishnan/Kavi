#include <QLabel>
#include <QLineEdit>
#include <QFormLayout>
#include "qtcontactform.h"



QtContactForm::QtContactForm(QWidget *parent) : 
        QFormLayout(parent), firstNameField(new QLineEdit()),
        lastNameField(new QLineEdit()),
        addressField(new QLineEdit()),
        phoneNumberField(new QLineEdit()),
        emailField(new QLineEdit())
{
    addRow("<font color='red'>*</font> <font color='green'>First Name</font> <font color='red'>*</font>", firstNameField);
    addRow("<font color='red'>*</font> <font color='green'> Last Name <font color='red'>*</font>", lastNameField);
    addRow("<font color='red'>*</font> <font color='green'> Address <font color='red'>*</font>", addressField);
    addRow("<font color='red'>*</font> <font color='green'> Phone Number <font color='red'>*</font>", phoneNumberField);
    addRow("<font color='red'>*</font> <font color='green'> Email <font color='red'>*</font>", emailField);
}

void QtContactForm::clear()
{
    firstNameField->setText("");
    lastNameField->setText("");
    addressField->setText("");
    phoneNumberField->setText("");
    emailField->setText("");
}

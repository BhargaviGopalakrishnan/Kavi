#include <QLabel>
#include <QLineEdit>
#include <QFormLayout>
#include "qtcontactform.h"



QtContactForm::QtContactForm(QWidget *parent) : 
        QFormLayout(parent), firstNameField(new QLineEdit()),
        lastNameField(new QLineEdit()),
        addressField(new QLineEdit()),
        phoneNumberField(new QLineEdit()),
        emailField(new QLineEdit()),
        bloodgroupField(new QLineEdit())
{
    addRow("<font color='red'>*</font> <font color='green'>First Name</font> <font color='red'>*</font>", firstNameField);
    firstNameField->setPlaceholderText("enter the first name");
    addRow("<font color='red'>*</font> <font color='green'> Last Name <font color='red'>*</font>", lastNameField);
    lastNameField->setPlaceholderText("enter the last name");
    addRow("<font color='red'>*</font> <font color='green'> Address <font color='red'>*</font>", addressField);
    addressField->setPlaceholderText("enter the addressfield");
    addRow("<font color='red'>*</font> <font color='green'> Phone Number <font color='red'>*</font>", phoneNumberField);
    phoneNumberField->setPlaceholderText("enter the phone number");
    addRow("<font color='red'>*</font> <font color='green'> Email <font color='red'>*</font>", emailField);
    emailField->setPlaceholderText("enter the email");
    addRow("<font color='red'>*</font> <font color='green'> bloodgroup <font color='red'>*</font>",bloodgroupField);
    bloodgroupField->setPlaceholderText("enter bloodgroup");
}

void QtContactForm::clear()
{
    firstNameField->setText("");
    lastNameField->setText("");
    addressField->setText("");
    phoneNumberField->setText("");
    emailField->setText("");
    bloodgroupField->setText("");

}

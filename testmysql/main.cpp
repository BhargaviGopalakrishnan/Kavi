#include <QApplication>
#include<QtGui>
#include<QTableView>
#include <QMessageBox>
#include <QWidget>
#include <QTableWidget>
#include <QtSql>



int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    QTableWidget* table=new QTableWidget();
    QTableWidgetItem * item = new QTableWidgetItem("D://plane.png");

    db.setHostName("localhost");
    db.setDatabaseName("student");
    db.setUserName("root");
   db.setPassword("admin");

    if (!db.open())
        {
         QMessageBox::critical(0, QObject::tr("Database Error"),
                  db.lastError().text());
        qDebug() <<"not connectesd";
        }

    else
        qDebug()<< "connecteds";

        QSqlQuery query("SELECT * FROM student");

        table = new QTableWidget();
        table->setWindowTitle("connect to mysql database example");



        table->setColumnCount(query.record().count());
        table->setRowCount(query.size());



       int index=0;
       while (query.next())
       {
        table->setItem(index,0,new QTableWidgetItem(query.value(0).toString()));
        table->setItem(index,1,new QTableWidgetItem(query.value(1).toString()));
        table->setItem(index,2,new QTableWidgetItem(query.value(2).toString()));
        index++;
       }

        table->show();

        table->setItem(0,0,new QTableWidgetItem("CELL 1"));
        table->setItem(0,1,new QTableWidgetItem("CELL 2"));
        table->setItem(0,2,new QTableWidgetItem("CELL 3"));


            table->item(0,0)->setBackgroundColor(Qt::red);
            table->item(0,1)->setBackgroundColor(Qt::green);
            table->item(0,2)->setBackgroundColor(Qt::blue);

                QPalette* palette = new QPalette();
                palette->setBrush(QPalette::Base,*(new QBrush(*(new QPixmap("D://gitKavi//Desert.jpg")))));
                table->setPalette(*palette);


                //  QBrush* brush = new QBrush();
                //  QPixmap pixmap("D://gitKavi//Tulips.jpg");
                //  brush->setTexture(pixmap);
               //   item->setBackground(*brush);

                  //  myTable->setItem(1,1,item);


                    QBrush* brush = new QBrush();
                     QPixmap pixmap("D://plane.png");
                     brush->setTexture(pixmap);

                     item->setBackground(*brush);


                    table->setItem(2,1,item);
                    table->show();


        return a.exec();
    }



#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/core/core.hpp"
#include "stdlib.h"
#include "iostream"
#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/imgproc/imgproc_c.h"
#include <fstream>
#include <string>
#include <cstdlib>
#include "opencv2/core/core.hpp"
#include <time.h>
#include <QKeyEvent>
#include <QKeySequence>


using namespace cv;
using namespace std;
#define SIZE 100
////////////////////function declare/////////////////
string get_name(int NumOfImag);
string rand_fileread();
void keyPressEvent(QKeyEvent* e);


/////////////////////////////////////////////////////
int flag = rand();
long double imag_index ;
int imag_number = 10;
string imag_name;
QString text01;
char line2[SIZE];
string str;
std::string imag_index1;
const QImage wel_img;
int temp = -1;
int overall_num = 0;
int right_answer = 0;
int wrong_answer = 0;
QString qoverall = "0";
QString qright = "0";

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_pushButton_clicked()
{
    QPixmap wel_img1;

    ui->label_ans->clear();
    ui->label_2->clear();
    //ui->overall_num->clear();
    QPixmap loading_imag("1.jpg");
    ui->label1->setPixmap(loading_imag);
    ui->label->adjustSize();
    //srand(time(NULL));
    srand( (unsigned)time(NULL));
//    int temp = -1;
    imag_index=((flag++)*rand()%rand()%imag_number)+1;

    while(imag_index == temp)
    {
        imag_index=((flag++)*rand()%rand()%imag_number)+1;
    }







//    imag_index=((flag++)*rand()%rand()%imag_number)+1;
    temp = imag_index;
    imag_index1=std::to_string(int(imag_index));

    cv::Mat mat = cv::imread(imag_index1+".jpg");
    cv::resize(mat, mat, cv::Size(360, 360));
    //cv::resize(mat, mat, cv::Size(360, 360), 0.5, 0.5, INTER_LINEAR );
    cv::cvtColor(mat, mat, CV_BGR2RGB);
    QImage input = QImage(
                (const uchar*)mat.data,
                mat.cols,
                mat.rows,
                QImage::Format_RGB888).rgbSwapped();

    ui->label1->setPixmap(QPixmap::fromImage(input));
    std::cout<<"imag_index"<<imag_index<<std::endl;


    //calculate the overall_answer_num!

    overall_num = overall_num +1;
    string overall = to_string(overall_num);
    qoverall = QString::fromStdString(overall);
    ui->label_3->setText("correct/overall try: "+qright+"/"+qoverall);


}

void MainWindow::on_pushButton_2_clicked()
{
    const QString text01 = ui->text02->displayText();

//    const QString text01=ui->text01->toPlainText();
    // or this if you on Windows :-)
    std::string current_text = text01.toLocal8Bit().constData();
    ui->text02->clear();
    if (current_text == rand_fileread())
    {
        ui->label_ans->setText("GOOD JOB!");
        right_answer = right_answer + 1;
        string right = to_string(right_answer);
        qright = QString::fromStdString(right);
        ui->label_3->setText("correct/overall: "+qright+"/"+qoverall);

        ui->pushButton->click();

    }else if (current_text!=rand_fileread())
    {
        ui->label_ans->setText("Please try again! QQ");
    }
}

string rand_fileread()
{
    int n =1;
    fstream fin;


    fin.open("name.txt",ios::in);
    if (!fin)
        cout<<"file open fail"<<endl;
    else
        cout<<"OK"<<endl;
    std::cout<<"fin"<<fin<<std::endl;

    std::cout<<"line2"<<line2<<std::endl;
    std::cout<<"imag_index"<<imag_index<<std::endl;




    while(fin.getline(line2,30,'\n'))
    {

        if (n==imag_index)
        {
            string line1(line2);
            str.assign(line1,3,25);
        }
        n=n+1;
    }

    std::cout<<"image_index!!!!!"<<imag_index<<std::endl;
    std::cout<<"n"<<n<<std::endl;
    std::cout<<"str"<<str<<std::endl;
    return str;
}


void MainWindow::on_pushButton_3_clicked()
{
    QString qstr = QString::fromStdString(rand_fileread());
    ui->label_2->setText(qstr);

}

void MainWindow::on_pushButton_4_clicked()
{
    ui->lcdNumber->display(100* (double) right_answer/(double) overall_num);
}


void MainWindow::keyPressEvent(QKeyEvent * e)
{
    if (e->key() == Qt::Key_Control)
    {
        cout<<"Control Key get!!"<<endl;
        ui->pushButton->click();
        e->accept();

    }else if(e->key() == Qt::Key_Return || e->key() == Qt::Key_Enter)
    {
        cout<<"Enter Key get!!"<<endl;
        ui->pushButton_2->click();
    }else if(e->key() == Qt::Key_Escape)
    {
        ui->pushButton_3->click();
    }
}


//void QTextEdit::keyPressEvent(QKeyEvent *event){
//    if(event->key()==Qt::Key_Enter){

//    }
//    else {
//       QTextEdit::keyPressEvent( event );
//    }
//}


//void QTextEdit::keyPressEvent(QKeyEvent *e)
//{
//    if (e->key() == Qt::Key_Enter)
//    {

//    }
//}

//void QTextEdit::keyPressEvent(QKeyEvent* e)
//{
//    if (e->key() == Qt::Key_Enter)
//    {

//    }


//}


/*
Project: REXLoader (Downloader), Source file: EMessageBox.h
Copyright (C) 2011  Sarvaritdinov R.

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef EMESSAGEBOX_H
#define EMESSAGEBOX_H

#include <QMessageBox>
#include <QTimer>
#include <QPushButton>

class EMessageBox : public QMessageBox
{
    Q_OBJECT
public:
    explicit EMessageBox(QWidget *parent = 0);

    void setDefaultButton(QPushButton *button);
    void setDefaultButton(StandardButton button);
    void setDefaultTimeout(int sec);

protected slots:
    void tickTimer();

signals:
    void btnSelect();

private:
    QTimer *timer;
    QPushButton *defBtn;
    QString btntext;
    int timeout;
};

#endif // EMESSAGEBOX_H
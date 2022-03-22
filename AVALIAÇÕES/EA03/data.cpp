#include <iostream>
#include "data.h"
using namespace std;

Data::Data() {
  if (this->dia < 0) {
    this->dia = (this->dia*-1);
  }
  if (this->mes < 0) {
    this->mes = (this->mes*-1);
  }
  if (this->ano < 0) {
    this->ano = (this->ano*-1);
  }
}

int Data::comparaData(Data d) {
  if ((this->ano == d.ano) && (this->mes == d.mes) &&(this->dia == d.dia)) {
    return 0;
  }
  else if (this->ano > d.ano) {
    return 1;
  }
  else if (this->ano < d.ano) {
    return -1;
  }
  else if (this->ano == d.ano) {
    if (this->mes > d.mes) {
      return 1;
    }
    else if (this->mes < d.mes) {
      return -1;
    }
    else if (this->mes == d.mes) {
      if (this->dia > d.dia) {
        return 1;
      }
      else if (this->dia < d.dia) {
        return -1;
      }
    }
  }
}

int Data::getDia() {
  return this->dia;
}

int Data::getMes() {
  return this->mes;
}

string Data::getMesExtenso() {
  string m;
  if (this->mes == 1) {
    m = "Janeiro";
  }
  if (this->mes == 2) {
    m = "Fevereiro";
  }
  if (this->mes == 3) {
    m = "Março";
  }
  if (this->mes == 4) {
    m = "Abril";
  }
  if (this->mes == 5) {
    m = "Maio";
  }
  if (this->mes == 6) {
    m = "Junho";
  }
  if (this->mes == 7) {
    m = "Julho";
  }
  if (this->mes == 8) {
    m = "Agosto";
  }
  if (this->mes == 9) {
    m = "Setembro";
  }
  if (this->mes == 10) {
    m = "Outubro";
  }
  if (this->mes == 11) {
    m = "Novembro";
  }
  if (this->mes == 12) {
    m = "Dezembro";
  }
  return m;
}

int Data::getAno() {
  return this->ano;
}

void Data::setDia(int dia) {
  this->dia = dia;
  if (dia < 0) {
    dia = (dia*-1);
    this->dia = dia;
  }
}

void Data::setMes(int mes) {
  this->mes = mes;
  if (mes < 0) {
    mes = (mes*-1);
    this->mes = mes;
  }
}

void Data::setAno(int ano) {
  this->ano = ano;
  if (ano < 0) {
    ano = (ano*-1);
    this->ano = ano;
  }
}

bool Data::isBissexto() {
  if (this->ano % 4 == 0) {
    if (this->ano % 100 != 0) {
      return true;
    }
  }
  else if (this->ano%400 == 0) {
    return true;
  }
  return false;
}

bool Data::validaData() {
  if ((this->mes>=1) && (this->mes<=12)) {
    if (this->isBissexto())  {
      if ((this->mes==2) && (this->dia<=29)){
        return true;
      }
    }
    else{
      if ((this->mes==2) && (this->dia<=28)){
        return true;
      }
    }
    if ((this->mes==1)||(this->mes==3)||(this->mes==5)||(this->mes==7)||(this->mes==8)||(this->mes==10)||(this->mes==12)){
      if (this->dia<=31){
        return true;
      }
    }
    if ((this->mes==4)||(this->mes==6)||(this->mes==9)||(this->mes==11)){
      if (this->dia<=30){
        return true;
      }
    }
  return false;
  }
}

void Data::exibeData() {
  cout << dia << " de " << getMesExtenso() << " de " << ano << endl;
}

ostream& operator<<(ostream& saida, Data& d) {
  saida << d.dia << "/" << d.mes << "/" << d.ano << endl;
  return saida;
}


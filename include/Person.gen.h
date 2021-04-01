#ifndef _DEPARTMENT_PERSON_H_
#define _DEPARTMENT_PERSON_H_

class Student;
class Head_employer;
class Contact_employer;
class Head_university;


class DEPARTMENT_EXPORT Person
{

   QX_REGISTER_FRIEND_CLASS(Person)

public:
       typedef std::shared_ptr<Student> type_Student;
       typedef std::shared_ptr<Head_employer> type_Head_employer;
       typedef std::shared_ptr<Head_university> type_Head_university;
       typedef std::shared_ptr<Contact_employer> type_Contact_employer;




protected:

   long m_Person;
   QString m_fistname;
   QString m_lastname;
   QString m_patronymic;
   QString m_phone_number;
   QString m_email;
   type_Student m_Student;
   type_Head_employer m_Head_employer;
   type_Head_university m_Head_university;
   type_Contact_employer m_Contact_employer;



public:

   Person();
   Person(const long & id);
   virtual ~Person();

   long getPerson_id() const;
   QString getfistname() const;
   QString getlastname() const;
   QString getpatronymic() const;
   QString getphone_number() const;
   QString getemail() const;
   type_Student getStudent() const;
   type_Head_employer getHead_employer() const;
   type_Head_university getHead_university() const;
   type_Contact_employer getContact_employer() const;




   void setPerson_id(const long & val);
   void setfistname(const QString & val);
   void setlastname(const QString & val);
   void setpatronymic(const QString & val);
   void setphone_number(const QString & val);
   void setemail(const QString & val);
   void setStudent(const type_Student & val);
   void setHead_employer(const type_Head_employer & val);
   void setHead_university(const type_Head_university & val);
   void setContact_employer(const type_Contact_employer & val);

   type_Student getStudent(bool bLoadFromDatabase, const QString & sAppendRelations = QString(), QSqlDatabase * pDatabase = NULL, QSqlError * pDaoError = NULL);
   type_Head_employer getHead_employer(bool bLoadFromDatabase, const QString & sAppendRelations = QString(), QSqlDatabase * pDatabase = NULL, QSqlError * pDaoError = NULL);
   type_Head_university getHead_university(bool bLoadFromDatabase, const QString & sAppendRelations = QString(), QSqlDatabase * pDatabase = NULL, QSqlError * pDaoError = NULL);
   type_Contact_employer getContact_employer(bool bLoadFromDatabase, const QString & sAppendRelations = QString(), QSqlDatabase * pDatabase = NULL, QSqlError * pDaoError = NULL);





public:

   static QString relation_Student(bool key = false) { Q_UNUSED(key); return "Student"; }
   static QString relation_Head_employer(bool key = false) { Q_UNUSED(key); return "Head_employer"; }
   static QString relation_Head_university(bool key = false) { Q_UNUSED(key); return "Head_university"; }
   static QString relation_Contact_employer(bool key = false) { Q_UNUSED(key); return "Contact_employer"; }




public:

   static QString column_Person(bool key = false) { Q_UNUSED(key); return "Person_id"; }
   static QString column_fistname(bool key = false) { Q_UNUSED(key); return "fistname"; }
   static QString column_lastname(bool key = false) { Q_UNUSED(key); return "lastname"; }
   static QString column_patronymic(bool key = false) { Q_UNUSED(key); return "patronymic"; }
   static QString column_phone_number(bool key = false) { Q_UNUSED(key); return "phone_number"; }
   static QString column_email(bool key = false) { Q_UNUSED(key); return "email"; }

public:

   static QString table_name(bool key = false) { return (key ? QString("Person") : QString("t_Person")); }

};

typedef std::shared_ptr<Person> Person_ptr;
typedef qx::QxCollection<long, Person_ptr> list_of_Person;
typedef std::shared_ptr<list_of_Person> list_of_Person_ptr;

QX_REGISTER_COMPLEX_CLASS_NAME_HPP_DEPARTMENT(Person, qx::trait::no_base_class_defined, 0, Person)
#include "../include/Head_university.gen.h"
#include "../include/Contact_employer.gen.h"
#include "../include/Student.gen.h"
#include "../include/Head_employer.gen.h"
#endif // _DEPARTMENT_PERSON_H_



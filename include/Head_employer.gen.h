#ifndef _DEPARTMENT_HEAD_EMPLOYER_H_
#define _DEPARTMENT_HEAD_EMPLOYER_H_

class Employer;
class Person;

class DEPARTMENT_EXPORT Head_employer
{

   QX_REGISTER_FRIEND_CLASS(Head_employer)

public:

   typedef std::shared_ptr<Employer> type_employer;
   typedef std::shared_ptr<Person> type_person_id;

protected:

   long m_Head_employer_id;
   type_employer m_employer;
   type_person_id m_person_id;

public:

   Head_employer();
   Head_employer(const long & id);
   virtual ~Head_employer();

   long getHead_employer_id() const;
   type_employer getemployer() const;
   type_person_id getperson_id() const;

   void setHead_employer_id(const long & val);
   void setemployer(const type_employer & val);
   void setperson_id(const type_person_id & val);

   type_employer getemployer(bool bLoadFromDatabase, const QString & sAppendRelations = QString(), QSqlDatabase * pDatabase = NULL, QSqlError * pDaoError = NULL);
   type_person_id getperson_id(bool bLoadFromDatabase, const QString & sAppendRelations = QString(), QSqlDatabase * pDatabase = NULL, QSqlError * pDaoError = NULL);

public:

   static QString relation_employer(bool key = false) { Q_UNUSED(key); return "employer"; }
   static QString relation_person_id(bool key = false) { Q_UNUSED(key); return "person_id"; }

public:

   static QString column_Head_employer_id(bool key = false) { Q_UNUSED(key); return "Head_employer_id"; }

public:

   static QString table_name(bool key = false) { return (key ? QString("Head_employer") : QString("t_Head_employer")); }

};

typedef std::shared_ptr<Head_employer> Head_employer_ptr;
typedef qx::QxCollection<long, Head_employer_ptr> list_of_Head_employer;
typedef std::shared_ptr<list_of_Head_employer> list_of_Head_employer_ptr;

QX_REGISTER_COMPLEX_CLASS_NAME_HPP_DEPARTMENT(Head_employer, qx::trait::no_base_class_defined, 0, Head_employer)

#include "../include/Employer.gen.h"
#include "../include/Person.gen.h"



#endif // _DEPARTMENT_HEAD_EMPLOYER_H_

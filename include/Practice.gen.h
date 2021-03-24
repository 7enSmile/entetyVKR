/************************************************************************************************
** File created by QxEntityEditor 1.2.6 (2021/03/24 12:12) : please, do NOT modify this file ! **
************************************************************************************************/

#ifndef _DEPARTMENT_PRACTICE_H_
#define _DEPARTMENT_PRACTICE_H_

class Employer;

class DEPARTMENT_EXPORT Practice
{

   QX_REGISTER_FRIEND_CLASS(Practice)

public:

   typedef qx::QxCollection<long, std::shared_ptr<Employer> > type_list_of_employers;

protected:

   long m_Practice_id;
   type_list_of_employers m_list_of_employers;

public:

   Practice();
   Practice(const long & id);
   virtual ~Practice();

   long getPractice_id() const;
   type_list_of_employers getlist_of_employers() const;
   type_list_of_employers & list_of_employers();
   const type_list_of_employers & list_of_employers() const;

   void setPractice_id(const long & val);

   void setlist_of_employers(const type_list_of_employers & val);

   type_list_of_employers getlist_of_employers(bool bLoadFromDatabase, const QString & sAppendRelations = QString(), QSqlDatabase * pDatabase = NULL, QSqlError * pDaoError = NULL);
   type_list_of_employers & list_of_employers(bool bLoadFromDatabase, const QString & sAppendRelations = QString(), QSqlDatabase * pDatabase = NULL, QSqlError * pDaoError = NULL);

public:

   static QString relation_list_of_employers(bool key = false) { Q_UNUSED(key); return "list_of_employers"; }

public:

   static QString column_Practice_id(bool key = false) { Q_UNUSED(key); return "Practice_id"; }
   static QString column_begin(bool key = false) { Q_UNUSED(key); return "begin"; }
   static QString column_end(bool key = false) { Q_UNUSED(key); return "end"; }

public:

   static QString table_name(bool key = false) { return (key ? QString("Practice") : QString("t_Practice")); }

};

typedef std::shared_ptr<Practice> Practice_ptr;
typedef qx::QxCollection<long, Practice_ptr> list_of_Practice;
typedef std::shared_ptr<list_of_Practice> list_of_Practice_ptr;

QX_REGISTER_COMPLEX_CLASS_NAME_HPP_DEPARTMENT(Practice, qx::trait::no_base_class_defined, 0, Practice)

#include "../include/Employer.gen.h"

#include "../custom/include/Practice.h"

#endif // _DEPARTMENT_PRACTICE_H_

#ifndef _DEPARTMENT_PRACTICE_RESULT_H_
#define _DEPARTMENT_PRACTICE_RESULT_H_

class Report;

class DEPARTMENT_EXPORT Practice_result
{

   QX_REGISTER_FRIEND_CLASS(Practice_result)

public:

   typedef qx::QxCollection<long, std::shared_ptr<Report> > type_list_of_reports;

protected:

   long m_practice_result_id;
   QString m_estimate_employer;
   QString m_estimate_university;
   type_list_of_reports m_list_of_reports;

public:

   Practice_result();
   Practice_result(const long & id);
   virtual ~Practice_result();

   long getpractice_result_id() const;
   QString getestimate_employer() const;
   QString getestimate_university() const;
   type_list_of_reports getlist_of_reports() const;
   type_list_of_reports & list_of_reports();
   const type_list_of_reports & list_of_reports() const;

   void setpractice_result_id(const long & val);
   void setestimate_employer(const QString & val);
   void setestimate_university(const QString & val);
   void setlist_of_reports(const type_list_of_reports & val);

   type_list_of_reports getlist_of_reports(bool bLoadFromDatabase, const QString & sAppendRelations = QString(), QSqlDatabase * pDatabase = NULL, QSqlError * pDaoError = NULL);
   type_list_of_reports & list_of_reports(bool bLoadFromDatabase, const QString & sAppendRelations = QString(), QSqlDatabase * pDatabase = NULL, QSqlError * pDaoError = NULL);

public:

   static QString relation_list_of_reports(bool key = false) { Q_UNUSED(key); return "list_of_reports"; }

public:

   static QString column_practice_result_id(bool key = false) { Q_UNUSED(key); return "practice_result_id"; }
   static QString column_estimate_employer(bool key = false) { Q_UNUSED(key); return "estimate_employer"; }
   static QString column_estimate_university(bool key = false) { Q_UNUSED(key); return "estimate_university"; }

public:

   static QString table_name(bool key = false) { return (key ? QString("Practice_result") : QString("t_practice_result")); }

};

typedef std::shared_ptr<Practice_result> Practice_result_ptr;
typedef qx::QxCollection<long, Practice_result_ptr> list_of_Practice_result;
typedef std::shared_ptr<list_of_Practice_result> list_of_Practice_result_ptr;

QX_REGISTER_COMPLEX_CLASS_NAME_HPP_DEPARTMENT(Practice_result, qx::trait::no_base_class_defined, 0, Practice_result)

#include "../include/Report.gen.h"



#endif // _DEPARTMENT_PRACTICE_RESULT_H_

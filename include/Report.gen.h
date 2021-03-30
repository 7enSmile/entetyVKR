#ifndef _DEPARTMENT_REPORT_H_
#define _DEPARTMENT_REPORT_H_

class Practice_result;
class Head_university;
class Head_employer;

class DEPARTMENT_EXPORT Report
{

   QX_REGISTER_FRIEND_CLASS(Report)

public:

   typedef std::shared_ptr<Practice_result> type_practice_result;
   typedef std::shared_ptr<Head_university> type_Head_university;
   typedef std::shared_ptr<Head_employer> type_Head_employer;

protected:

   long m_Report_id;
   QByteArray m_report;
   QString m_feedback_university;
   QString m_feedback_employer;
   type_practice_result m_practice_result;
   type_Head_university m_Head_university;
   type_Head_employer m_Head_employer;

public:

   Report();
   Report(const long & id);
   virtual ~Report();

   long getReport_id() const;
   QByteArray getreport() const;
   QString getfeedback_university() const;
   QString getfeedback_employer() const;
   type_practice_result getpractice_result() const;
   type_Head_university getHead_university() const;
   type_Head_employer getHead_employer() const;

   void setReport_id(const long & val);
   void setreport(const QByteArray & val);
   void setfeedback_university(const QString & val);
   void setfeedback_employer(const QString & val);
   void setpractice_result(const type_practice_result & val);
   void setHead_university(const type_Head_university & val);
   void setHead_employer(const type_Head_employer & val);

   type_practice_result getpractice_result(bool bLoadFromDatabase, const QString & sAppendRelations = QString(), QSqlDatabase * pDatabase = NULL, QSqlError * pDaoError = NULL);
   type_Head_university getHead_university(bool bLoadFromDatabase, const QString & sAppendRelations = QString(), QSqlDatabase * pDatabase = NULL, QSqlError * pDaoError = NULL);
   type_Head_employer getHead_employer(bool bLoadFromDatabase, const QString & sAppendRelations = QString(), QSqlDatabase * pDatabase = NULL, QSqlError * pDaoError = NULL);

public:

   static QString relation_practice_result(bool key = false) { Q_UNUSED(key); return "practice_result"; }
   static QString relation_Head_university(bool key = false) { return (key ? QString("Head_university") : QString("Head_university_id")); }
   static QString relation_Head_employer(bool key = false) { return (key ? QString("Head_employer") : QString("Head_employer_id")); }


public:

   static QString column_Report_id(bool key = false) { Q_UNUSED(key); return "Report_id"; }
   static QString column_report(bool key = false) { Q_UNUSED(key); return "report"; }
   static QString column_feedback_university(bool key = false) { Q_UNUSED(key); return "feedback_university"; }
   static QString column_feedback_employer(bool key = false) { Q_UNUSED(key); return "feedback_employer"; }

public:

   static QString table_name(bool key = false) { return (key ? QString("Report") : QString("t_Report")); }

};

typedef std::shared_ptr<Report> Report_ptr;
typedef qx::QxCollection<long, Report_ptr> list_of_Report;
typedef std::shared_ptr<list_of_Report> list_of_Report_ptr;

QX_REGISTER_COMPLEX_CLASS_NAME_HPP_DEPARTMENT(Report, qx::trait::no_base_class_defined, 0, Report)

#include "../include/Practice_result.gen.h"
#include "../include/Head_university.gen.h"
#include "../include/Head_employer.gen.h"


#endif // _DEPARTMENT_REPORT_H_

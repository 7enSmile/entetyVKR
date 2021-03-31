#ifndef _DEPARTMENT_REPORT_H_
#define _DEPARTMENT_REPORT_H_

class Practice_result;
class Head_university;
class Head_employer;
class Passing_practice;
class Student;

class DEPARTMENT_EXPORT Report
{

   QX_REGISTER_FRIEND_CLASS(Report)

public:

   typedef std::shared_ptr<Practice_result> PracticeResult_ptr;
   typedef std::shared_ptr<Head_university> HeadUniversity_ptr;
   typedef std::shared_ptr<Head_employer> HeadEmployer_ptr;
   typedef qx::QxCollection<long, std::shared_ptr<Passing_practice> > ListOfPassingPractice;
   typedef std::shared_ptr<Student> Student_ptr;

protected:

   long m_Report_id;
   QByteArray m_report;
   QString m_feedback_university;
   QString m_feedback_employer;
   PracticeResult_ptr m_practice_result;
   HeadUniversity_ptr m_head_university;
   HeadEmployer_ptr m_head_employer;
   ListOfPassingPractice m_list_of_passing_practice;
   Student_ptr m_student;


public:

   Report();
   Report(const long & id);
   virtual ~Report();

   long getReport_id() const;
   QByteArray getreport() const;
   QString getfeedback_university() const;
   QString getfeedback_employer() const;
   PracticeResult_ptr getpractice_result() const;
   HeadUniversity_ptr gethead_university() const;
   HeadEmployer_ptr gethead_employer() const;
   ListOfPassingPractice getlist_of_passing_practice() const;
   ListOfPassingPractice & list_of_passing_practice();
   const ListOfPassingPractice & list_of_passing_practice() const;
   Student_ptr getstudent() const;

   void setReport_id(const long & val);
   void setreport(const QByteArray & val);
   void setfeedback_university(const QString & val);
   void setfeedback_employer(const QString & val);
   void setpractice_result(const PracticeResult_ptr & val);
   void sethead_university(const HeadUniversity_ptr & val);
   void sethead_employer(const HeadEmployer_ptr & val);
   void setlist_of_passing_practice(const ListOfPassingPractice & val);
   void setstudent(const Student_ptr & val);

   PracticeResult_ptr getpractice_result(bool bLoadFromDatabase, const QString & sAppendRelations = QString(), QSqlDatabase * pDatabase = NULL, QSqlError * pDaoError = NULL);
   HeadUniversity_ptr gethead_university(bool bLoadFromDatabase, const QString & sAppendRelations = QString(), QSqlDatabase * pDatabase = NULL, QSqlError * pDaoError = NULL);
   HeadEmployer_ptr gethead_employer(bool bLoadFromDatabase, const QString & sAppendRelations = QString(), QSqlDatabase * pDatabase = NULL, QSqlError * pDaoError = NULL);
   ListOfPassingPractice getlist_of_passing_practice(bool bLoadFromDatabase, const QString & sAppendRelations = QString(), QSqlDatabase * pDatabase = NULL, QSqlError * pDaoError = NULL);
   ListOfPassingPractice & list_of_passing_practice(bool bLoadFromDatabase, const QString & sAppendRelations = QString(), QSqlDatabase * pDatabase = NULL, QSqlError * pDaoError = NULL);
   Student_ptr getstudent(bool bLoadFromDatabase, const QString & sAppendRelations = QString(), QSqlDatabase * pDatabase = NULL, QSqlError * pDaoError = NULL);

public:

   static QString relation_practice_result(bool key = false) { Q_UNUSED(key); return "practice_result"; }
   static QString relation_head_university(bool key = false) { return (key ? QString("head_university") : QString("head_university_id")); }
   static QString relation_head_employer(bool key = false) { return (key ? QString("head_employer") : QString("head_employer_id")); }
   static QString relation_list_of_passing_practice(bool key = false) { Q_UNUSED(key); return "list_of_passing_practice"; }
   static QString relation_Student(bool key = false) { Q_UNUSED(key); return "Student"; }


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
#include "../include/Passing_practice.gen.h"
#include "../include/Student.gen.h"
#include "../include/Practice_result.gen.h"
#include "../include/head_university.gen.h"
#include "../include/head_employer.gen.h"


#endif // _DEPARTMENT_REPORT_H_

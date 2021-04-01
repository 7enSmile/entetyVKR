/************************************************************************************************
** File created by QxEntityEditor 1.2.6 (2021/03/24 12:12) : please, do NOT modify this file ! **
************************************************************************************************/

#ifndef _DEPARTMENT_PRACTICE_H_
#define _DEPARTMENT_PRACTICE_H_

class Employer;
class PassingPractice;
class EducationalProgram;


class DEPARTMENT_EXPORT Practice
{

   QX_REGISTER_FRIEND_CLASS(Practice)

public:

   typedef qx::QxCollection<long, std::shared_ptr<Employer> > ListOfEmployer;
   typedef qx::QxCollection<long, std::shared_ptr<PassingPractice> > ListOfPassingPractice;
   typedef std::shared_ptr<EducationalProgram> EducationProgram_ptr;

protected:

   long m_Practice_id;
   ListOfEmployer m_list_of_employers;
   ListOfPassingPractice m_list_of_passing_practice;
   EducationProgram_ptr m_education_program;

public:

   Practice();
   Practice(const long & id);
   virtual ~Practice();

   long getPractice_id() const;
   ListOfEmployer getlist_of_employers() const;
   ListOfEmployer & list_of_employers();
   const ListOfEmployer & list_of_employers() const;
   ListOfPassingPractice getlist_of_passing_practice() const;
   ListOfPassingPractice & list_of_passing_practice();
   const ListOfPassingPractice & list_of_passing_practice() const;
   EducationProgram_ptr geteducation_program() const;

   void setpractice_id(const long & val);

   void setlist_of_employers(const ListOfEmployer & val);

   void setlist_of_passing_practice(const ListOfPassingPractice & val);

   void seteducation_program(const EducationProgram_ptr & val);

   ListOfEmployer getlist_of_employers(bool bLoadFromDatabase, const QString & sAppendRelations = QString(), QSqlDatabase * pDatabase = NULL, QSqlError * pDaoError = NULL);
   ListOfEmployer & list_of_employers(bool bLoadFromDatabase, const QString & sAppendRelations = QString(), QSqlDatabase * pDatabase = NULL, QSqlError * pDaoError = NULL);
   ListOfPassingPractice getlist_of_passing_practice(bool bLoadFromDatabase, const QString & sAppendRelations = QString(), QSqlDatabase * pDatabase = NULL, QSqlError * pDaoError = NULL);
   ListOfPassingPractice & list_of_passing_practice(bool bLoadFromDatabase, const QString & sAppendRelations = QString(), QSqlDatabase * pDatabase = NULL, QSqlError * pDaoError = NULL);
   EducationProgram_ptr geteducation_program(bool bLoadFromDatabase, const QString & sAppendRelations = QString(), QSqlDatabase * pDatabase = NULL, QSqlError * pDaoError = NULL);


public:
   static QString relation_list_of_passing_practice(bool key = false) { Q_UNUSED(key); return "list_of_passing_practice"; }
   static QString relation_list_of_employers(bool key = false) { Q_UNUSED(key); return "list_of_employers"; }
   static QString relation_education_program(bool key = false) { return (key ? QString("education_program") : QString("Education_program_id")); }

public:

   static QString column_Practice_id(bool key = false) { Q_UNUSED(key); return "Practice_id"; }
   static QString column_begin(bool key = false) { Q_UNUSED(key); return "begin"; }
   static QString column_end(bool key = false) { Q_UNUSED(key); return "end"; }

public:


   static QString table_name(bool key = false) { return (key ? QString("Practice") : QString("t_Practice")); }

};

typedef std::shared_ptr<Practice> Practice_ptr;
typedef qx::QxCollection<long, Practice_ptr> ListOfPractice;
typedef std::shared_ptr<ListOfPractice> ListOfPractice_ptr;

QX_REGISTER_COMPLEX_CLASS_NAME_HPP_DEPARTMENT(Practice, qx::trait::no_base_class_defined, 0, Practice)

#include "../include/Passing_practice.h"

#include "../include/Employer.h"

#include "../include/Educational_program.h"

#include "../custom/include/Practice.h"

#endif // _DEPARTMENT_PRACTICE_H_

#include "../include/department_precompiled_header.gen.h"

#include "../include/Report.gen.h"
#include "../include/Practice_result.gen.h"

#include <QxOrm_Impl.h>

QX_REGISTER_COMPLEX_CLASS_NAME_CPP_DEPARTMENT(Report, Report)

namespace qx {

template <>
void register_class(QxClass<Report> & t)
{
   qx::IxDataMember * pData = NULL; Q_UNUSED(pData);
   qx::IxSqlRelation * pRelation = NULL; Q_UNUSED(pRelation);
   qx::IxFunction * pFct = NULL; Q_UNUSED(pFct);
   qx::IxValidator * pValidator = NULL; Q_UNUSED(pValidator);

   t.setName("t_Report");

   pData = t.id(& Report::m_Report_id, "Report_id", 0);

   pData = t.data(& Report::m_report, "report", 0, true, true);
   pData = t.data(& Report::m_feedback_university, "feedback_university", 0, true, true);
   pData = t.data(& Report::m_feedback_employer, "feedback_employer", 0, true, true);

   pRelation = t.relationManyToOne(& Report::m_practice_result, "practice_result", 0);
   pRelation = t.relationManyToOne(& Report::m_Head_university, "Head_university_id", 0);

   pRelation = t.relationManyToOne(& Report::m_Head_employer, "Head_employer_id", 0);
   pRelation = t.relationOneToMany(& Report::m_list_of_Passing_practice, "list_of_Passing_practice", "Report_id", 0);
   pRelation = t.relationManyToOne(& Report::m_Student, "Student_id", 0);


   qx::QxValidatorX<Report> * pAllValidator = t.getAllValidator(); Q_UNUSED(pAllValidator);
}

} // namespace qx

Report::Report() : m_Report_id(0) { ; }

Report::Report(const long & id) : m_Report_id(id) { ; }

Report::~Report() { ; }

long Report::getReport_id() const { return m_Report_id; }

QByteArray Report::getreport() const { return m_report; }

QString Report::getfeedback_university() const { return m_feedback_university; }

QString Report::getfeedback_employer() const { return m_feedback_employer; }

Report::type_practice_result Report::getpractice_result() const { return m_practice_result; }

Report::type_Head_university Report::getHead_university() const { return m_Head_university; }

Report::type_Head_employer Report::getHead_employer() const { return m_Head_employer; }

Report::type_list_of_Passing_practice Report::getlist_of_Passing_practice() const { return m_list_of_Passing_practice; }

Report::type_list_of_Passing_practice & Report::list_of_Passing_practice() { return m_list_of_Passing_practice; }

const Report::type_list_of_Passing_practice & Report::list_of_Passing_practice() const { return m_list_of_Passing_practice; }

Report::type_Student Report::getStudent() const { return m_Student; }

void Report::setReport_id(const long & val) { m_Report_id = val; }

void Report::setreport(const QByteArray & val) { m_report = val; }

void Report::setfeedback_university(const QString & val) { m_feedback_university = val; }

void Report::setfeedback_employer(const QString & val) { m_feedback_employer = val; }

void Report::setpractice_result(const Report::type_practice_result & val) { m_practice_result = val; }

void Report::setHead_university(const Report::type_Head_university & val) { m_Head_university = val; }

void Report::setHead_employer(const Report::type_Head_employer & val) { m_Head_employer = val; }

void Report::setlist_of_Passing_practice(const Report::type_list_of_Passing_practice & val) { m_list_of_Passing_practice = val; }

void Report::setStudent(const Report::type_Student & val) { m_Student = val; }

Report::type_practice_result Report::getpractice_result(bool bLoadFromDatabase, const QString & sAppendRelations /* = QString() */, QSqlDatabase * pDatabase /* = NULL */, QSqlError * pDaoError /* = NULL */)
{
   if (pDaoError) { (* pDaoError) = QSqlError(); }
   if (! bLoadFromDatabase) { return getpractice_result(); }
   QString sRelation = "{Report_id} | practice_result";
   if (! sAppendRelations.isEmpty() && ! sAppendRelations.startsWith("->") && ! sAppendRelations.startsWith(">>")) { sRelation += "->" + sAppendRelations; }
   else if (! sAppendRelations.isEmpty()) { sRelation += sAppendRelations; }
   Report tmp;
   tmp.m_Report_id = this->m_Report_id;
   QSqlError daoError = qx::dao::fetch_by_id_with_relation(sRelation, tmp, pDatabase);
   if (! daoError.isValid()) { this->m_practice_result = tmp.m_practice_result; }
   if (pDaoError) { (* pDaoError) = daoError; }
   return m_practice_result;
}

Report::type_Head_university Report::getHead_university(bool bLoadFromDatabase, const QString & sAppendRelations /* = QString() */, QSqlDatabase * pDatabase /* = NULL */, QSqlError * pDaoError /* = NULL */)
{
   if (pDaoError) { (* pDaoError) = QSqlError(); }
   if (! bLoadFromDatabase) { return getHead_university(); }
   QString sRelation = "{Report_id} | Head_university";
   if (! sAppendRelations.isEmpty() && ! sAppendRelations.startsWith("->") && ! sAppendRelations.startsWith(">>")) { sRelation += "->" + sAppendRelations; }
   else if (! sAppendRelations.isEmpty()) { sRelation += sAppendRelations; }
   Report tmp;
   tmp.m_Report_id = this->m_Report_id;
   QSqlError daoError = qx::dao::fetch_by_id_with_relation(sRelation, tmp, pDatabase);
   if (! daoError.isValid()) { this->m_Head_university = tmp.m_Head_university; }
   if (pDaoError) { (* pDaoError) = daoError; }
   return m_Head_university;
}

Report::type_Head_employer Report::getHead_employer(bool bLoadFromDatabase, const QString & sAppendRelations /* = QString() */, QSqlDatabase * pDatabase /* = NULL */, QSqlError * pDaoError /* = NULL */)
{
   if (pDaoError) { (* pDaoError) = QSqlError(); }
   if (! bLoadFromDatabase) { return getHead_employer(); }
   QString sRelation = "{Report_id} | Head_employer";
   if (! sAppendRelations.isEmpty() && ! sAppendRelations.startsWith("->") && ! sAppendRelations.startsWith(">>")) { sRelation += "->" + sAppendRelations; }
   else if (! sAppendRelations.isEmpty()) { sRelation += sAppendRelations; }
   Report tmp;
   tmp.m_Report_id = this->m_Report_id;
   QSqlError daoError = qx::dao::fetch_by_id_with_relation(sRelation, tmp, pDatabase);
   if (! daoError.isValid()) { this->m_Head_employer = tmp.m_Head_employer; }
   if (pDaoError) { (* pDaoError) = daoError; }
   return m_Head_employer;
}

Report::type_list_of_Passing_practice Report::getlist_of_Passing_practice(bool bLoadFromDatabase, const QString & sAppendRelations /* = QString() */, QSqlDatabase * pDatabase /* = NULL */, QSqlError * pDaoError /* = NULL */)
{
   if (pDaoError) { (* pDaoError) = QSqlError(); }
   if (! bLoadFromDatabase) { return getlist_of_Passing_practice(); }
   QString sRelation = "{Report_id} | list_of_Passing_practice";
   if (! sAppendRelations.isEmpty() && ! sAppendRelations.startsWith("->") && ! sAppendRelations.startsWith(">>")) { sRelation += "->" + sAppendRelations; }
   else if (! sAppendRelations.isEmpty()) { sRelation += sAppendRelations; }
   Report tmp;
   tmp.m_Report_id = this->m_Report_id;
   QSqlError daoError = qx::dao::fetch_by_id_with_relation(sRelation, tmp, pDatabase);
   if (! daoError.isValid()) { this->m_list_of_Passing_practice = tmp.m_list_of_Passing_practice; }
   if (pDaoError) { (* pDaoError) = daoError; }
   return m_list_of_Passing_practice;
}

Report::type_list_of_Passing_practice & Report::list_of_Passing_practice(bool bLoadFromDatabase, const QString & sAppendRelations /* = QString() */, QSqlDatabase * pDatabase /* = NULL */, QSqlError * pDaoError /* = NULL */)
{
   if (pDaoError) { (* pDaoError) = QSqlError(); }
   if (! bLoadFromDatabase) { return list_of_Passing_practice(); }
   QString sRelation = "{Report_id} | list_of_Passing_practice";
   if (! sAppendRelations.isEmpty() && ! sAppendRelations.startsWith("->") && ! sAppendRelations.startsWith(">>")) { sRelation += "->" + sAppendRelations; }
   else if (! sAppendRelations.isEmpty()) { sRelation += sAppendRelations; }
   Report tmp;
   tmp.m_Report_id = this->m_Report_id;
   QSqlError daoError = qx::dao::fetch_by_id_with_relation(sRelation, tmp, pDatabase);
   if (! daoError.isValid()) { this->m_list_of_Passing_practice = tmp.m_list_of_Passing_practice; }
   if (pDaoError) { (* pDaoError) = daoError; }
   return m_list_of_Passing_practice;
}

Report::type_Student Report::getStudent(bool bLoadFromDatabase, const QString & sAppendRelations /* = QString() */, QSqlDatabase * pDatabase /* = NULL */, QSqlError * pDaoError /* = NULL */)
{
   if (pDaoError) { (* pDaoError) = QSqlError(); }
   if (! bLoadFromDatabase) { return getStudent(); }
   QString sRelation = "{Report_id} | Student";
   if (! sAppendRelations.isEmpty() && ! sAppendRelations.startsWith("->") && ! sAppendRelations.startsWith(">>")) { sRelation += "->" + sAppendRelations; }
   else if (! sAppendRelations.isEmpty()) { sRelation += sAppendRelations; }
   Report tmp;
   tmp.m_Report_id = this->m_Report_id;
   QSqlError daoError = qx::dao::fetch_by_id_with_relation(sRelation, tmp, pDatabase);
   if (! daoError.isValid()) { this->m_Student = tmp.m_Student; }
   if (pDaoError) { (* pDaoError) = daoError; }
   return m_Student;
}

#include "../include/department_precompiled_header.gen.h"

#include "../include/Passing_practice.gen.h"
#include "../include/Practice.gen.h"
#include "../include/Student.gen.h"
#include "../include/Head_employer.gen.h"
#include "../include/Head_university.gen.h"

#include <QxOrm_Impl.h>

QX_REGISTER_COMPLEX_CLASS_NAME_CPP_DEPARTMENT(Passing_practice, Passing_practice)

namespace qx {

template <>
void register_class(QxClass<Passing_practice> & t)
{
   qx::IxDataMember * pData = NULL; Q_UNUSED(pData);
   qx::IxSqlRelation * pRelation = NULL; Q_UNUSED(pRelation);
   qx::IxFunction * pFct = NULL; Q_UNUSED(pFct);
   qx::IxValidator * pValidator = NULL; Q_UNUSED(pValidator);

   t.setName("t_Passing_practice");

   pData = t.id(& Passing_practice::m_Passing_practice_id, "Passing_practice_id", 0);

   pData = t.data(& Passing_practice::m_beginning, "beginning", 0, true, true);
   pData = t.data(& Passing_practice::m_ending, "ending", 0, true, true);

   pRelation = t.relationManyToOne(& Passing_practice::m_practice, "practice", 0);
   pRelation->getDataMember()->setName("practice_id");

   pRelation = t.relationManyToOne(& Passing_practice::m_Head_employer_id, "Head_employer_id", 0);
   pRelation->getDataMember()->setName("head_employer_id");
   pRelation = t.relationManyToOne(& Passing_practice::m_Head_university_id, "Head_university_id", 0);
   pRelation->getDataMember()->setName("head_university_id");
   pRelation = t.relationManyToOne(& Passing_practice::m_task, "task", 0);
   pRelation->getDataMember()->setName("Task_id");
   pRelation = t.relationManyToOne(& Passing_practice::m_employer, "employer", 0);
   pRelation->getDataMember()->setName("employer_id");
   pRelation = t.relationManyToOne(& Passing_practice::m_studen, "studen", 0);
   pRelation->getDataMember()->setName("Student_id");

   qx::QxValidatorX<Passing_practice> * pAllValidator = t.getAllValidator(); Q_UNUSED(pAllValidator);
}

} // namespace qx

Passing_practice::Passing_practice() : m_Passing_practice_id(0) { ; }

Passing_practice::Passing_practice(const long & id) : m_Passing_practice_id(id) { ; }

Passing_practice::~Passing_practice() { ; }

long Passing_practice::getPassing_practice_id() const { return m_Passing_practice_id; }

QDate Passing_practice::getbeginning() const { return m_beginning; }

QDate Passing_practice::getending() const { return m_ending; }

Passing_practice::type_practice Passing_practice::getpractice() const { return m_practice; }



Passing_practice::type_task Passing_practice::gettask() const { return m_task; }

Passing_practice::type_employer Passing_practice::getemployer() const { return m_employer; }

Passing_practice::type_studen Passing_practice::getstuden() const { return m_studen; }



Passing_practice::type_Head_employer Passing_practice::getHead_employer() const { return m_Head_employer_id; }

Passing_practice::type_Head_university Passing_practice::getHead_university() const { return m_Head_university_id; }

void Passing_practice::setPassing_practice(const long & val) { m_Passing_practice_id = val; }

void Passing_practice::setbeginning(const QDate & val) { m_beginning = val; }

void Passing_practice::setending(const QDate & val) { m_ending = val; }

void Passing_practice::setpractice(const Passing_practice::type_practice & val) { m_practice = val; }



void Passing_practice::setHead_employer(const Passing_practice::type_Head_employer & val) { m_Head_employer_id = val; }

void Passing_practice::setHead_university(const Passing_practice::type_Head_university & val) { m_Head_university_id = val; }

void Passing_practice::settask(const Passing_practice::type_task & val) { m_task = val; }

void Passing_practice::setemployer(const Passing_practice::type_employer & val) { m_employer = val; }

void Passing_practice::setstuden(const Passing_practice::type_studen & val) { m_studen = val; }

Passing_practice::type_practice Passing_practice::getpractice(bool bLoadFromDatabase, const QString & sAppendRelations /* = QString() */, QSqlDatabase * pDatabase /* = NULL */, QSqlError * pDaoError /* = NULL */)
{
   if (pDaoError) { (* pDaoError) = QSqlError(); }
   if (! bLoadFromDatabase) { return getpractice(); }
   QString sRelation = "{Passing_practice_id} | practice";
   if (! sAppendRelations.isEmpty() && ! sAppendRelations.startsWith("->") && ! sAppendRelations.startsWith(">>")) { sRelation += "->" + sAppendRelations; }
   else if (! sAppendRelations.isEmpty()) { sRelation += sAppendRelations; }
   Passing_practice tmp;
   tmp.m_Passing_practice_id = this->m_Passing_practice_id;
   QSqlError daoError = qx::dao::fetch_by_id_with_relation(sRelation, tmp, pDatabase);
   if (! daoError.isValid()) { this->m_practice = tmp.m_practice; }
   if (pDaoError) { (* pDaoError) = daoError; }
   return m_practice;
}



Passing_practice::type_Head_employer Passing_practice::getHead_employer(bool bLoadFromDatabase, const QString & sAppendRelations /* = QString() */, QSqlDatabase * pDatabase /* = NULL */, QSqlError * pDaoError /* = NULL */)
{
   if (pDaoError) { (* pDaoError) = QSqlError(); }
   if (! bLoadFromDatabase) { return getHead_employer(); }
   QString sRelation = "{Passing_practice_id} | Head_employer_id";
   if (! sAppendRelations.isEmpty() && ! sAppendRelations.startsWith("->") && ! sAppendRelations.startsWith(">>")) { sRelation += "->" + sAppendRelations; }
   else if (! sAppendRelations.isEmpty()) { sRelation += sAppendRelations; }
   Passing_practice tmp;
   tmp.m_Passing_practice_id = this->m_Passing_practice_id;
   QSqlError daoError = qx::dao::fetch_by_id_with_relation(sRelation, tmp, pDatabase);
   if (! daoError.isValid()) { this->m_Head_employer_id = tmp.m_Head_employer_id; }
   if (pDaoError) { (* pDaoError) = daoError; }
   return m_Head_employer_id;
}

Passing_practice::type_Head_university Passing_practice::getHead_university(bool bLoadFromDatabase, const QString & sAppendRelations /* = QString() */, QSqlDatabase * pDatabase /* = NULL */, QSqlError * pDaoError /* = NULL */)
{
   if (pDaoError) { (* pDaoError) = QSqlError(); }
   if (! bLoadFromDatabase) { return getHead_university(); }
   QString sRelation = "{Passing_practice_id} | Head_university_id";
   if (! sAppendRelations.isEmpty() && ! sAppendRelations.startsWith("->") && ! sAppendRelations.startsWith(">>")) { sRelation += "->" + sAppendRelations; }
   else if (! sAppendRelations.isEmpty()) { sRelation += sAppendRelations; }
   Passing_practice tmp;
   tmp.m_Passing_practice_id = this->m_Passing_practice_id;
   QSqlError daoError = qx::dao::fetch_by_id_with_relation(sRelation, tmp, pDatabase);
   if (! daoError.isValid()) { this->m_Head_university_id = tmp.m_Head_university_id; }
   if (pDaoError) { (* pDaoError) = daoError; }
   return m_Head_university_id;
}
Passing_practice::type_task Passing_practice::gettask(bool bLoadFromDatabase, const QString & sAppendRelations /* = QString() */, QSqlDatabase * pDatabase /* = NULL */, QSqlError * pDaoError /* = NULL */)
{
   if (pDaoError) { (* pDaoError) = QSqlError(); }
   if (! bLoadFromDatabase) { return gettask(); }
   QString sRelation = "{Passing_practice_id} | task";
   if (! sAppendRelations.isEmpty() && ! sAppendRelations.startsWith("->") && ! sAppendRelations.startsWith(">>")) { sRelation += "->" + sAppendRelations; }
   else if (! sAppendRelations.isEmpty()) { sRelation += sAppendRelations; }
   Passing_practice tmp;
   tmp.m_Passing_practice_id = this->m_Passing_practice_id;
   QSqlError daoError = qx::dao::fetch_by_id_with_relation(sRelation, tmp, pDatabase);
   if (! daoError.isValid()) { this->m_task = tmp.m_task; }
   if (pDaoError) { (* pDaoError) = daoError; }
   return m_task;
}

Passing_practice::type_employer Passing_practice::getemployer(bool bLoadFromDatabase, const QString & sAppendRelations /* = QString() */, QSqlDatabase * pDatabase /* = NULL */, QSqlError * pDaoError /* = NULL */)
{
   if (pDaoError) { (* pDaoError) = QSqlError(); }
   if (! bLoadFromDatabase) { return getemployer(); }
   QString sRelation = "{Passing_practice_id} | employer";
   if (! sAppendRelations.isEmpty() && ! sAppendRelations.startsWith("->") && ! sAppendRelations.startsWith(">>")) { sRelation += "->" + sAppendRelations; }
   else if (! sAppendRelations.isEmpty()) { sRelation += sAppendRelations; }
   Passing_practice tmp;
   tmp.m_Passing_practice_id = this->m_Passing_practice_id;
   QSqlError daoError = qx::dao::fetch_by_id_with_relation(sRelation, tmp, pDatabase);
   if (! daoError.isValid()) { this->m_employer = tmp.m_employer; }
   if (pDaoError) { (* pDaoError) = daoError; }
   return m_employer;
}

Passing_practice::type_studen Passing_practice::getstuden(bool bLoadFromDatabase, const QString & sAppendRelations /* = QString() */, QSqlDatabase * pDatabase /* = NULL */, QSqlError * pDaoError /* = NULL */)
{
   if (pDaoError) { (* pDaoError) = QSqlError(); }
   if (! bLoadFromDatabase) { return getstuden(); }
   QString sRelation = "{Passing_practice_id} | studen";
   if (! sAppendRelations.isEmpty() && ! sAppendRelations.startsWith("->") && ! sAppendRelations.startsWith(">>")) { sRelation += "->" + sAppendRelations; }
   else if (! sAppendRelations.isEmpty()) { sRelation += sAppendRelations; }
   Passing_practice tmp;
   tmp.m_Passing_practice_id = this->m_Passing_practice_id;
   QSqlError daoError = qx::dao::fetch_by_id_with_relation(sRelation, tmp, pDatabase);
   if (! daoError.isValid()) { this->m_studen = tmp.m_studen; }
   if (pDaoError) { (* pDaoError) = daoError; }
   return m_studen;
}


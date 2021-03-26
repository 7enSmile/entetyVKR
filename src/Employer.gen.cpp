/************************************************************************************************
** File created by QxEntityEditor 1.2.6 (2021/03/24 12:12) : please, do NOT modify this file ! **
************************************************************************************************/

#include "../include/department_precompiled_header.gen.h"

#include "../include/Employer.gen.h"
#include "../include/Activity.gen.h"
#include "../include/Collaboration.gen.h"
#include "../include/Task.gen.h"
#include "../include/Practice.gen.h"

#include <QxOrm_Impl.h>

QX_REGISTER_COMPLEX_CLASS_NAME_CPP_DEPARTMENT(Employer, Employer)

namespace qx {

template <>
void register_class(QxClass<Employer> & t)
{
   qx::IxDataMember * pData = NULL; Q_UNUSED(pData);
   qx::IxSqlRelation * pRelation = NULL; Q_UNUSED(pRelation);
   qx::IxFunction * pFct = NULL; Q_UNUSED(pFct);
   qx::IxValidator * pValidator = NULL; Q_UNUSED(pValidator);

   t.setName("t_Employer");

   pData = t.id(& Employer::m_Employer_id, "Employer_id", 0);

   pData = t.data(& Employer::m_name, "name", 0, true, true);

   pRelation = t.relationManyToMany(& Employer::m_list_of_Activity, "list_of_Activity", "t_qxee_Activity_Employer", "Employer_id", "Activity_id", 0);
   pRelation = t.relationManyToMany(& Employer::m_list_of_Collaboration, "list_of_Collaboration", "t_qxee_Collaboration_Employer", "Employer_id", "Collaboration_id", 0);
   pRelation = t.relationManyToMany(& Employer::m_list_of_Task, "list_of_Task", "t_qxee_Task_Employer", "Employer_id", "Task_id", 0);
   pRelation = t.relationManyToMany(& Employer::m_list_of_Practice, "list_of_Practice", "t_qxee_Practice_Employer", "Employer_id", "Practice_id", 0);
   pRelation = t.relationOneToMany(& Employer::m_list_of_Events, "list_of_Events", "employer", 0);
   pRelation = t.relationOneToMany(& Employer::m_list_of_Head_employer, "list_of_Head_employer", "employer", 0);
   pRelation = t.relationOneToMany(& Employer::m_list_of_Contact_employer, "list_of_Contact_employer", "employer", 0);
   pRelation = t.relationOneToMany(& Employer::m_list_of_passing_practice, "list_of_passing_practice", "employer", 0);

   qx::QxValidatorX<Employer> * pAllValidator = t.getAllValidator(); Q_UNUSED(pAllValidator);
}

} // namespace qx

Employer::Employer() : m_Employer_id(0) { ; }

Employer::Employer(const long & id) : m_Employer_id(id) { ; }

Employer::~Employer() { ; }

long Employer::getEmployer_id() const { return m_Employer_id; }

QString Employer::getname() const { return m_name; }

Employer::type_list_of_Activity Employer::getlist_of_Activity() const { return m_list_of_Activity; }

Employer::type_list_of_Activity & Employer::list_of_Activity() { return m_list_of_Activity; }

const Employer::type_list_of_Activity & Employer::list_of_Activity() const { return m_list_of_Activity; }

Employer::type_list_of_Collaboration Employer::getlist_of_Collaboration() const { return m_list_of_Collaboration; }

Employer::type_list_of_Collaboration & Employer::list_of_Collaboration() { return m_list_of_Collaboration; }

const Employer::type_list_of_Collaboration & Employer::list_of_Collaboration() const { return m_list_of_Collaboration; }

Employer::type_list_of_Task Employer::getlist_of_Task() const { return m_list_of_Task; }

Employer::type_list_of_Task & Employer::list_of_Task() { return m_list_of_Task; }

const Employer::type_list_of_Task & Employer::list_of_Task() const { return m_list_of_Task; }

Employer::type_list_of_Practice Employer::getlist_of_Practice() const { return m_list_of_Practice; }

Employer::type_list_of_Practice & Employer::list_of_Practice() { return m_list_of_Practice; }

const Employer::type_list_of_Practice & Employer::list_of_Practice() const { return m_list_of_Practice; }

Employer::type_list_of_Head_employer Employer::getlist_of_Head_employer() const { return m_list_of_Head_employer; }

Employer::type_list_of_Head_employer & Employer::list_of_Head_employer() { return m_list_of_Head_employer; }

const Employer::type_list_of_Head_employer & Employer::list_of_Head_employer() const { return m_list_of_Head_employer; }

Employer::type_list_of_Contact_employer Employer::getlist_of_Contact_employer() const { return m_list_of_Contact_employer; }

Employer::type_list_of_Contact_employer & Employer::list_of_Contact_employer() { return m_list_of_Contact_employer; }

const Employer::type_list_of_Contact_employer & Employer::list_of_Contact_employer() const { return m_list_of_Contact_employer; }

Employer::type_list_of_passing_practice Employer::getlist_of_passing_practice() const { return m_list_of_passing_practice; }

Employer::type_list_of_passing_practice & Employer::list_of_passing_practice() { return m_list_of_passing_practice; }

const Employer::type_list_of_passing_practice & Employer::list_of_passing_practice() const { return m_list_of_passing_practice; }

void Employer::setEmployer_id(const long & val) { m_Employer_id = val; }

void Employer::setname(const QString & val) { m_name = val; }

void Employer::setlist_of_Activity(const Employer::type_list_of_Activity & val) { m_list_of_Activity = val; }

void Employer::setlist_of_Collaboration(const Employer::type_list_of_Collaboration & val) { m_list_of_Collaboration = val; }

void Employer::setlist_of_Task(const Employer::type_list_of_Task & val) { m_list_of_Task = val; }

void Employer::setlist_of_Practice(const Employer::type_list_of_Practice & val) { m_list_of_Practice = val; }

void Employer::setlist_of_Head_employer(const Employer::type_list_of_Head_employer & val) { m_list_of_Head_employer = val; }

void Employer::setlist_of_Contact_employer(const Employer::type_list_of_Contact_employer & val) { m_list_of_Contact_employer = val; }

void Employer::setlist_of_passing_practice(const Employer::type_list_of_passing_practice & val) { m_list_of_passing_practice = val; }

Employer::type_list_of_Events Employer::getlist_of_Events() const { return m_list_of_Events; }

Employer::type_list_of_Events & Employer::list_of_Events() { return m_list_of_Events; }

const Employer::type_list_of_Events & Employer::list_of_Events() const { return m_list_of_Events; }


Employer::type_list_of_Activity Employer::getlist_of_Activity(bool bLoadFromDatabase, const QString & sAppendRelations /* = QString() */, QSqlDatabase * pDatabase /* = NULL */, QSqlError * pDaoError /* = NULL */)

{
   if (pDaoError) { (* pDaoError) = QSqlError(); }
   if (! bLoadFromDatabase) { return getlist_of_Activity(); }
   QString sRelation = "{Employer_id} | list_of_Activity";
   if (! sAppendRelations.isEmpty() && ! sAppendRelations.startsWith("->") && ! sAppendRelations.startsWith(">>")) { sRelation += "->" + sAppendRelations; }
   else if (! sAppendRelations.isEmpty()) { sRelation += sAppendRelations; }
   Employer tmp;
   tmp.m_Employer_id = this->m_Employer_id;
   QSqlError daoError = qx::dao::fetch_by_id_with_relation(sRelation, tmp, pDatabase);
   if (! daoError.isValid()) { this->m_list_of_Activity = tmp.m_list_of_Activity; }
   if (pDaoError) { (* pDaoError) = daoError; }
   return m_list_of_Activity;
}

Employer::type_list_of_Activity & Employer::list_of_Activity(bool bLoadFromDatabase, const QString & sAppendRelations /* = QString() */, QSqlDatabase * pDatabase /* = NULL */, QSqlError * pDaoError /* = NULL */)
{
   if (pDaoError) { (* pDaoError) = QSqlError(); }
   if (! bLoadFromDatabase) { return list_of_Activity(); }
   QString sRelation = "{Employer_id} | list_of_Activity";
   if (! sAppendRelations.isEmpty() && ! sAppendRelations.startsWith("->") && ! sAppendRelations.startsWith(">>")) { sRelation += "->" + sAppendRelations; }
   else if (! sAppendRelations.isEmpty()) { sRelation += sAppendRelations; }
   Employer tmp;
   tmp.m_Employer_id = this->m_Employer_id;
   QSqlError daoError = qx::dao::fetch_by_id_with_relation(sRelation, tmp, pDatabase);
   if (! daoError.isValid()) { this->m_list_of_Activity = tmp.m_list_of_Activity; }
   if (pDaoError) { (* pDaoError) = daoError; }
   return m_list_of_Activity;
}

Employer::type_list_of_Collaboration Employer::getlist_of_Collaboration(bool bLoadFromDatabase, const QString & sAppendRelations /* = QString() */, QSqlDatabase * pDatabase /* = NULL */, QSqlError * pDaoError /* = NULL */)
{
   if (pDaoError) { (* pDaoError) = QSqlError(); }
   if (! bLoadFromDatabase) { return getlist_of_Collaboration(); }
   QString sRelation = "{Employer_id} | list_of_Collaboration";
   if (! sAppendRelations.isEmpty() && ! sAppendRelations.startsWith("->") && ! sAppendRelations.startsWith(">>")) { sRelation += "->" + sAppendRelations; }
   else if (! sAppendRelations.isEmpty()) { sRelation += sAppendRelations; }
   Employer tmp;
   tmp.m_Employer_id = this->m_Employer_id;
   QSqlError daoError = qx::dao::fetch_by_id_with_relation(sRelation, tmp, pDatabase);
   if (! daoError.isValid()) { this->m_list_of_Collaboration = tmp.m_list_of_Collaboration; }
   if (pDaoError) { (* pDaoError) = daoError; }
   return m_list_of_Collaboration;
}

Employer::type_list_of_Collaboration & Employer::list_of_Collaboration(bool bLoadFromDatabase, const QString & sAppendRelations /* = QString() */, QSqlDatabase * pDatabase /* = NULL */, QSqlError * pDaoError /* = NULL */)
{
   if (pDaoError) { (* pDaoError) = QSqlError(); }
   if (! bLoadFromDatabase) { return list_of_Collaboration(); }
   QString sRelation = "{Employer_id} | list_of_Collaboration";
   if (! sAppendRelations.isEmpty() && ! sAppendRelations.startsWith("->") && ! sAppendRelations.startsWith(">>")) { sRelation += "->" + sAppendRelations; }
   else if (! sAppendRelations.isEmpty()) { sRelation += sAppendRelations; }
   Employer tmp;
   tmp.m_Employer_id = this->m_Employer_id;
   QSqlError daoError = qx::dao::fetch_by_id_with_relation(sRelation, tmp, pDatabase);
   if (! daoError.isValid()) { this->m_list_of_Collaboration = tmp.m_list_of_Collaboration; }
   if (pDaoError) { (* pDaoError) = daoError; }
   return m_list_of_Collaboration;
}

Employer::type_list_of_Task Employer::getlist_of_Task(bool bLoadFromDatabase, const QString & sAppendRelations /* = QString() */, QSqlDatabase * pDatabase /* = NULL */, QSqlError * pDaoError /* = NULL */)
{
   if (pDaoError) { (* pDaoError) = QSqlError(); }
   if (! bLoadFromDatabase) { return getlist_of_Task(); }
   QString sRelation = "{Employer_id} | list_of_Task";
   if (! sAppendRelations.isEmpty() && ! sAppendRelations.startsWith("->") && ! sAppendRelations.startsWith(">>")) { sRelation += "->" + sAppendRelations; }
   else if (! sAppendRelations.isEmpty()) { sRelation += sAppendRelations; }
   Employer tmp;
   tmp.m_Employer_id = this->m_Employer_id;
   QSqlError daoError = qx::dao::fetch_by_id_with_relation(sRelation, tmp, pDatabase);
   if (! daoError.isValid()) { this->m_list_of_Task = tmp.m_list_of_Task; }
   if (pDaoError) { (* pDaoError) = daoError; }
   return m_list_of_Task;
}

Employer::type_list_of_Task & Employer::list_of_Task(bool bLoadFromDatabase, const QString & sAppendRelations /* = QString() */, QSqlDatabase * pDatabase /* = NULL */, QSqlError * pDaoError /* = NULL */)
{
   if (pDaoError) { (* pDaoError) = QSqlError(); }
   if (! bLoadFromDatabase) { return list_of_Task(); }
   QString sRelation = "{Employer_id} | list_of_Task";
   if (! sAppendRelations.isEmpty() && ! sAppendRelations.startsWith("->") && ! sAppendRelations.startsWith(">>")) { sRelation += "->" + sAppendRelations; }
   else if (! sAppendRelations.isEmpty()) { sRelation += sAppendRelations; }
   Employer tmp;
   tmp.m_Employer_id = this->m_Employer_id;
   QSqlError daoError = qx::dao::fetch_by_id_with_relation(sRelation, tmp, pDatabase);
   if (! daoError.isValid()) { this->m_list_of_Task = tmp.m_list_of_Task; }
   if (pDaoError) { (* pDaoError) = daoError; }
   return m_list_of_Task;
}

Employer::type_list_of_Practice Employer::getlist_of_Practice(bool bLoadFromDatabase, const QString & sAppendRelations /* = QString() */, QSqlDatabase * pDatabase /* = NULL */, QSqlError * pDaoError /* = NULL */)
{
   if (pDaoError) { (* pDaoError) = QSqlError(); }
   if (! bLoadFromDatabase) { return getlist_of_Practice(); }
   QString sRelation = "{Employer_id} | list_of_Practice";
   if (! sAppendRelations.isEmpty() && ! sAppendRelations.startsWith("->") && ! sAppendRelations.startsWith(">>")) { sRelation += "->" + sAppendRelations; }
   else if (! sAppendRelations.isEmpty()) { sRelation += sAppendRelations; }
   Employer tmp;
   tmp.m_Employer_id = this->m_Employer_id;
   QSqlError daoError = qx::dao::fetch_by_id_with_relation(sRelation, tmp, pDatabase);
   if (! daoError.isValid()) { this->m_list_of_Practice = tmp.m_list_of_Practice; }
   if (pDaoError) { (* pDaoError) = daoError; }
   return m_list_of_Practice;
}

Employer::type_list_of_Practice & Employer::list_of_Practice(bool bLoadFromDatabase, const QString & sAppendRelations /* = QString() */, QSqlDatabase * pDatabase /* = NULL */, QSqlError * pDaoError /* = NULL */)
{
   if (pDaoError) { (* pDaoError) = QSqlError(); }
   if (! bLoadFromDatabase) { return list_of_Practice(); }
   QString sRelation = "{Employer_id} | list_of_Practice";
   if (! sAppendRelations.isEmpty() && ! sAppendRelations.startsWith("->") && ! sAppendRelations.startsWith(">>")) { sRelation += "->" + sAppendRelations; }
   else if (! sAppendRelations.isEmpty()) { sRelation += sAppendRelations; }
   Employer tmp;
   tmp.m_Employer_id = this->m_Employer_id;
   QSqlError daoError = qx::dao::fetch_by_id_with_relation(sRelation, tmp, pDatabase);
   if (! daoError.isValid()) { this->m_list_of_Practice = tmp.m_list_of_Practice; }
   if (pDaoError) { (* pDaoError) = daoError; }
   return m_list_of_Practice;
}
Employer::type_list_of_Events Employer::getlist_of_Events(bool bLoadFromDatabase, const QString & sAppendRelations /* = QString() */, QSqlDatabase * pDatabase /* = NULL */, QSqlError * pDaoError /* = NULL */)
{
   if (pDaoError) { (* pDaoError) = QSqlError(); }
   if (! bLoadFromDatabase) { return getlist_of_Events(); }
   QString sRelation = "{Employer_id} | list_of_Events";
   if (! sAppendRelations.isEmpty() && ! sAppendRelations.startsWith("->") && ! sAppendRelations.startsWith(">>")) { sRelation += "->" + sAppendRelations; }
   else if (! sAppendRelations.isEmpty()) { sRelation += sAppendRelations; }
   Employer tmp;
   tmp.m_Employer_id = this->m_Employer_id;
   QSqlError daoError = qx::dao::fetch_by_id_with_relation(sRelation, tmp, pDatabase);
   if (! daoError.isValid()) { this->m_list_of_Events = tmp.m_list_of_Events; }
   if (pDaoError) { (* pDaoError) = daoError; }
   return m_list_of_Events;
}

Employer::type_list_of_Events & Employer::list_of_Events(bool bLoadFromDatabase, const QString & sAppendRelations /* = QString() */, QSqlDatabase * pDatabase /* = NULL */, QSqlError * pDaoError /* = NULL */)
{
   if (pDaoError) { (* pDaoError) = QSqlError(); }
   if (! bLoadFromDatabase) { return list_of_Events(); }
   QString sRelation = "{Employer_id} | list_of_Events";
   if (! sAppendRelations.isEmpty() && ! sAppendRelations.startsWith("->") && ! sAppendRelations.startsWith(">>")) { sRelation += "->" + sAppendRelations; }
   else if (! sAppendRelations.isEmpty()) { sRelation += sAppendRelations; }
   Employer tmp;
   tmp.m_Employer_id = this->m_Employer_id;
   QSqlError daoError = qx::dao::fetch_by_id_with_relation(sRelation, tmp, pDatabase);
   if (! daoError.isValid()) { this->m_list_of_Events = tmp.m_list_of_Events; }
   if (pDaoError) { (* pDaoError) = daoError; }
   return m_list_of_Events;
}
Employer::type_list_of_Head_employer Employer::getlist_of_Head_employer(bool bLoadFromDatabase, const QString & sAppendRelations /* = QString() */, QSqlDatabase * pDatabase /* = NULL */, QSqlError * pDaoError /* = NULL */)
{
   if (pDaoError) { (* pDaoError) = QSqlError(); }
   if (! bLoadFromDatabase) { return getlist_of_Head_employer(); }
   QString sRelation = "{Employer_id} | list_of_Head_employer";
   if (! sAppendRelations.isEmpty() && ! sAppendRelations.startsWith("->") && ! sAppendRelations.startsWith(">>")) { sRelation += "->" + sAppendRelations; }
   else if (! sAppendRelations.isEmpty()) { sRelation += sAppendRelations; }
   Employer tmp;
   tmp.m_Employer_id = this->m_Employer_id;
   QSqlError daoError = qx::dao::fetch_by_id_with_relation(sRelation, tmp, pDatabase);
   if (! daoError.isValid()) { this->m_list_of_Head_employer = tmp.m_list_of_Head_employer; }
   if (pDaoError) { (* pDaoError) = daoError; }
   return m_list_of_Head_employer;
}

Employer::type_list_of_Head_employer & Employer::list_of_Head_employer(bool bLoadFromDatabase, const QString & sAppendRelations /* = QString() */, QSqlDatabase * pDatabase /* = NULL */, QSqlError * pDaoError /* = NULL */)
{
   if (pDaoError) { (* pDaoError) = QSqlError(); }
   if (! bLoadFromDatabase) { return list_of_Head_employer(); }
   QString sRelation = "{Employer_id} | list_of_Head_employer";
   if (! sAppendRelations.isEmpty() && ! sAppendRelations.startsWith("->") && ! sAppendRelations.startsWith(">>")) { sRelation += "->" + sAppendRelations; }
   else if (! sAppendRelations.isEmpty()) { sRelation += sAppendRelations; }
   Employer tmp;
   tmp.m_Employer_id = this->m_Employer_id;
   QSqlError daoError = qx::dao::fetch_by_id_with_relation(sRelation, tmp, pDatabase);
   if (! daoError.isValid()) { this->m_list_of_Head_employer = tmp.m_list_of_Head_employer; }
   if (pDaoError) { (* pDaoError) = daoError; }
   return m_list_of_Head_employer;
}
Employer::type_list_of_Contact_employer Employer::getlist_of_Contact_employer(bool bLoadFromDatabase, const QString & sAppendRelations /* = QString() */, QSqlDatabase * pDatabase /* = NULL */, QSqlError * pDaoError /* = NULL */)
{
   if (pDaoError) { (* pDaoError) = QSqlError(); }
   if (! bLoadFromDatabase) { return getlist_of_Contact_employer(); }
   QString sRelation = "{Employer_id} | list_of_Contact_employer";
   if (! sAppendRelations.isEmpty() && ! sAppendRelations.startsWith("->") && ! sAppendRelations.startsWith(">>")) { sRelation += "->" + sAppendRelations; }
   else if (! sAppendRelations.isEmpty()) { sRelation += sAppendRelations; }
   Employer tmp;
   tmp.m_Employer_id = this->m_Employer_id;
   QSqlError daoError = qx::dao::fetch_by_id_with_relation(sRelation, tmp, pDatabase);
   if (! daoError.isValid()) { this->m_list_of_Contact_employer = tmp.m_list_of_Contact_employer; }
   if (pDaoError) { (* pDaoError) = daoError; }
   return m_list_of_Contact_employer;
}

Employer::type_list_of_Contact_employer & Employer::list_of_Contact_employer(bool bLoadFromDatabase, const QString & sAppendRelations /* = QString() */, QSqlDatabase * pDatabase /* = NULL */, QSqlError * pDaoError /* = NULL */)
{
   if (pDaoError) { (* pDaoError) = QSqlError(); }
   if (! bLoadFromDatabase) { return list_of_Contact_employer(); }
   QString sRelation = "{Employer_id} | list_of_Contact_employer";
   if (! sAppendRelations.isEmpty() && ! sAppendRelations.startsWith("->") && ! sAppendRelations.startsWith(">>")) { sRelation += "->" + sAppendRelations; }
   else if (! sAppendRelations.isEmpty()) { sRelation += sAppendRelations; }
   Employer tmp;
   tmp.m_Employer_id = this->m_Employer_id;
   QSqlError daoError = qx::dao::fetch_by_id_with_relation(sRelation, tmp, pDatabase);
   if (! daoError.isValid()) { this->m_list_of_Contact_employer = tmp.m_list_of_Contact_employer; }
   if (pDaoError) { (* pDaoError) = daoError; }
   return m_list_of_Contact_employer;
}

Employer::type_list_of_passing_practice Employer::getlist_of_passing_practice(bool bLoadFromDatabase, const QString & sAppendRelations /* = QString() */, QSqlDatabase * pDatabase /* = NULL */, QSqlError * pDaoError /* = NULL */)
{
   if (pDaoError) { (* pDaoError) = QSqlError(); }
   if (! bLoadFromDatabase) { return getlist_of_passing_practice(); }
   QString sRelation = "{Employer_id} | list_of_passing_practice";
   if (! sAppendRelations.isEmpty() && ! sAppendRelations.startsWith("->") && ! sAppendRelations.startsWith(">>")) { sRelation += "->" + sAppendRelations; }
   else if (! sAppendRelations.isEmpty()) { sRelation += sAppendRelations; }
   Employer tmp;
   tmp.m_Employer_id = this->m_Employer_id;
   QSqlError daoError = qx::dao::fetch_by_id_with_relation(sRelation, tmp, pDatabase);
   if (! daoError.isValid()) { this->m_list_of_passing_practice = tmp.m_list_of_passing_practice; }
   if (pDaoError) { (* pDaoError) = daoError; }
   return m_list_of_passing_practice;
}

Employer::type_list_of_passing_practice & Employer::list_of_passing_practice(bool bLoadFromDatabase, const QString & sAppendRelations /* = QString() */, QSqlDatabase * pDatabase /* = NULL */, QSqlError * pDaoError /* = NULL */)
{
   if (pDaoError) { (* pDaoError) = QSqlError(); }
   if (! bLoadFromDatabase) { return list_of_passing_practice(); }
   QString sRelation = "{Employer_id} | list_of_passing_practice";
   if (! sAppendRelations.isEmpty() && ! sAppendRelations.startsWith("->") && ! sAppendRelations.startsWith(">>")) { sRelation += "->" + sAppendRelations; }
   else if (! sAppendRelations.isEmpty()) { sRelation += sAppendRelations; }
   Employer tmp;
   tmp.m_Employer_id = this->m_Employer_id;
   QSqlError daoError = qx::dao::fetch_by_id_with_relation(sRelation, tmp, pDatabase);
   if (! daoError.isValid()) { this->m_list_of_passing_practice = tmp.m_list_of_passing_practice; }
   if (pDaoError) { (* pDaoError) = daoError; }
   return m_list_of_passing_practice;
}



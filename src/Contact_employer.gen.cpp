#include "../include/department_precompiled_header.gen.h"

#include "../include/Contact_employer.gen.h"
#include "../include/Employer.gen.h"
#include "../include/Person.gen.h"

#include <QxOrm_Impl.h>

QX_REGISTER_COMPLEX_CLASS_NAME_CPP_DEPARTMENT(Contact_employer, Contact_employer)

namespace qx {

template <>
void register_class(QxClass<Contact_employer> & t)
{
   qx::IxDataMember * pData = NULL; Q_UNUSED(pData);
   qx::IxSqlRelation * pRelation = NULL; Q_UNUSED(pRelation);
   qx::IxFunction * pFct = NULL; Q_UNUSED(pFct);
   qx::IxValidator * pValidator = NULL; Q_UNUSED(pValidator);

   t.setName("t_Contact_employer");

   pData = t.id(& Contact_employer::m_Contact_employer_id, "Contact_employer_id", 0);

   pRelation = t.relationManyToOne(& Contact_employer::m_employer, "employer", 0);
   pRelation->getDataMember()->setName("employer_id");
   pRelation = t.relationManyToOne(& Contact_employer::m_person, "person", 0);
   pRelation->getDataMember()->setName("persone_id");

   qx::QxValidatorX<Contact_employer> * pAllValidator = t.getAllValidator(); Q_UNUSED(pAllValidator);
}

} // namespace qx

Contact_employer::Contact_employer() : m_Contact_employer_id(0) { ; }

Contact_employer::Contact_employer(const long & id) : m_Contact_employer_id(id) { ; }

Contact_employer::~Contact_employer() { ; }

long Contact_employer::getcontact_employer_id() const { return m_Contact_employer_id; }

Contact_employer::Employer_ptr Contact_employer::getemployer() const { return m_employer; }

Contact_employer::Personr_ptr Contact_employer::getperson() const { return m_person; }

void Contact_employer::setcontact_employer_id(const long & val) { m_Contact_employer_id = val; }

void Contact_employer::setemployer(const Contact_employer::Employer_ptr & val) { m_employer = val; }

void Contact_employer::setperson(const Contact_employer::Personr_ptr & val) { m_person = val; }

Contact_employer::Employer_ptr Contact_employer::getemployer(bool bLoadFromDatabase, const QString & sAppendRelations /* = QString() */, QSqlDatabase * pDatabase /* = NULL */, QSqlError * pDaoError /* = NULL */)
{
   if (pDaoError) { (* pDaoError) = QSqlError(); }
   if (! bLoadFromDatabase) { return getemployer(); }
   QString sRelation = "{Contact_employer_id} | employer";
   if (! sAppendRelations.isEmpty() && ! sAppendRelations.startsWith("->") && ! sAppendRelations.startsWith(">>")) { sRelation += "->" + sAppendRelations; }
   else if (! sAppendRelations.isEmpty()) { sRelation += sAppendRelations; }
   Contact_employer tmp;
   tmp.m_Contact_employer_id = this->m_Contact_employer_id;
   QSqlError daoError = qx::dao::fetch_by_id_with_relation(sRelation, tmp, pDatabase);
   if (! daoError.isValid()) { this->m_employer = tmp.m_employer; }
   if (pDaoError) { (* pDaoError) = daoError; }
   return m_employer;
}

Contact_employer::Personr_ptr Contact_employer::getperson(bool bLoadFromDatabase, const QString & sAppendRelations /* = QString() */, QSqlDatabase * pDatabase /* = NULL */, QSqlError * pDaoError /* = NULL */)
{
   if (pDaoError) { (* pDaoError) = QSqlError(); }
   if (! bLoadFromDatabase) { return getperson(); }
   QString sRelation = "{Contact_employer_id} | person";
   if (! sAppendRelations.isEmpty() && ! sAppendRelations.startsWith("->") && ! sAppendRelations.startsWith(">>")) { sRelation += "->" + sAppendRelations; }
   else if (! sAppendRelations.isEmpty()) { sRelation += sAppendRelations; }
   Contact_employer tmp;
   tmp.m_Contact_employer_id = this->m_Contact_employer_id;
   QSqlError daoError = qx::dao::fetch_by_id_with_relation(sRelation, tmp, pDatabase);
   if (! daoError.isValid()) { this->m_person = tmp.m_person; }
   if (pDaoError) { (* pDaoError) = daoError; }
   return m_person;
}

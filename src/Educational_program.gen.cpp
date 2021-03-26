#include "../include/department_precompiled_header.gen.h"

#include "../include/Educational_program.gen.h"
#include "../include/Result_education.gen.h"
#include "../include/Discipline.gen.h"

#include <QxOrm_Impl.h>

QX_REGISTER_COMPLEX_CLASS_NAME_CPP_DEPARTMENT(Educational_program, Educational_program)

namespace qx {

template <>
void register_class(QxClass<Educational_program> & t)
{
   qx::IxDataMember * pData = NULL; Q_UNUSED(pData);
   qx::IxSqlRelation * pRelation = NULL; Q_UNUSED(pRelation);
   qx::IxFunction * pFct = NULL; Q_UNUSED(pFct);
   qx::IxValidator * pValidator = NULL; Q_UNUSED(pValidator);

   t.setName("t_educational_program");

   pData = t.id(& Educational_program::m_educational_program_id, "educational_program_id", 0);

   pData = t.data(& Educational_program::m_name, "name", 0, true, true);
   pData = t.data(& Educational_program::m_description, "description", 0, true, true);
   pData = t.data(& Educational_program::m_field, "field", 0, true, true);
   pData = t.data(& Educational_program::m_focus, "focus", 0, true, true);

   pRelation = t.relationOneToMany(& Educational_program::m_list_of_result_education, "list_of_result_education", "educational_program_id", 0);
   pRelation = t.relationOneToMany(& Educational_program::m_list_of_discipline, "list_of_discipline", "educational_program_id", 0);

   qx::QxValidatorX<Educational_program> * pAllValidator = t.getAllValidator(); Q_UNUSED(pAllValidator);
}

} // namespace qx

Educational_program::Educational_program() : m_educational_program_id(0) { ; }

Educational_program::Educational_program(const long & id) : m_educational_program_id(id) { ; }

Educational_program::~Educational_program() { ; }

long Educational_program::geteducational_program_id() const { return m_educational_program_id; }

QString Educational_program::getname() const { return m_name; }

QString Educational_program::getdescription() const { return m_description; }

QString Educational_program::getfield() const { return m_field; }

QString Educational_program::getfocus() const { return m_focus; }

Educational_program::type_list_of_result_education Educational_program::getlist_of_result_education() const { return m_list_of_result_education; }

Educational_program::type_list_of_result_education & Educational_program::list_of_result_education() { return m_list_of_result_education; }

const Educational_program::type_list_of_result_education & Educational_program::list_of_result_education() const { return m_list_of_result_education; }

Educational_program::type_list_of_discipline Educational_program::getlist_of_discipline() const { return m_list_of_discipline; }

Educational_program::type_list_of_discipline & Educational_program::list_of_discipline() { return m_list_of_discipline; }

const Educational_program::type_list_of_discipline & Educational_program::list_of_discipline() const { return m_list_of_discipline; }

void Educational_program::seteducational_program_id(const long & val) { m_educational_program_id = val; }

void Educational_program::setname(const QString & val) { m_name = val; }

void Educational_program::setdescription(const QString & val) { m_description = val; }

void Educational_program::setfield(const QString & val) { m_field = val; }

void Educational_program::setfocus(const QString & val) { m_focus = val; }

void Educational_program::setlist_of_result_education(const Educational_program::type_list_of_result_education & val) { m_list_of_result_education = val; }

void Educational_program::setlist_of_discipline(const Educational_program::type_list_of_discipline & val) { m_list_of_discipline = val; }

Educational_program::type_list_of_result_education Educational_program::getlist_of_result_education(bool bLoadFromDatabase, const QString & sAppendRelations /* = QString() */, QSqlDatabase * pDatabase /* = NULL */, QSqlError * pDaoError /* = NULL */)
{
   if (pDaoError) { (* pDaoError) = QSqlError(); }
   if (! bLoadFromDatabase) { return getlist_of_result_education(); }
   QString sRelation = "{educational_program_id} | list_of_result_education";
   if (! sAppendRelations.isEmpty() && ! sAppendRelations.startsWith("->") && ! sAppendRelations.startsWith(">>")) { sRelation += "->" + sAppendRelations; }
   else if (! sAppendRelations.isEmpty()) { sRelation += sAppendRelations; }
   Educational_program tmp;
   tmp.m_educational_program_id = this->m_educational_program_id;
   QSqlError daoError = qx::dao::fetch_by_id_with_relation(sRelation, tmp, pDatabase);
   if (! daoError.isValid()) { this->m_list_of_result_education = tmp.m_list_of_result_education; }
   if (pDaoError) { (* pDaoError) = daoError; }
   return m_list_of_result_education;
}

Educational_program::type_list_of_result_education & Educational_program::list_of_result_education(bool bLoadFromDatabase, const QString & sAppendRelations /* = QString() */, QSqlDatabase * pDatabase /* = NULL */, QSqlError * pDaoError /* = NULL */)
{
   if (pDaoError) { (* pDaoError) = QSqlError(); }
   if (! bLoadFromDatabase) { return list_of_result_education(); }
   QString sRelation = "{educational_program_id} | list_of_result_education";
   if (! sAppendRelations.isEmpty() && ! sAppendRelations.startsWith("->") && ! sAppendRelations.startsWith(">>")) { sRelation += "->" + sAppendRelations; }
   else if (! sAppendRelations.isEmpty()) { sRelation += sAppendRelations; }
   Educational_program tmp;
   tmp.m_educational_program_id = this->m_educational_program_id;
   QSqlError daoError = qx::dao::fetch_by_id_with_relation(sRelation, tmp, pDatabase);
   if (! daoError.isValid()) { this->m_list_of_result_education = tmp.m_list_of_result_education; }
   if (pDaoError) { (* pDaoError) = daoError; }
   return m_list_of_result_education;
}

Educational_program::type_list_of_discipline Educational_program::getlist_of_discipline(bool bLoadFromDatabase, const QString & sAppendRelations /* = QString() */, QSqlDatabase * pDatabase /* = NULL */, QSqlError * pDaoError /* = NULL */)
{
   if (pDaoError) { (* pDaoError) = QSqlError(); }
   if (! bLoadFromDatabase) { return getlist_of_discipline(); }
   QString sRelation = "{educational_program_id} | list_of_discipline";
   if (! sAppendRelations.isEmpty() && ! sAppendRelations.startsWith("->") && ! sAppendRelations.startsWith(">>")) { sRelation += "->" + sAppendRelations; }
   else if (! sAppendRelations.isEmpty()) { sRelation += sAppendRelations; }
   Educational_program tmp;
   tmp.m_educational_program_id = this->m_educational_program_id;
   QSqlError daoError = qx::dao::fetch_by_id_with_relation(sRelation, tmp, pDatabase);
   if (! daoError.isValid()) { this->m_list_of_discipline = tmp.m_list_of_discipline; }
   if (pDaoError) { (* pDaoError) = daoError; }
   return m_list_of_discipline;
}

Educational_program::type_list_of_discipline & Educational_program::list_of_discipline(bool bLoadFromDatabase, const QString & sAppendRelations /* = QString() */, QSqlDatabase * pDatabase /* = NULL */, QSqlError * pDaoError /* = NULL */)
{
   if (pDaoError) { (* pDaoError) = QSqlError(); }
   if (! bLoadFromDatabase) { return list_of_discipline(); }
   QString sRelation = "{educational_program_id} | list_of_discipline";
   if (! sAppendRelations.isEmpty() && ! sAppendRelations.startsWith("->") && ! sAppendRelations.startsWith(">>")) { sRelation += "->" + sAppendRelations; }
   else if (! sAppendRelations.isEmpty()) { sRelation += sAppendRelations; }
   Educational_program tmp;
   tmp.m_educational_program_id = this->m_educational_program_id;
   QSqlError daoError = qx::dao::fetch_by_id_with_relation(sRelation, tmp, pDatabase);
   if (! daoError.isValid()) { this->m_list_of_discipline = tmp.m_list_of_discipline; }
   if (pDaoError) { (* pDaoError) = daoError; }
   return m_list_of_discipline;
}

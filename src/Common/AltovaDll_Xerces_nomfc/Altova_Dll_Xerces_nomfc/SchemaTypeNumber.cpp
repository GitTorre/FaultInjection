////////////////////////////////////////////////////////////////////////
//
// SchemaTypeNumber.h
//
// This file was generated by XMLSpy 2005 Enterprise Edition.
//
// YOU SHOULD NOT MODIFY THIS FILE, BECAUSE IT WILL BE
// OVERWRITTEN WHEN YOU RE-RUN CODE GENERATION.
//
// Refer to the XMLSpy Documentation for further details.
// http://www.altova.com/xmlspy
//
////////////////////////////////////////////////////////////////////////


#include "Altova.h"
#include "AltovaException.h"
#include "SchemaTypeNumber.h"

#include <math.h>


namespace altova {



////////////////////////////////////////////////////////////////////////
//
//  CSchemaBoolean
//
////////////////////////////////////////////////////////////////////////

CSchemaBoolean& CSchemaBoolean::operator=( const bool bValue )	
{ 
	SetIsEmpty( false ); 
	m_Value = bValue; 
	return *this; 
}


bool CSchemaBoolean::ToBool() const
{ 
	if( !CSchemaType::ToBool() )
		return false;
	return m_Value; 
}


CSchemaBoolean::operator tstring() const
{
	if( IsEmpty() )
		return _T("");
	return m_Value ? _T("true") : _T("false");
}





void CSchemaBoolean::Empty()		
{ 
	CSchemaType::Empty();
	m_Value = false; 
}


bool CSchemaBoolean::Parse( const TCHAR* szValue )
{
	if( !CSchemaType::Parse( szValue ) )
		return false;

	m_Value = _tcscmp(szValue, _T("true")) == 0 || _tcscmp(szValue, _T("1")) == 0;

	return !IsEmpty();
}


CSchemaType&	CSchemaBoolean::Assign( const CSchemaType& rOther )
{ 
	if( CSchemaType::Assign( rOther ).IsEmpty() )
		return *this;

	m_Value = rOther.ToBool();

	return *this;
}


 


} // namespace altova
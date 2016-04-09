////////////////////////////////////////////////////////////////////////
//
// AltovaException.h
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


#ifndef ALTOVA_ALTOVAEXCEPTION_H_INCLUDED
#define ALTOVA_ALTOVAEXCEPTION_H_INCLUDED

#if _MSC_VER > 1000
	#pragma once
#endif // _MSC_VER > 1000

namespace altova {


class ALTOVA_DECLSPECIFIER CAltovaException
{
public:
	typedef enum
	{
		eError1,
		eError2,
		eDatabaseError,
	} ECode;

	CAltovaException(int nCode, const tstring& sMessage);
	int GetCode();
	tstring GetInfo();

protected:
	int		m_nCode;
	tstring	m_sMessage;
};


} // namespace altova

#endif // ALTOVA_ALTOVAEXCEPTION_H_INCLUDED

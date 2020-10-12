static const char *RcsId = "$Id $";
//+=============================================================================
//
// file :         AerotechBoxStateMachine.cpp
//
// description :  C++ source for the AerotechBox and its alowed 
//                methods for commands and attributes
//
// project :      TANGO Device Server
//
// $Author: jean_coquet $
//
// $Revision: 1.3 $
// $Date: 2012/03/05 08:43:07 $
//
// SVN only:
// $HeadURL: $
//
// CVS only:
// $Source: /cvsroot/tango-ds/Motion/Aerotech/src/AerotechBoxStateMachine.cpp,v $
// $Log: AerotechBoxStateMachine.cpp,v $
// Revision 1.3  2012/03/05 08:43:07  jean_coquet
// bug correction on relativeMove attribute
// added AerotechBox::SaveInFlash
// regenerated POGO Documentation for the 3 tango classes
//
// Revision 1.2  2012/03/02 15:45:15  jean_coquet
// mise au point avec le materiel
//
// Revision 1.1  2012/02/23 17:46:18  olivierroux
// - initial import #21894
//
//
// copyleft :     European Synchrotron Radiation Facility
//                BP 220, Grenoble 38043
//                FRANCE
//
//-=============================================================================
//
//  		This file is generated by POGO
//	(Program Obviously used to Generate tango Object)
//
//         (c) - Software Engineering Group - ESRF
//=============================================================================
//#include "pch.h"
#include "tango.h"
#include <AerotechBox.h>
#include <AerotechBoxClass.h>

/*====================================================================
 *	This file contains the methods to allow commands and attributes
 * read or write execution.
 *
 * If you wand to add your own code, add it between 
 * the "End/Re-Start of Generated Code" comments.
 *
 * If you want, you can also add your own methods.
 *====================================================================
 */

namespace AerotechBox_ns
{

//=================================================
//		Attributes Allowed Methods
//=================================================

//+----------------------------------------------------------------------------
//
// method : 		AerotechBox::is_oKCommandCounter_allowed
// 
// description : 	Read/Write allowed for oKCommandCounter attribute.
//
//-----------------------------------------------------------------------------
bool AerotechBox::is_oKCommandCounter_allowed(Tango::AttReqType type)
{
		//	End of Generated Code

		//	Re-Start of Generated Code
	return true;
}
//+----------------------------------------------------------------------------
//
// method : 		AerotechBox::is_badCommandCounter_allowed
// 
// description : 	Read/Write allowed for badCommandCounter attribute.
//
//-----------------------------------------------------------------------------
bool AerotechBox::is_badCommandCounter_allowed(Tango::AttReqType type)
{
		//	End of Generated Code

		//	Re-Start of Generated Code
	return true;
}

//=================================================
//		Commands Allowed Methods
//=================================================

//+----------------------------------------------------------------------------
//
// method : 		AerotechBox::is_Reset_allowed
// 
// description : 	Execution allowed for Reset command.
//
//-----------------------------------------------------------------------------
bool AerotechBox::is_Reset_allowed(const CORBA::Any &any)
{
		//	End of Generated Code

		//	Re-Start of Generated Code
	return true;
}
//+----------------------------------------------------------------------------
//
// method : 		AerotechBox::is_ExecLowLevelCmd_allowed
// 
// description : 	Execution allowed for ExecLowLevelCmd command.
//
//-----------------------------------------------------------------------------
bool AerotechBox::is_ExecLowLevelCmd_allowed(const CORBA::Any &any)
{
		//	End of Generated Code

		//	Re-Start of Generated Code
	return true;
}
//+----------------------------------------------------------------------------
//
// method : 		AerotechBox::is_SaveInFlash_allowed
// 
// description : 	Execution allowed for SaveInFlash command.
//
//-----------------------------------------------------------------------------
bool AerotechBox::is_SaveInFlash_allowed(const CORBA::Any &any)
{
		//	End of Generated Code

		//	Re-Start of Generated Code
	return true;
}
//+----------------------------------------------------------------------------
//
// method : 		AerotechBox::is_RunProgram_allowed
// 
// description : 	Execution allowed for RunProgram command.
//
//-----------------------------------------------------------------------------
bool AerotechBox::is_RunProgram_allowed(const CORBA::Any &any)
{
		//	End of Generated Code

		//	Re-Start of Generated Code
	return true;
}
//+----------------------------------------------------------------------------
//
// method : 		AerotechBox::is_StopProgram_allowed
// 
// description : 	Execution allowed for StopProgram command.
//
//-----------------------------------------------------------------------------
bool AerotechBox::is_StopProgram_allowed(const CORBA::Any &any)
{
		//	End of Generated Code

		//	Re-Start of Generated Code
	return true;
}

}	// namespace AerotechBox_ns

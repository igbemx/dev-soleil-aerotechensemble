//=============================================================================
//
// file :        AerotechAxis.h
//
// description : Include for the AerotechAxis class.
//
// project :	Ensemble
//
// $Author: jean_coquet $
//
// $Revision: 1.2 $
// $Date: 2012/03/02 15:45:15 $
//
// SVN only:
// $HeadURL: $
//
// CVS only:
// $Source: /cvsroot/tango-ds/Motion/Aerotech/src/AerotechAxis.h,v $
// $Log: AerotechAxis.h,v $
// Revision 1.2  2012/03/02 15:45:15  jean_coquet
// mise au point avec le materiel
//
// Revision 1.1  2012/02/23 17:46:18  olivierroux
// - initial import #21894
//
//
// copyleft :    Synchrotron SOLEIL 
//               L'Orme des merisiers - Saint Aubin
//		 BP48 - 91192 Gif sur Yvette
//               FRANCE
//
//=============================================================================
//
//  		This file is generated by POGO
//	(Program Obviously used to Generate tango Object)
//
//         (c) - Software Engineering Group - ESRF
//=============================================================================
#ifndef _AEROTECHAXIS_H
#define _AEROTECHAXIS_H

#include <tango.h>
#include "lib/AbstractAerotech.h"

//using namespace Tango;

/**
 * @author	$Author: jean_coquet $
 * @version	$Revision: 1.2 $
 */

 //	Add your own constant definitions here.
 //-----------------------------------------------


namespace AerotechAxis_ns
{

/**
 * Class Description:
 * controls 1 axis of the Ensemble
 *	commands are sent via EnsembleBox class
 */

/*
 *	Device States Description:
*  Tango::FAULT :    Init failed or
 *                    connection with controller failed or
 *                    emergency stopped
*  Tango::OFF :      Dirver is DISABLED
*  Tango::STANDBY :  Axis is On (ENABLED) and waiting for request
*  Tango::MOVING :   Axis is Moving
*  Tango::ALARM :    Axis is NOT homed or NOT in position
 */


class AerotechAxis: public Tango::Device_4Impl
{
public :
	//	Add your own data members here
	//-----------------------------------------


	//	Here is the Start of the automatic code generation part
	//-------------------------------------------------------------	
/**
 *	@name attributes
 *	Attribute member data.
 */
//@{
		Tango::DevDouble	*attr_position_read;
		Tango::DevDouble	attr_position_write;
		Tango::DevDouble	*attr_offset_read;
		Tango::DevDouble	attr_offset_write;
		Tango::DevDouble	attr_velocity_write;
		Tango::DevBoolean	*attr_isBrakeOn_read;
		Tango::DevDouble	attr_relativeMove_write;
//@}

/**
 * @name Device properties
 * Device properties member data.
 */
//@{
/**
 *	Axis Identifier (as configured in controller)
 */
	string	axisId;
/**
 *	type of the Controller.
 *	Valid values are ENSEMBLE  and A3200
 *	default : no default.
 *	Must be defined.
 *	
 */
	string	controllerType;
//@}

/**
 *	@name Device properties
 *	Device property member data.
 */
//@{
//@}

/**@name Constructors
 * Miscellaneous constructors */
//@{
/**
 * Constructs a newly allocated Command object.
 *
 *	@param cl	Class.
 *	@param s 	Device Name
 */
	AerotechAxis(Tango::DeviceClass *cl,string &s);
/**
 * Constructs a newly allocated Command object.
 *
 *	@param cl	Class.
 *	@param s 	Device Name
 */
	AerotechAxis(Tango::DeviceClass *cl,const char *s);
/**
 * Constructs a newly allocated Command object.
 *
 *	@param cl	Class.
 *	@param s 	Device name
 *	@param d	Device description.
 */
	AerotechAxis(Tango::DeviceClass *cl,const char *s,const char *d);
//@}

/**@name Destructor
 * Only one destructor is defined for this class */
//@{
/**
 * The object destructor.
 */	
	~AerotechAxis() {delete_device();};
/**
 *	will be called at device destruction or at init command.
 */
	void delete_device();
//@}

	
/**@name Miscellaneous methods */
//@{
/**
 *	Initialize the device
 */
	virtual void init_device();
/**
 *	Always executed method before execution command method.
 */
	virtual void always_executed_hook();

//@}

/**
 * @name AerotechAxis methods prototypes
 */

//@{
/**
 *	Hardware acquisition for attributes.
 */
	virtual void read_attr_hardware(vector<long> &attr_list);
/**
 *	Extract real attribute values for position acquisition result.
 */
	virtual void read_position(Tango::Attribute &attr);
/**
 *	Write position attribute values to hardware.
 */
	virtual void write_position(Tango::WAttribute &attr);
/**
 *	Extract real attribute values for offset acquisition result.
 */
	virtual void read_offset(Tango::Attribute &attr);
/**
 *	Write offset attribute values to hardware.
 */
	virtual void write_offset(Tango::WAttribute &attr);
/**
 *	Extract real attribute values for velocity acquisition result.
 */
	virtual void read_velocity(Tango::Attribute &attr);
/**
 *	Write velocity attribute values to hardware.
 */
	virtual void write_velocity(Tango::WAttribute &attr);
/**
 *	Extract real attribute values for isBrakeOn acquisition result.
 */
	virtual void read_isBrakeOn(Tango::Attribute &attr);
/**
 *	Extract real attribute values for relativeMove acquisition result.
 */
	virtual void read_relativeMove(Tango::Attribute &attr);
/**
 *	Write relativeMove attribute values to hardware.
 */
	virtual void write_relativeMove(Tango::WAttribute &attr);
/**
 *	Read/Write allowed for position attribute.
 */
	virtual bool is_position_allowed(Tango::AttReqType type);
/**
 *	Read/Write allowed for offset attribute.
 */
	virtual bool is_offset_allowed(Tango::AttReqType type);
/**
 *	Read/Write allowed for velocity attribute.
 */
	virtual bool is_velocity_allowed(Tango::AttReqType type);
/**
 *	Read/Write allowed for isBrakeOn attribute.
 */
	virtual bool is_isBrakeOn_allowed(Tango::AttReqType type);
/**
 *	Read/Write allowed for relativeMove attribute.
 */
	virtual bool is_relativeMove_allowed(Tango::AttReqType type);
/**
 *	Execution allowed for Stop command.
 */
	virtual bool is_Stop_allowed(const CORBA::Any &any);
/**
 *	Execution allowed for InitializeReferencePosition command.
 */
	virtual bool is_InitializeReferencePosition_allowed(const CORBA::Any &any);
/**
 *	Execution allowed for BrakeON command.
 */
	virtual bool is_BrakeON_allowed(const CORBA::Any &any);
/**
 *	Execution allowed for BrakeOFF command.
 */
	virtual bool is_BrakeOFF_allowed(const CORBA::Any &any);
/**
 *	Execution allowed for FaultAck command.
 */
	virtual bool is_FaultAck_allowed(const CORBA::Any &any);
/**
 *	Execution allowed for Enable command.
 */
	virtual bool is_Enable_allowed(const CORBA::Any &any);
/**
 *	Execution allowed for Disable command.
 */
	virtual bool is_Disable_allowed(const CORBA::Any &any);
/**
 *	Execution allowed for On command.
 */
	virtual bool is_On_allowed(const CORBA::Any &any);
/**
 *	Execution allowed for Off command.
 */
	virtual bool is_Off_allowed(const CORBA::Any &any);
/**
 * This command gets the device state (stored in its <i>device_state</i> data member) and returns it to the caller.
 *	@return	State Code
 *	@exception DevFailed
 */
	virtual Tango::DevState	dev_state();
/**
 * This command gets the device status (stored in its <i>device_status</i> data member) and returns it to the caller.
 *	@return	Status description
 *	@exception DevFailed
 */
	virtual Tango::ConstDevString	dev_status();
/**
 * Stops motor
 *	@exception DevFailed
 */
	void	stop();
/**
 * makes a Home 0
 *	@exception DevFailed
 */
	void	initialize_reference_position();
/**
 * applies the brake
 *	@exception DevFailed
 */
	void	brake_on();
/**
 * release the brake
 *	@exception DevFailed
 */
	void	brake_off();
/**
 * Acknowledges and clears faults on the Ensemble Driver
 *	@exception DevFailed
 */
	void	fault_ack();
/**
 * enables the related driver
 *	@exception DevFailed
 */
	void	enable();
/**
 * disables the related driver
 *	@exception DevFailed
 */
	void	disable();
/**
 * Enable power driver
 *	same as Enable cmd
 *	@exception DevFailed
 */
	void	on();
/**
 * Disable power driver
 *	same as Disable cmd
 *	@exception DevFailed
 */
	void	off();

/**
 *	Read the device properties from database
 */
	 void get_device_property();
//@}

	//	Here is the end of the automatic code generation part
	//-------------------------------------------------------------	



protected :	
	//	Add your own data members here
	//-----------------------------------------

	Aerotech_ns::AbstractAerotech * axis;

	//- init utilities
	bool m_init_device_done;
	bool m_properties_missing;

	//- the device status string
	std::string m_status_str;

	//- check wether or not the device is properly init
	bool is_init ();
	char * axis_name;

};

}	// namespace_ns

#endif	// _AEROTECHAXIS_H

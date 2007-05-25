/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for license. */

//-----------------------------------NOTICE----------------------------------//
// Some of this file is automatically filled in by a Python script.  Only    //
// add custom code in the designated areas or it will be overwritten during  //
// the next update.                                                          //
//-----------------------------------NOTICE----------------------------------//

//--BEGIN FILE HEAD CUSTOM CODE--//
//--END CUSTOM CODE--//

#include "../../include/FixLink.h"
#include "../../include/ObjectRegistry.h"
#include "../../include/NIF_IO.h"
#include "../../include/obj/NiPSysPositionModifier.h"
using namespace Niflib;

//Definition of TYPE constant
const Type NiPSysPositionModifier::TYPE("NiPSysPositionModifier", &NiPSysModifier::TYPE );

NiPSysPositionModifier::NiPSysPositionModifier() {
	//--BEGIN CONSTRUCTOR CUSTOM CODE--//
	//--END CUSTOM CODE--//
}

NiPSysPositionModifier::~NiPSysPositionModifier() {
	//--BEGIN DESTRUCTOR CUSTOM CODE--//
	//--END CUSTOM CODE--//
}

const Type & NiPSysPositionModifier::GetType() const {
	return TYPE;
}

namespace Niflib {
	typedef NiObject*(*obj_factory_func)();
	extern map<string, obj_factory_func> global_object_map;

	//Initialization function
	static bool Initialization();

	//A static bool to force the initialization to happen pre-main
	static bool obj_initialized = Initialization();

	static bool Initialization() {
		//Register this object type with Niflib
		ObjectRegistry::RegisterObject( "NiPSysPositionModifier", NiPSysPositionModifier::Create );

		//Do this stuff just to make sure the compiler doesn't optimize this function and the static bool away.
		obj_initialized = true;
		return obj_initialized;
	}
}

NiObject * NiPSysPositionModifier::Create() {
	return new NiPSysPositionModifier;
}

void NiPSysPositionModifier::Read( istream& in, list<unsigned int> & link_stack, const NifInfo & info ) {
	//--BEGIN PRE-READ CUSTOM CODE--//
	//--END CUSTOM CODE--//

	NiPSysModifier::Read( in, link_stack, info );

	//--BEGIN POST-READ CUSTOM CODE--//
	//--END CUSTOM CODE--//
}

void NiPSysPositionModifier::Write( ostream& out, const map<NiObjectRef,unsigned int> & link_map, const NifInfo & info ) const {
	//--BEGIN PRE-WRITE CUSTOM CODE--//
	//--END CUSTOM CODE--//

	NiPSysModifier::Write( out, link_map, info );

	//--BEGIN POST-WRITE CUSTOM CODE--//
	//--END CUSTOM CODE--//
}

std::string NiPSysPositionModifier::asString( bool verbose ) const {
	//--BEGIN PRE-STRING CUSTOM CODE--//
	//--END CUSTOM CODE--//

	stringstream out;
	unsigned int array_output_count = 0;
	out << NiPSysModifier::asString();
	return out.str();

	//--BEGIN POST-STRING CUSTOM CODE--//
	//--END CUSTOM CODE--//
}

void NiPSysPositionModifier::FixLinks( const map<unsigned int,NiObjectRef> & objects, list<unsigned int> & link_stack, const NifInfo & info ) {
	//--BEGIN PRE-FIXLINKS CUSTOM CODE--//
	//--END CUSTOM CODE--//

	NiPSysModifier::FixLinks( objects, link_stack, info );

	//--BEGIN POST-FIXLINKS CUSTOM CODE--//
	//--END CUSTOM CODE--//
}

std::list<NiObjectRef> NiPSysPositionModifier::GetRefs() const {
	list<Ref<NiObject> > refs;
	refs = NiPSysModifier::GetRefs();
	return refs;
}

//--BEGIN MISC CUSTOM CODE--//
//--END CUSTOM CODE--//

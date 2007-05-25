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
#include "../../include/obj/NiPSysSpawnModifier.h"
using namespace Niflib;

//Definition of TYPE constant
const Type NiPSysSpawnModifier::TYPE("NiPSysSpawnModifier", &NiPSysModifier::TYPE );

NiPSysSpawnModifier::NiPSysSpawnModifier() : numSpawnGenerations((unsigned short)0), percentageSpawned(0.0f), minNumToSpawn((unsigned short)0), maxNumToSpawn((unsigned short)0), spawnSpeedChaos(0.0f), spawnDirChaos(0.0f), lifeSpan(0.0f), lifeSpanVariation(0.0f) {
	//--BEGIN CONSTRUCTOR CUSTOM CODE--//
	//--END CUSTOM CODE--//
}

NiPSysSpawnModifier::~NiPSysSpawnModifier() {
	//--BEGIN DESTRUCTOR CUSTOM CODE--//
	//--END CUSTOM CODE--//
}

const Type & NiPSysSpawnModifier::GetType() const {
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
		ObjectRegistry::RegisterObject( "NiPSysSpawnModifier", NiPSysSpawnModifier::Create );

		//Do this stuff just to make sure the compiler doesn't optimize this function and the static bool away.
		obj_initialized = true;
		return obj_initialized;
	}
}

NiObject * NiPSysSpawnModifier::Create() {
	return new NiPSysSpawnModifier;
}

void NiPSysSpawnModifier::Read( istream& in, list<unsigned int> & link_stack, const NifInfo & info ) {
	//--BEGIN PRE-READ CUSTOM CODE--//
	//--END CUSTOM CODE--//

	NiPSysModifier::Read( in, link_stack, info );
	NifStream( numSpawnGenerations, in, info );
	NifStream( percentageSpawned, in, info );
	NifStream( minNumToSpawn, in, info );
	NifStream( maxNumToSpawn, in, info );
	NifStream( spawnSpeedChaos, in, info );
	NifStream( spawnDirChaos, in, info );
	NifStream( lifeSpan, in, info );
	NifStream( lifeSpanVariation, in, info );

	//--BEGIN POST-READ CUSTOM CODE--//
	//--END CUSTOM CODE--//
}

void NiPSysSpawnModifier::Write( ostream& out, const map<NiObjectRef,unsigned int> & link_map, const NifInfo & info ) const {
	//--BEGIN PRE-WRITE CUSTOM CODE--//
	//--END CUSTOM CODE--//

	NiPSysModifier::Write( out, link_map, info );
	NifStream( numSpawnGenerations, out, info );
	NifStream( percentageSpawned, out, info );
	NifStream( minNumToSpawn, out, info );
	NifStream( maxNumToSpawn, out, info );
	NifStream( spawnSpeedChaos, out, info );
	NifStream( spawnDirChaos, out, info );
	NifStream( lifeSpan, out, info );
	NifStream( lifeSpanVariation, out, info );

	//--BEGIN POST-WRITE CUSTOM CODE--//
	//--END CUSTOM CODE--//
}

std::string NiPSysSpawnModifier::asString( bool verbose ) const {
	//--BEGIN PRE-STRING CUSTOM CODE--//
	//--END CUSTOM CODE--//

	stringstream out;
	unsigned int array_output_count = 0;
	out << NiPSysModifier::asString();
	out << "  Num Spawn Generations:  " << numSpawnGenerations << endl;
	out << "  Percentage Spawned:  " << percentageSpawned << endl;
	out << "  Min Num to Spawn:  " << minNumToSpawn << endl;
	out << "  Max Num to Spawn:  " << maxNumToSpawn << endl;
	out << "  Spawn Speed Chaos:  " << spawnSpeedChaos << endl;
	out << "  Spawn Dir Chaos:  " << spawnDirChaos << endl;
	out << "  Life Span:  " << lifeSpan << endl;
	out << "  Life Span Variation:  " << lifeSpanVariation << endl;
	return out.str();

	//--BEGIN POST-STRING CUSTOM CODE--//
	//--END CUSTOM CODE--//
}

void NiPSysSpawnModifier::FixLinks( const map<unsigned int,NiObjectRef> & objects, list<unsigned int> & link_stack, const NifInfo & info ) {
	//--BEGIN PRE-FIXLINKS CUSTOM CODE--//
	//--END CUSTOM CODE--//

	NiPSysModifier::FixLinks( objects, link_stack, info );

	//--BEGIN POST-FIXLINKS CUSTOM CODE--//
	//--END CUSTOM CODE--//
}

std::list<NiObjectRef> NiPSysSpawnModifier::GetRefs() const {
	list<Ref<NiObject> > refs;
	refs = NiPSysModifier::GetRefs();
	return refs;
}

//--BEGIN MISC CUSTOM CODE--//
//--END CUSTOM CODE--//

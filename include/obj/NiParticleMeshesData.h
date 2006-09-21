/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for licence. */

#ifndef _NIPARTICLEMESHESDATA_H_
#define _NIPARTICLEMESHESDATA_H_

#include "NiParticlesData.h"

// Include structures
#include "../Ref.h"
namespace Niflib {

// Forward define of referenced blocks
class NiAVObject;

#include "../gen/obj_defines.h"

class NiParticleMeshesData;
typedef Ref<NiParticleMeshesData> NiParticleMeshesDataRef;

/*!
 * NiParticleMeshesData - Particle meshes data.
 */

class NIFLIB_API NiParticleMeshesData : public NI_PARTICLE_MESHES_DATA_PARENT {
public:
	NiParticleMeshesData();
	~NiParticleMeshesData();
	//Run-Time Type Information
	static const Type & TypeConst() { return TYPE; }
private:
	static const Type TYPE;
public:
	virtual void Read( istream& in, list<uint> & link_stack, unsigned int version, unsigned int user_version );
	virtual void Write( ostream& out, map<NiObjectRef,uint> link_map, unsigned int version, unsigned int user_version ) const;
	virtual string asString( bool verbose = false ) const;
	virtual void FixLinks( const map<unsigned,NiObjectRef> & objects, list<uint> & link_stack, unsigned int version, unsigned int user_version );
	virtual list<NiObjectRef> GetRefs() const;
	virtual const Type & GetType() const;

protected:
	NI_PARTICLE_MESHES_DATA_MEMBERS
	STANDARD_INTERNAL_METHODS
};

}
#endif
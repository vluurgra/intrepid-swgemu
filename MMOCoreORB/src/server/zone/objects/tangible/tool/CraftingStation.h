/*
 *	server/zone/objects/tangible/tool/CraftingStation.h generated by engine3 IDL compiler 0.60
 */

#ifndef CRAFTINGSTATION_H_
#define CRAFTINGSTATION_H_

#include "engine/core/Core.h"

#include "engine/core/ManagedReference.h"

#include "engine/core/ManagedWeakReference.h"

namespace server {
namespace zone {
namespace objects {
namespace scene {

class SceneObject;

} // namespace scene
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::scene;

namespace server {
namespace zone {

class Zone;

} // namespace zone
} // namespace server

using namespace server::zone;

namespace server {
namespace zone {
namespace packets {
namespace object {

class ObjectMenuResponse;

} // namespace object
} // namespace packets
} // namespace zone
} // namespace server

using namespace server::zone::packets::object;

namespace server {
namespace zone {
namespace templates {

class SharedObjectTemplate;

} // namespace templates
} // namespace zone
} // namespace server

using namespace server::zone::templates;

namespace server {
namespace zone {
namespace packets {
namespace scene {

class AttributeListMessage;

} // namespace scene
} // namespace packets
} // namespace zone
} // namespace server

using namespace server::zone::packets::scene;

namespace server {
namespace zone {
namespace objects {
namespace creature {

class CreatureObject;

} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature;

#include "server/zone/objects/manufactureschematic/craftingvalues/CraftingValues.h"

#include "server/zone/objects/tangible/tool/ToolTangibleObject.h"

#include "engine/lua/LuaObject.h"

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace tool {

class CraftingStation : public ToolTangibleObject {
public:
	CraftingStation();

	void initializeTransientMembers();

	void loadTemplateData(SharedObjectTemplate* templateData);

	void fillObjectMenuResponse(ObjectMenuResponse* menuResponse, CreatureObject* player);

	/**
	 * Handles the radial selection sent by the client
	 * @pre { this object is locked, player is locked }
	 * @post { this object is locked, player is locked }
	 * @returns 0 if successfull
	 */
	int handleObjectMenuSelect(CreatureObject* player, byte selectedID);

	/**
	 * Fills the attribute list message options that are sent to player creature
	 * @pre { }
	 * @post { }
	 * @param msg attribute list message with the attributes
	 * @param object player creature to which the message is sent
	 */
	void fillAttributeList(AttributeListMessage* msg, CreatureObject* object);

	void sendInputHopper(CreatureObject* player);

	void updateCraftingValues(CraftingValues* values, bool firstUpdate);

	bool isCraftingStation();

	int getComplexityLevel();

	int getStationType();

	void setComplexityLevel(int level);

	SceneObject* findCraftingTool(CreatureObject* player);

	void createChildObjects();

	DistributedObjectServant* _getImplementation();
	DistributedObjectServant* _getImplementationForRead();

	void _setImplementation(DistributedObjectServant* servant);

protected:
	CraftingStation(DummyConstructorParameter* param);

	virtual ~CraftingStation();

	friend class CraftingStationHelper;
};

} // namespace tool
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::tool;

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace tool {

class CraftingStationImplementation : public ToolTangibleObjectImplementation {
	int type;

	float effectiveness;

	int complexityLevel;

public:
	CraftingStationImplementation();

	CraftingStationImplementation(DummyConstructorParameter* param);

	void initializeTransientMembers();

	void loadTemplateData(SharedObjectTemplate* templateData);

	void fillObjectMenuResponse(ObjectMenuResponse* menuResponse, CreatureObject* player);

	/**
	 * Handles the radial selection sent by the client
	 * @pre { this object is locked, player is locked }
	 * @post { this object is locked, player is locked }
	 * @returns 0 if successfull
	 */
	int handleObjectMenuSelect(CreatureObject* player, byte selectedID);

	/**
	 * Fills the attribute list message options that are sent to player creature
	 * @pre { }
	 * @post { }
	 * @param msg attribute list message with the attributes
	 * @param object player creature to which the message is sent
	 */
	void fillAttributeList(AttributeListMessage* msg, CreatureObject* object);

	void sendInputHopper(CreatureObject* player);

	void updateCraftingValues(CraftingValues* values, bool firstUpdate);

	bool isCraftingStation();

	int getComplexityLevel();

	int getStationType();

	void setComplexityLevel(int level);

	SceneObject* findCraftingTool(CreatureObject* player);

	void createChildObjects();

	WeakReference<CraftingStation*> _this;

	operator const CraftingStation*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~CraftingStationImplementation();

	void finalize();

	void _initializeImplementation();

	void _setStub(DistributedObjectStub* stub);

	void lock(bool doLock = true);

	void lock(ManagedObject* obj);

	void rlock(bool doLock = true);

	void wlock(bool doLock = true);

	void wlock(ManagedObject* obj);

	void unlock(bool doLock = true);

	void runlock(bool doLock = true);

	void _serializationHelperMethod();
	bool readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode);
	int writeObjectMembers(ObjectOutputStream* stream);

	friend class CraftingStation;
};

class CraftingStationAdapter : public ToolTangibleObjectAdapter {
public:
	CraftingStationAdapter(CraftingStation* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void initializeTransientMembers();

	int handleObjectMenuSelect(CreatureObject* player, byte selectedID);

	void sendInputHopper(CreatureObject* player);

	bool isCraftingStation();

	int getComplexityLevel();

	int getStationType();

	void setComplexityLevel(int level);

	SceneObject* findCraftingTool(CreatureObject* player);

	void createChildObjects();

};

class CraftingStationHelper : public DistributedObjectClassHelper, public Singleton<CraftingStationHelper> {
	static CraftingStationHelper* staticInitializer;

public:
	CraftingStationHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<CraftingStationHelper>;
};

} // namespace tool
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::tool;

#endif /*CRAFTINGSTATION_H_*/

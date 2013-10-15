/*
 *	server/zone/objects/tangible/component/lightsaber/LightsaberCrystalComponent.h generated by engine3 IDL compiler 0.60
 */

#ifndef LIGHTSABERCRYSTALCOMPONENT_H_
#define LIGHTSABERCRYSTALCOMPONENT_H_

#include "engine/core/Core.h"

#include "engine/core/ManagedReference.h"

#include "engine/core/ManagedWeakReference.h"

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
namespace objects {
namespace manufactureschematic {

class ManufactureSchematic;

} // namespace manufactureschematic
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::manufactureschematic;

#include "server/zone/templates/tangible/LightsaberCrystalObjectTemplate.h"

#include "server/zone/objects/tangible/component/Component.h"

#include "engine/lua/LuaObject.h"

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace component {
namespace lightsaber {

class LightsaberCrystalComponent : public Component {
public:
	LightsaberCrystalComponent();

	void initializeTransientMembers();

	/**
	 * Reads and sets the template data from a SharedTangibleObjectTemplate LuaObject
	 * @pre { templateData is a valid pointer }
	 * @post { TangibleObject members are initialized }
	 * @param templateData templateData points to the SharedTangibleObjectTemplate LuaObject that is used to initialize the TangibleObject members
	 */
	void loadTemplateData(SharedObjectTemplate* templateData);

	void updateCraftingValues(CraftingValues* values, bool firstUpdate);

	/**
	 * Fills the attribute list message options that are sent to player creature
	 * @pre { }
	 * @post { }
	 * @param msg attribute list message with the attributes
	 * @param object player creature to which the message is sent
	 */
	void fillAttributeList(AttributeListMessage* msg, CreatureObject* object);

	void fillObjectMenuResponse(ObjectMenuResponse* menuResponse, CreatureObject* player);

	int handleObjectMenuSelect(CreatureObject* player, byte selectedID);

	void tuneCrystal(CreatureObject* player);

	void updateCrystal(int value);

	int getMinimumDamage();

	int getMaximumDamage();

	int getForceCost();

	int getSacHealth();

	float getAttackSpeed();

	int getSacAction();

	int getSacMind();

	int getWoundChance();

	String getOwner();

	int getQuality();

	void setQuality(int qual);

	int getColor();

	void setColor(int value);

	void setOwner(String& value);

	void setMinimumDamage(int value);

	void setMaximumDamage(int value);

	void setForceCost(int value);

	void setSacHealth(int value);

	void setSacAction(int value);

	void setSacMind(int value);

	void setAttackSpeed(float value);

	void setWoundChance(int value);

	bool isLightsaberCrystalObject();

	DistributedObjectServant* _getImplementation();
	DistributedObjectServant* _getImplementationForRead();

	void _setImplementation(DistributedObjectServant* servant);

protected:
	LightsaberCrystalComponent(DummyConstructorParameter* param);

	virtual ~LightsaberCrystalComponent();

	friend class LightsaberCrystalComponentHelper;
};

} // namespace lightsaber
} // namespace component
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::component::lightsaber;

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace component {
namespace lightsaber {

class LightsaberCrystalComponentImplementation : public ComponentImplementation {
protected:
	String postTuneName;

	Reference<LightsaberCrystalObjectTemplate* > lcoTemplate;

	int color;

	int quality;

	String owner;

	float attackSpeed;

	int minimumDamage;

	int maximumDamage;

	int forceCost;

	int sacHealth;

	int sacAction;

	int sacMind;

	int woundChance;

	String crystalType;

public:
	LightsaberCrystalComponentImplementation();

	LightsaberCrystalComponentImplementation(DummyConstructorParameter* param);

	void initializeTransientMembers();

	/**
	 * Reads and sets the template data from a SharedTangibleObjectTemplate LuaObject
	 * @pre { templateData is a valid pointer }
	 * @post { TangibleObject members are initialized }
	 * @param templateData templateData points to the SharedTangibleObjectTemplate LuaObject that is used to initialize the TangibleObject members
	 */
	void loadTemplateData(SharedObjectTemplate* templateData);

	void updateCraftingValues(CraftingValues* values, bool firstUpdate);

	/**
	 * Fills the attribute list message options that are sent to player creature
	 * @pre { }
	 * @post { }
	 * @param msg attribute list message with the attributes
	 * @param object player creature to which the message is sent
	 */
	void fillAttributeList(AttributeListMessage* msg, CreatureObject* object);

	void fillObjectMenuResponse(ObjectMenuResponse* menuResponse, CreatureObject* player);

	int handleObjectMenuSelect(CreatureObject* player, byte selectedID);

	void tuneCrystal(CreatureObject* player);

	void updateCrystal(int value);

	int getMinimumDamage();

	int getMaximumDamage();

	int getForceCost();

	int getSacHealth();

	float getAttackSpeed();

	int getSacAction();

	int getSacMind();

	int getWoundChance();

	String getOwner();

	int getQuality();

	void setQuality(int qual);

	int getColor();

	void setColor(int value);

	void setOwner(String& value);

	void setMinimumDamage(int value);

	void setMaximumDamage(int value);

	void setForceCost(int value);

	void setSacHealth(int value);

	void setSacAction(int value);

	void setSacMind(int value);

	void setAttackSpeed(float value);

	void setWoundChance(int value);

	bool isLightsaberCrystalObject();

	WeakReference<LightsaberCrystalComponent*> _this;

	operator const LightsaberCrystalComponent*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~LightsaberCrystalComponentImplementation();

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

	friend class LightsaberCrystalComponent;
};

class LightsaberCrystalComponentAdapter : public ComponentAdapter {
public:
	LightsaberCrystalComponentAdapter(LightsaberCrystalComponent* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void initializeTransientMembers();

	void fillObjectMenuResponse(ObjectMenuResponse* menuResponse, CreatureObject* player);

	int handleObjectMenuSelect(CreatureObject* player, byte selectedID);

	void tuneCrystal(CreatureObject* player);

	void updateCrystal(int value);

	int getMinimumDamage();

	int getMaximumDamage();

	int getForceCost();

	int getSacHealth();

	float getAttackSpeed();

	int getSacAction();

	int getSacMind();

	int getWoundChance();

	String getOwner();

	int getQuality();

	void setQuality(int qual);

	int getColor();

	void setColor(int value);

	void setOwner(String& value);

	void setMinimumDamage(int value);

	void setMaximumDamage(int value);

	void setForceCost(int value);

	void setSacHealth(int value);

	void setSacAction(int value);

	void setSacMind(int value);

	void setAttackSpeed(float value);

	void setWoundChance(int value);

	bool isLightsaberCrystalObject();

};

class LightsaberCrystalComponentHelper : public DistributedObjectClassHelper, public Singleton<LightsaberCrystalComponentHelper> {
	static LightsaberCrystalComponentHelper* staticInitializer;

public:
	LightsaberCrystalComponentHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<LightsaberCrystalComponentHelper>;
};

} // namespace lightsaber
} // namespace component
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::component::lightsaber;

#endif /*LIGHTSABERCRYSTALCOMPONENT_H_*/

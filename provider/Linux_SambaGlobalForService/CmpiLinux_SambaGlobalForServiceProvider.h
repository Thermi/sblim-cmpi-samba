/**
 *  CmpiLinux_SambaGlobalForServiceProvider.h
 * 
 * (C) Copyright IBM Corp. 2005
 *
 * THIS FILE IS PROVIDED UNDER THE TERMS OF THE COMMON PUBLIC LICENSE
 * ("AGREEMENT"). ANY USE, REPRODUCTION OR DISTRIBUTION OF THIS FILE
 * CONSTITUTES RECIPIENTS ACCEPTANCE OF THE AGREEMENT.
 *
 * You can obtain a current copy of the Common Public License from
 * http://www.opensource.org/licenses/cpl1.0.php
 *
 * Author:     Rodrigo Ceron <rceron@br.ibm.com>
 *
 * Contributors:
 *
 */


#ifndef CmpiLinux_SambaGlobalForServiceProvider_h
#define CmpiLinux_SambaGlobalForServiceProvider_h

#include "CmpiInstanceMI.h"
#include "CmpiMethodMI.h"
#include "Linux_SambaGlobalForServiceFactory.h"
#include "CmpiAssociationMI.h"

 namespace genProvider{

  class CmpiLinux_SambaGlobalForServiceProvider : public CmpiInstanceMI,
   public CmpiMethodMI, public CmpiAssociationMI{	
	
	private:

	Linux_SambaGlobalForServiceInterface* interfaceP;
	const static char * shadowNameSpaceP;
	CmpiBroker cppBroker;
	    
    void completeInstance (
     const Linux_SambaGlobalForServiceInstanceName& intanceNameP,
     CmpiInstance& target, const CmpiContext& ctx);
	
    void copyShadowData (
     const CmpiInstance* source, CmpiInstance* target);
	
    CmpiInstance* getShadowInstance (
     const CmpiInstance& original,
     const Linux_SambaGlobalForServiceInstanceName& intanceName);
	
    void removeDanglingShadowInstances (
     const Linux_SambaGlobalForServiceInstanceNameEnumeration& dinInsNames);

	  
	public:

    CmpiLinux_SambaGlobalForServiceProvider (
     const CmpiBroker &mbp, const CmpiContext& ctx);

    ~CmpiLinux_SambaGlobalForServiceProvider ();
	
    int isUnloadable() const;
	
    CmpiStatus enumInstanceNames (
     const CmpiContext& ctx, CmpiResult& rslt,
     const CmpiObjectPath& cop);
     
    CmpiStatus enumInstances (
     const CmpiContext& ctx, CmpiResult& rslt,
     const CmpiObjectPath& cop,
     const char* *properties);
     
    CmpiStatus getInstance (
     const CmpiContext& ctx, CmpiResult& rslt,
     const CmpiObjectPath& cop,
     const char* *properties);
    
    virtual CmpiStatus createInstance (
     const CmpiContext& ctx, CmpiResult& rslt,
     const CmpiObjectPath& cop,
     const CmpiInstance& inst);
    
    virtual CmpiStatus setInstance (
     const CmpiContext& ctx, CmpiResult& rslt,
     const CmpiObjectPath& cop,
     const CmpiInstance& inst,
     const char* *properties);
    
    virtual CmpiStatus deleteInstance (
     const CmpiContext& ctx, CmpiResult& rslt,
     const CmpiObjectPath& cop);
     
    /*
    virtual CmpiStatus execQuery (
     const CmpiContext& ctx, CmpiResult& rslt,
     const CmpiObjectPath& cop,
     const char* language,
     const char* query);
    */  
      
    virtual CmpiStatus invokeMethod (
     const CmpiContext& ctx, CmpiResult& rslt,
     const CmpiObjectPath& ref,
     const char* methodName,
     const CmpiArgs& in,
     CmpiArgs& out);

    CmpiStatus associationLogic
	  (const CmpiContext& ctx, 
	   CmpiResult& rslt,
	   const CmpiObjectPath& cop,
	   const int instances,
	   const int references,
       const char** properties=0);
	
	CmpiStatus associators (
     const CmpiContext& ctx, CmpiResult& rslt,
     const CmpiObjectPath& cop,
	 const char* assocClass, const char* resultClass,
     const char* role, const char* resultRole,
     const char** properties);
    
    CmpiStatus associatorNames (
     const CmpiContext & ctx, CmpiResult & rslt,
     const CmpiObjectPath & cop,
     const char* assocClass, const char* resultClass,
     const char* role, const char* resultRole);
    
    CmpiStatus references (
     const CmpiContext& ctx, CmpiResult& rslt,
     const CmpiObjectPath& cop,
     const char* assocClass, const char* role,
     const char** properties);
    
    CmpiStatus referenceNames (
     const CmpiContext& ctx, CmpiResult& rslt,
     const CmpiObjectPath& cop, const char* assocClass,
     const char* role); 
  };
}

#endif

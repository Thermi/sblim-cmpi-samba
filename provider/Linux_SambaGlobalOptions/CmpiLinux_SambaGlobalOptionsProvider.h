/**
 *  CmpiLinux_SambaGlobalOptionsProvider.h
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


#ifndef CmpiLinux_SambaGlobalOptionsProvider_h
#define CmpiLinux_SambaGlobalOptionsProvider_h

#include "CmpiInstanceMI.h"
#include "CmpiMethodMI.h"
#include "Linux_SambaGlobalOptionsFactory.h"

 namespace genProvider{

  class CmpiLinux_SambaGlobalOptionsProvider : public CmpiInstanceMI,
   public CmpiMethodMI{	
	
	private:

	Linux_SambaGlobalOptionsInterface* interfaceP;
	const static char * shadowNameSpaceP;
	CmpiBroker cppBroker;
	    
    void completeInstance (
     const Linux_SambaGlobalOptionsInstanceName& intanceNameP,
     CmpiInstance& target, const CmpiContext& ctx);
	
    void copyShadowData (
     const CmpiInstance* source, CmpiInstance* target);
	
    CmpiInstance* getShadowInstance (
     const CmpiInstance& original,
     const Linux_SambaGlobalOptionsInstanceName& intanceName);
	
    void removeDanglingShadowInstances (
     const Linux_SambaGlobalOptionsInstanceNameEnumeration& dinInsNames);

	  
	public:

    CmpiLinux_SambaGlobalOptionsProvider (
     const CmpiBroker &mbp, const CmpiContext& ctx);

    ~CmpiLinux_SambaGlobalOptionsProvider ();
	
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
 
  };
}

#endif

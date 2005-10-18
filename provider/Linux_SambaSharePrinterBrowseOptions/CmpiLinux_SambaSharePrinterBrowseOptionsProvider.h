/**
 *  CmpiLinux_SambaSharePrinterBrowseOptionsProvider.h
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


#ifndef CmpiLinux_SambaSharePrinterBrowseOptionsProvider_h
#define CmpiLinux_SambaSharePrinterBrowseOptionsProvider_h

#include "CmpiInstanceMI.h"
#include "CmpiMethodMI.h"
#include "Linux_SambaSharePrinterBrowseOptionsFactory.h"

 namespace genProvider{

  class CmpiLinux_SambaSharePrinterBrowseOptionsProvider : public CmpiInstanceMI,
   public CmpiMethodMI{	
	
	private:

	Linux_SambaSharePrinterBrowseOptionsInterface* interfaceP;
	const static char * shadowNameSpaceP;
	CmpiBroker cppBroker;
	    
    void completeInstance (
     const Linux_SambaSharePrinterBrowseOptionsInstanceName& intanceNameP,
     CmpiInstance& target, const CmpiContext& ctx);
	
    void copyShadowData (
     const CmpiInstance* source, CmpiInstance* target);
	
    CmpiInstance* getShadowInstance (
     const CmpiInstance& original,
     const Linux_SambaSharePrinterBrowseOptionsInstanceName& intanceName);
	
    void removeDanglingShadowInstances (
     const Linux_SambaSharePrinterBrowseOptionsInstanceNameEnumeration& dinInsNames);

	  
	public:

    CmpiLinux_SambaSharePrinterBrowseOptionsProvider (
     const CmpiBroker &mbp, const CmpiContext& ctx);

    ~CmpiLinux_SambaSharePrinterBrowseOptionsProvider ();
	
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

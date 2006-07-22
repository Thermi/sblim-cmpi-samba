// =======================================================================
// CmpiLinux_SambaGlobalBrowseOptionsProvider.h
//     created on Mon, 26 Jun 2006 using ECUTE 2.2.1
//
// Copyright (c) 2006, International Business Machines
//
// THIS FILE IS PROVIDED UNDER THE TERMS OF THE COMMON PUBLIC LICENSE
// ("AGREEMENT"). ANY USE, REPRODUCTION OR DISTRIBUTION OF THIS FILE
// CONSTITUTES RECIPIENTS ACCEPTANCE OF THE AGREEMENT.
//
// You can obtain a current copy of the Common Public License from
// http://oss.software.ibm.com/developerworks/opensource/license-cpl.html
//
// Author:        generated
//
// Contributors:
//                Wolfgang Taphorn   <taphorn@de.ibm.com>
//                Mukunda Chowdaiah  <cmukunda@in.ibm.com>
//                Ashoka S Rao       <ashoka.rao@in.ibm.com>
//                Rodrigo Ceron      <rceron@br.ibm.com>
//
// =======================================================================
#ifndef CmpiLinux_SambaGlobalBrowseOptionsProvider_h
#define CmpiLinux_SambaGlobalBrowseOptionsProvider_h



#include "CmpiInstanceMI.h"
#include "CmpiMethodMI.h"
#include "Linux_SambaGlobalBrowseOptionsFactory.h"


namespace genProvider{

  class CmpiLinux_SambaGlobalBrowseOptionsProvider : 
    public CmpiInstanceMI,
    public CmpiMethodMI {	
	
	  private:
	  Linux_SambaGlobalBrowseOptionsInterface* m_interfaceP;
	  CmpiBroker m_cmpiBroker;
	    
	  private:

    void completeInstance(
      const Linux_SambaGlobalBrowseOptionsInstanceName& anInstanceNameP,
      CmpiInstance& aCmpiInstance,
      const CmpiContext& aContext);
	
    void copyShadowData(
      const CmpiInstance* aSourceCmpiInstanceP,
      CmpiInstance* aTargetCmpiInstanceP);
	
    CmpiInstance* getShadowInstance(
      const CmpiInstance& aCmpiInstance,
      const Linux_SambaGlobalBrowseOptionsInstanceName& anInstanceName);
	
    void removeDanglingShadowInstances (
      const Linux_SambaGlobalBrowseOptionsInstanceNameEnumeration& anInstanceNameEnumeration);
	  
	  public:

    CmpiLinux_SambaGlobalBrowseOptionsProvider(
      const CmpiBroker& aBroker,
      const CmpiContext& aContext);

    ~CmpiLinux_SambaGlobalBrowseOptionsProvider();
	
    int isUnloadable() const;
	
    CmpiStatus enumInstanceNames (
      const CmpiContext& aContext,
      CmpiResult& aResult,
      const CmpiObjectPath& aCop);
     
    CmpiStatus enumInstances (
      const CmpiContext& aContext,
      CmpiResult& aResult,
      const CmpiObjectPath& aCop,
      const char** aPropertiesPP);
     
    CmpiStatus getInstance (
     const CmpiContext& aContext,
     CmpiResult& aResult,
     const CmpiObjectPath& aCop,
     const char** aPropertiesPP);
    
    virtual CmpiStatus createInstance (
     const CmpiContext& aContext,
     CmpiResult& aResult,
     const CmpiObjectPath& aCop,
     const CmpiInstance& anInstance);
    
    virtual CmpiStatus setInstance (
     const CmpiContext& aContext,
     CmpiResult& aResult,
     const CmpiObjectPath& aCop,
     const CmpiInstance& anInstance,
     const char** aPropertiesPP);
    
    virtual CmpiStatus deleteInstance (
     const CmpiContext& aContext,
     CmpiResult& aResult,
     const CmpiObjectPath& aCop);
     
    /*
    virtual CmpiStatus execQuery(
     const CmpiContext& aContext,
     CmpiResult& aResult,
     const CmpiObjectPath& aCop,
     const char* aLanguageP,
     const char* aQueryP);
    */  
      
    virtual CmpiStatus invokeMethod(
     const CmpiContext& aContext,
     CmpiResult& aResult,
     const CmpiObjectPath& aCop,
     const char* aMethodNameP,
     const CmpiArgs& anInputArgSet,
     CmpiArgs& anOutputArgSet);
 
  };

}

#endif

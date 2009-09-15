// =======================================================================
// CmpiLinux_SambaPrinterAdminForPrinterProvider.h
//     created on Fri, 23 Jun 2006 using ECUTE 2.2.1
//
// Copyright (c) 2006, 2009, International Business Machines
//
// THIS FILE IS PROVIDED UNDER THE TERMS OF THE ECLIPSE PUBLIC LICENSE
// ("AGREEMENT"). ANY USE, REPRODUCTION OR DISTRIBUTION OF THIS FILE
// CONSTITUTES RECIPIENTS ACCEPTANCE OF THE AGREEMENT.
//
// You can obtain a current copy of the Eclipse Public License from
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
#ifndef CmpiLinux_SambaPrinterAdminForPrinterProvider_h
#define CmpiLinux_SambaPrinterAdminForPrinterProvider_h



#include "CmpiInstanceMI.h"
#include "CmpiMethodMI.h"
#include "Linux_SambaPrinterAdminForPrinterFactory.h"
#include "CmpiAssociationMI.h"


namespace genProvider{

  class CmpiLinux_SambaPrinterAdminForPrinterProvider : 
    public CmpiInstanceMI,
    public CmpiMethodMI, public CmpiAssociationMI {	
	
	  private:
	  Linux_SambaPrinterAdminForPrinterInterface* m_interfaceP;
	  CmpiBroker m_cmpiBroker;
	    
	  private:

    void completeInstance(
      const Linux_SambaPrinterAdminForPrinterInstanceName& anInstanceNameP,
      CmpiInstance& aCmpiInstance,
      const CmpiContext& aContext);
	
    void copyShadowData(
      const CmpiInstance* aSourceCmpiInstanceP,
      CmpiInstance* aTargetCmpiInstanceP);
	
    CmpiInstance* getShadowInstance(
      const CmpiInstance& aCmpiInstance,
      const Linux_SambaPrinterAdminForPrinterInstanceName& anInstanceName);
	
    void removeDanglingShadowInstances (
      const Linux_SambaPrinterAdminForPrinterInstanceNameEnumeration& anInstanceNameEnumeration);
	  
	  public:

    CmpiLinux_SambaPrinterAdminForPrinterProvider(
      const CmpiBroker& aBroker,
      const CmpiContext& aContext);

    ~CmpiLinux_SambaPrinterAdminForPrinterProvider();
	
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

    CmpiStatus associationLogic(
      const CmpiContext& aContext, 
	    CmpiResult& aResult,
	    const CmpiObjectPath& aCop,
	    const int instances,
	    const int references,
      const char** aPropertiesPP=0);
	
	  CmpiStatus associators (
      const CmpiContext& aContext,
      CmpiResult& aResult,
      const CmpiObjectPath& aCop,
	    const char* anAssocClassNameP, 
	    const char* aResultClassNameP,
      const char* aRoleNameP,
      const char* aResultRoleNameP,
      const char** aPropertiesPP);
    
    CmpiStatus associatorNames (
      const CmpiContext & aContext,
      CmpiResult & aResult,
      const CmpiObjectPath& aCop,
      const char* anAssocClassNameP,
      const char* aResultClassNameP,
      const char* aRoleNameP, 
      const char* aResultRoleNameP);
    
    CmpiStatus references (
      const CmpiContext& aContext,
      CmpiResult& aResult,
      const CmpiObjectPath& aCop,
      const char* anAssocClassNameP,
      const char* aRoleNameP,
      const char** aPropertiesPP);
    
    CmpiStatus referenceNames (
      const CmpiContext& aContext,
      CmpiResult& aResult,
      const CmpiObjectPath& aCop,
      const char* anAssocClassNameP,
      const char* aRoleNameP); 
  };

}

#endif

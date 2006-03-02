// =======================================================================
// Linux_SambaForceUserForGlobalInstance.h
//     created on Fri, 24 Feb 2006 using ECUTE
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
//                Rodrigo Ceron    <rceron@br.ibm.com>
//                Wolfgang Taphorn <taphorn@de.ibm.com>
//
// =======================================================================
//
// 
#ifndef Linux_SambaForceUserForGlobalInstance_h
#define Linux_SambaForceUserForGlobalInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaForceUserForGlobalInstanceName.h"


namespace genProvider {

  class Linux_SambaForceUserForGlobalInstance {
       
    private:
    void init();
    void init(const Linux_SambaForceUserForGlobalInstance& anInstance);
    void reset();
       
    Linux_SambaForceUserForGlobalInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaForceUserForGlobalInstance();
    Linux_SambaForceUserForGlobalInstance(
      const Linux_SambaForceUserForGlobalInstance& anInstance);
    Linux_SambaForceUserForGlobalInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaForceUserForGlobalInstance();
       
    Linux_SambaForceUserForGlobalInstance& operator=(
      const Linux_SambaForceUserForGlobalInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaForceUserForGlobalInstanceName& anInstanceName);        
    const Linux_SambaForceUserForGlobalInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaForceUserForGlobalInstanceEnumerationElement {

    Linux_SambaForceUserForGlobalInstance* m_elementP;
    Linux_SambaForceUserForGlobalInstanceEnumerationElement* m_nextP;

    Linux_SambaForceUserForGlobalInstanceEnumerationElement();
    ~Linux_SambaForceUserForGlobalInstanceEnumerationElement();  

  };
  

  class Linux_SambaForceUserForGlobalInstanceEnumeration {

    private:
    Linux_SambaForceUserForGlobalInstanceEnumerationElement* m_firstElementP;
    Linux_SambaForceUserForGlobalInstanceEnumerationElement* m_currentElementP;
    Linux_SambaForceUserForGlobalInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaForceUserForGlobalInstanceEnumeration();
    Linux_SambaForceUserForGlobalInstanceEnumeration(
      const Linux_SambaForceUserForGlobalInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaForceUserForGlobalInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaForceUserForGlobalInstance& getNext();
    int getSize() const;
    const Linux_SambaForceUserForGlobalInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaForceUserForGlobalInstance& anInstance);

  };

}

#endif

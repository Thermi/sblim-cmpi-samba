// =======================================================================
// Linux_SambaForceUserForGlobalManualInstance.h
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
#ifndef Linux_SambaForceUserForGlobalManualInstance_h
#define Linux_SambaForceUserForGlobalManualInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaForceUserForGlobalInstanceName.h"


namespace genProvider {

  class Linux_SambaForceUserForGlobalManualInstance {
       
    private:
    void init();
    void init(const Linux_SambaForceUserForGlobalManualInstance& anInstance);
    void reset();
       
    Linux_SambaForceUserForGlobalInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaForceUserForGlobalManualInstance();
    Linux_SambaForceUserForGlobalManualInstance(
      const Linux_SambaForceUserForGlobalManualInstance& anInstance);
    Linux_SambaForceUserForGlobalManualInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaForceUserForGlobalManualInstance();
       
    Linux_SambaForceUserForGlobalManualInstance& operator=(
      const Linux_SambaForceUserForGlobalManualInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaForceUserForGlobalInstanceName& anInstanceName);        
    const Linux_SambaForceUserForGlobalInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaForceUserForGlobalManualInstanceEnumerationElement {

    Linux_SambaForceUserForGlobalManualInstance* m_elementP;
    Linux_SambaForceUserForGlobalManualInstanceEnumerationElement* m_nextP;

    Linux_SambaForceUserForGlobalManualInstanceEnumerationElement();
    ~Linux_SambaForceUserForGlobalManualInstanceEnumerationElement();  

  };
  

  class Linux_SambaForceUserForGlobalManualInstanceEnumeration {

    private:
    Linux_SambaForceUserForGlobalManualInstanceEnumerationElement* m_firstElementP;
    Linux_SambaForceUserForGlobalManualInstanceEnumerationElement* m_currentElementP;
    Linux_SambaForceUserForGlobalManualInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaForceUserForGlobalManualInstanceEnumeration();
    Linux_SambaForceUserForGlobalManualInstanceEnumeration(
      const Linux_SambaForceUserForGlobalManualInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaForceUserForGlobalManualInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaForceUserForGlobalManualInstance& getNext();
    int getSize() const;
    const Linux_SambaForceUserForGlobalManualInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaForceUserForGlobalManualInstance& anInstance);

  };

}

#endif

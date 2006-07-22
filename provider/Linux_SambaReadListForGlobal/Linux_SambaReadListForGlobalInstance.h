// =======================================================================
// Linux_SambaReadListForGlobalInstance.h
//     created on Fri, 23 Jun 2006 using ECUTE 2.2.1
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
#ifndef Linux_SambaReadListForGlobalInstance_h
#define Linux_SambaReadListForGlobalInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaReadListForGlobalInstanceName.h"


namespace genProvider {

  class Linux_SambaReadListForGlobalInstance {
       
    private:
    void init();
    void init(const Linux_SambaReadListForGlobalInstance& anInstance);
    void reset();
       
    Linux_SambaReadListForGlobalInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaReadListForGlobalInstance();
    Linux_SambaReadListForGlobalInstance(
      const Linux_SambaReadListForGlobalInstance& anInstance);
    Linux_SambaReadListForGlobalInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaReadListForGlobalInstance();
       
    Linux_SambaReadListForGlobalInstance& operator=(
      const Linux_SambaReadListForGlobalInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaReadListForGlobalInstanceName& anInstanceName);        
    const Linux_SambaReadListForGlobalInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaReadListForGlobalInstanceEnumerationElement {

    Linux_SambaReadListForGlobalInstance* m_elementP;
    Linux_SambaReadListForGlobalInstanceEnumerationElement* m_nextP;

    Linux_SambaReadListForGlobalInstanceEnumerationElement();
    ~Linux_SambaReadListForGlobalInstanceEnumerationElement();  

  };
  

  class Linux_SambaReadListForGlobalInstanceEnumeration {

    private:
    Linux_SambaReadListForGlobalInstanceEnumerationElement* m_firstElementP;
    Linux_SambaReadListForGlobalInstanceEnumerationElement* m_currentElementP;
    Linux_SambaReadListForGlobalInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaReadListForGlobalInstanceEnumeration();
    Linux_SambaReadListForGlobalInstanceEnumeration(
      const Linux_SambaReadListForGlobalInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaReadListForGlobalInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaReadListForGlobalInstance& getNext();
    int getSize() const;
    const Linux_SambaReadListForGlobalInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaReadListForGlobalInstance& anInstance);

  };

}

#endif

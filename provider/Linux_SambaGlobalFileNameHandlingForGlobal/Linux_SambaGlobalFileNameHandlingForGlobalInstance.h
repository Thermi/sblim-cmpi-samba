// =======================================================================
// Linux_SambaGlobalFileNameHandlingForGlobalInstance.h
//     created on Fri, 23 Jun 2006 using ECUTE 2.2.1
//
// Copyright (c) 2006, 2009, International Business Machines
//
// THIS FILE IS PROVIDED UNDER THE TERMS OF THE ECLIPSE PUBLIC LICENSE
// ("AGREEMENT"). ANY USE, REPRODUCTION OR DISTRIBUTION OF THIS FILE
// CONSTITUTES RECIPIENTS ACCEPTANCE OF THE AGREEMENT.
//
// You can obtain a current copy of the Eclipse Public License from
// http://www.opensource.org/licenses/eclipse-1.0.php
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
#ifndef Linux_SambaGlobalFileNameHandlingForGlobalInstance_h
#define Linux_SambaGlobalFileNameHandlingForGlobalInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaGlobalFileNameHandlingForGlobalInstanceName.h"


namespace genProvider {

  class Linux_SambaGlobalFileNameHandlingForGlobalInstance {
       
    private:
    void init();
    void init(const Linux_SambaGlobalFileNameHandlingForGlobalInstance& anInstance);
    void reset();
       
    Linux_SambaGlobalFileNameHandlingForGlobalInstanceName m_instanceName;
    CMPIUint16 m_IsCurrent;
    CMPIUint16 m_IsDefault;
       
    struct isSetType{
      unsigned int instanceName:1;
      unsigned int IsCurrent:1;
      unsigned int IsDefault:1;

    } isSet;
    
    public:
    Linux_SambaGlobalFileNameHandlingForGlobalInstance();
    Linux_SambaGlobalFileNameHandlingForGlobalInstance(
      const Linux_SambaGlobalFileNameHandlingForGlobalInstance& anInstance);
    Linux_SambaGlobalFileNameHandlingForGlobalInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaGlobalFileNameHandlingForGlobalInstance();
       
    Linux_SambaGlobalFileNameHandlingForGlobalInstance& operator=(
      const Linux_SambaGlobalFileNameHandlingForGlobalInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaGlobalFileNameHandlingForGlobalInstanceName& anInstanceName);        
    const Linux_SambaGlobalFileNameHandlingForGlobalInstanceName& getInstanceName() const;

    unsigned int isIsCurrentSet() const;
    void setIsCurrent(const CMPIUint16 aValue);
    const CMPIUint16 getIsCurrent() const;

    unsigned int isIsDefaultSet() const;
    void setIsDefault(const CMPIUint16 aValue);
    const CMPIUint16 getIsDefault() const;


  };
  
  struct Linux_SambaGlobalFileNameHandlingForGlobalInstanceEnumerationElement {

    Linux_SambaGlobalFileNameHandlingForGlobalInstance* m_elementP;
    Linux_SambaGlobalFileNameHandlingForGlobalInstanceEnumerationElement* m_nextP;

    Linux_SambaGlobalFileNameHandlingForGlobalInstanceEnumerationElement();
    ~Linux_SambaGlobalFileNameHandlingForGlobalInstanceEnumerationElement();  

  };
  

  class Linux_SambaGlobalFileNameHandlingForGlobalInstanceEnumeration {

    private:
    Linux_SambaGlobalFileNameHandlingForGlobalInstanceEnumerationElement* m_firstElementP;
    Linux_SambaGlobalFileNameHandlingForGlobalInstanceEnumerationElement* m_currentElementP;
    Linux_SambaGlobalFileNameHandlingForGlobalInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaGlobalFileNameHandlingForGlobalInstanceEnumeration();
    Linux_SambaGlobalFileNameHandlingForGlobalInstanceEnumeration(
      const Linux_SambaGlobalFileNameHandlingForGlobalInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaGlobalFileNameHandlingForGlobalInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaGlobalFileNameHandlingForGlobalInstance& getNext();
    int getSize() const;
    const Linux_SambaGlobalFileNameHandlingForGlobalInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaGlobalFileNameHandlingForGlobalInstance& anInstance);

  };

}

#endif

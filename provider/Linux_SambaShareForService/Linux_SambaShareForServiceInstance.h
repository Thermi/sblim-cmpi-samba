// =======================================================================
// Linux_SambaShareForServiceInstance.h
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
#ifndef Linux_SambaShareForServiceInstance_h
#define Linux_SambaShareForServiceInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaShareForServiceInstanceName.h"


namespace genProvider {

  class Linux_SambaShareForServiceInstance {
       
    private:
    void init();
    void init(const Linux_SambaShareForServiceInstance& anInstance);
    void reset();
       
    Linux_SambaShareForServiceInstanceName m_instanceName;
    CMPIUint16 m_IsCurrent;
    CMPIUint16 m_IsDefault;
       
    struct isSetType{
      unsigned int instanceName:1;
      unsigned int IsCurrent:1;
      unsigned int IsDefault:1;

    } isSet;
    
    public:
    Linux_SambaShareForServiceInstance();
    Linux_SambaShareForServiceInstance(
      const Linux_SambaShareForServiceInstance& anInstance);
    Linux_SambaShareForServiceInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaShareForServiceInstance();
       
    Linux_SambaShareForServiceInstance& operator=(
      const Linux_SambaShareForServiceInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaShareForServiceInstanceName& anInstanceName);        
    const Linux_SambaShareForServiceInstanceName& getInstanceName() const;

    unsigned int isIsCurrentSet() const;
    void setIsCurrent(const CMPIUint16 aValue);
    const CMPIUint16 getIsCurrent() const;

    unsigned int isIsDefaultSet() const;
    void setIsDefault(const CMPIUint16 aValue);
    const CMPIUint16 getIsDefault() const;


  };
  
  struct Linux_SambaShareForServiceInstanceEnumerationElement {

    Linux_SambaShareForServiceInstance* m_elementP;
    Linux_SambaShareForServiceInstanceEnumerationElement* m_nextP;

    Linux_SambaShareForServiceInstanceEnumerationElement();
    ~Linux_SambaShareForServiceInstanceEnumerationElement();  

  };
  

  class Linux_SambaShareForServiceInstanceEnumeration {

    private:
    Linux_SambaShareForServiceInstanceEnumerationElement* m_firstElementP;
    Linux_SambaShareForServiceInstanceEnumerationElement* m_currentElementP;
    Linux_SambaShareForServiceInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaShareForServiceInstanceEnumeration();
    Linux_SambaShareForServiceInstanceEnumeration(
      const Linux_SambaShareForServiceInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaShareForServiceInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaShareForServiceInstance& getNext();
    int getSize() const;
    const Linux_SambaShareForServiceInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaShareForServiceInstance& anInstance);

  };

}

#endif

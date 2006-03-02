// =======================================================================
// Linux_SambaServiceRepositoryInstance.h
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
#ifndef Linux_SambaServiceRepositoryInstance_h
#define Linux_SambaServiceRepositoryInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaServiceInstanceName.h"


namespace genProvider {

  class Linux_SambaServiceRepositoryInstance {
       
    private:
    void init();
    void init(const Linux_SambaServiceRepositoryInstance& anInstance);
    void reset();
       
    Linux_SambaServiceInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaServiceRepositoryInstance();
    Linux_SambaServiceRepositoryInstance(
      const Linux_SambaServiceRepositoryInstance& anInstance);
    Linux_SambaServiceRepositoryInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaServiceRepositoryInstance();
       
    Linux_SambaServiceRepositoryInstance& operator=(
      const Linux_SambaServiceRepositoryInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaServiceInstanceName& anInstanceName);        
    const Linux_SambaServiceInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaServiceRepositoryInstanceEnumerationElement {

    Linux_SambaServiceRepositoryInstance* m_elementP;
    Linux_SambaServiceRepositoryInstanceEnumerationElement* m_nextP;

    Linux_SambaServiceRepositoryInstanceEnumerationElement();
    ~Linux_SambaServiceRepositoryInstanceEnumerationElement();  

  };
  

  class Linux_SambaServiceRepositoryInstanceEnumeration {

    private:
    Linux_SambaServiceRepositoryInstanceEnumerationElement* m_firstElementP;
    Linux_SambaServiceRepositoryInstanceEnumerationElement* m_currentElementP;
    Linux_SambaServiceRepositoryInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaServiceRepositoryInstanceEnumeration();
    Linux_SambaServiceRepositoryInstanceEnumeration(
      const Linux_SambaServiceRepositoryInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaServiceRepositoryInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaServiceRepositoryInstance& getNext();
    int getSize() const;
    const Linux_SambaServiceRepositoryInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaServiceRepositoryInstance& anInstance);

  };

}

#endif

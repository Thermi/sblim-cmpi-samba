// =======================================================================
// Linux_SambaUserRepositoryInstance.h
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
#ifndef Linux_SambaUserRepositoryInstance_h
#define Linux_SambaUserRepositoryInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaUserInstanceName.h"


namespace genProvider {

  class Linux_SambaUserRepositoryInstance {
       
    private:
    void init();
    void init(const Linux_SambaUserRepositoryInstance& anInstance);
    void reset();
       
    Linux_SambaUserInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaUserRepositoryInstance();
    Linux_SambaUserRepositoryInstance(
      const Linux_SambaUserRepositoryInstance& anInstance);
    Linux_SambaUserRepositoryInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaUserRepositoryInstance();
       
    Linux_SambaUserRepositoryInstance& operator=(
      const Linux_SambaUserRepositoryInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaUserInstanceName& anInstanceName);        
    const Linux_SambaUserInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaUserRepositoryInstanceEnumerationElement {

    Linux_SambaUserRepositoryInstance* m_elementP;
    Linux_SambaUserRepositoryInstanceEnumerationElement* m_nextP;

    Linux_SambaUserRepositoryInstanceEnumerationElement();
    ~Linux_SambaUserRepositoryInstanceEnumerationElement();  

  };
  

  class Linux_SambaUserRepositoryInstanceEnumeration {

    private:
    Linux_SambaUserRepositoryInstanceEnumerationElement* m_firstElementP;
    Linux_SambaUserRepositoryInstanceEnumerationElement* m_currentElementP;
    Linux_SambaUserRepositoryInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaUserRepositoryInstanceEnumeration();
    Linux_SambaUserRepositoryInstanceEnumeration(
      const Linux_SambaUserRepositoryInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaUserRepositoryInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaUserRepositoryInstance& getNext();
    int getSize() const;
    const Linux_SambaUserRepositoryInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaUserRepositoryInstance& anInstance);

  };

}

#endif

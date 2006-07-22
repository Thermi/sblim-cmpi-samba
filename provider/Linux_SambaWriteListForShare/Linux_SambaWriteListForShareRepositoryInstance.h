// =======================================================================
// Linux_SambaWriteListForShareRepositoryInstance.h
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
#ifndef Linux_SambaWriteListForShareRepositoryInstance_h
#define Linux_SambaWriteListForShareRepositoryInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaWriteListForShareInstanceName.h"


namespace genProvider {

  class Linux_SambaWriteListForShareRepositoryInstance {
       
    private:
    void init();
    void init(const Linux_SambaWriteListForShareRepositoryInstance& anInstance);
    void reset();
       
    Linux_SambaWriteListForShareInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaWriteListForShareRepositoryInstance();
    Linux_SambaWriteListForShareRepositoryInstance(
      const Linux_SambaWriteListForShareRepositoryInstance& anInstance);
    Linux_SambaWriteListForShareRepositoryInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaWriteListForShareRepositoryInstance();
       
    Linux_SambaWriteListForShareRepositoryInstance& operator=(
      const Linux_SambaWriteListForShareRepositoryInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaWriteListForShareInstanceName& anInstanceName);        
    const Linux_SambaWriteListForShareInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaWriteListForShareRepositoryInstanceEnumerationElement {

    Linux_SambaWriteListForShareRepositoryInstance* m_elementP;
    Linux_SambaWriteListForShareRepositoryInstanceEnumerationElement* m_nextP;

    Linux_SambaWriteListForShareRepositoryInstanceEnumerationElement();
    ~Linux_SambaWriteListForShareRepositoryInstanceEnumerationElement();  

  };
  

  class Linux_SambaWriteListForShareRepositoryInstanceEnumeration {

    private:
    Linux_SambaWriteListForShareRepositoryInstanceEnumerationElement* m_firstElementP;
    Linux_SambaWriteListForShareRepositoryInstanceEnumerationElement* m_currentElementP;
    Linux_SambaWriteListForShareRepositoryInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaWriteListForShareRepositoryInstanceEnumeration();
    Linux_SambaWriteListForShareRepositoryInstanceEnumeration(
      const Linux_SambaWriteListForShareRepositoryInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaWriteListForShareRepositoryInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaWriteListForShareRepositoryInstance& getNext();
    int getSize() const;
    const Linux_SambaWriteListForShareRepositoryInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaWriteListForShareRepositoryInstance& anInstance);

  };

}

#endif

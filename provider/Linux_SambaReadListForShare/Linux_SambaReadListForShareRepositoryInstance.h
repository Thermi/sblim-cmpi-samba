// =======================================================================
// Linux_SambaReadListForShareRepositoryInstance.h
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
#ifndef Linux_SambaReadListForShareRepositoryInstance_h
#define Linux_SambaReadListForShareRepositoryInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaReadListForShareInstanceName.h"


namespace genProvider {

  class Linux_SambaReadListForShareRepositoryInstance {
       
    private:
    void init();
    void init(const Linux_SambaReadListForShareRepositoryInstance& anInstance);
    void reset();
       
    Linux_SambaReadListForShareInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaReadListForShareRepositoryInstance();
    Linux_SambaReadListForShareRepositoryInstance(
      const Linux_SambaReadListForShareRepositoryInstance& anInstance);
    Linux_SambaReadListForShareRepositoryInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaReadListForShareRepositoryInstance();
       
    Linux_SambaReadListForShareRepositoryInstance& operator=(
      const Linux_SambaReadListForShareRepositoryInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaReadListForShareInstanceName& anInstanceName);        
    const Linux_SambaReadListForShareInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaReadListForShareRepositoryInstanceEnumerationElement {

    Linux_SambaReadListForShareRepositoryInstance* m_elementP;
    Linux_SambaReadListForShareRepositoryInstanceEnumerationElement* m_nextP;

    Linux_SambaReadListForShareRepositoryInstanceEnumerationElement();
    ~Linux_SambaReadListForShareRepositoryInstanceEnumerationElement();  

  };
  

  class Linux_SambaReadListForShareRepositoryInstanceEnumeration {

    private:
    Linux_SambaReadListForShareRepositoryInstanceEnumerationElement* m_firstElementP;
    Linux_SambaReadListForShareRepositoryInstanceEnumerationElement* m_currentElementP;
    Linux_SambaReadListForShareRepositoryInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaReadListForShareRepositoryInstanceEnumeration();
    Linux_SambaReadListForShareRepositoryInstanceEnumeration(
      const Linux_SambaReadListForShareRepositoryInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaReadListForShareRepositoryInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaReadListForShareRepositoryInstance& getNext();
    int getSize() const;
    const Linux_SambaReadListForShareRepositoryInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaReadListForShareRepositoryInstance& anInstance);

  };

}

#endif

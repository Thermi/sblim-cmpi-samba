// =======================================================================
// Linux_SambaGlobalFileNameHandlingOptionsRepositoryInstance.h
//     created on Mon, 26 Jun 2006 using ECUTE 2.2.1
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
#ifndef Linux_SambaGlobalFileNameHandlingOptionsRepositoryInstance_h
#define Linux_SambaGlobalFileNameHandlingOptionsRepositoryInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaGlobalFileNameHandlingOptionsInstanceName.h"


namespace genProvider {

  class Linux_SambaGlobalFileNameHandlingOptionsRepositoryInstance {
       
    private:
    void init();
    void init(const Linux_SambaGlobalFileNameHandlingOptionsRepositoryInstance& anInstance);
    void reset();
       
    Linux_SambaGlobalFileNameHandlingOptionsInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaGlobalFileNameHandlingOptionsRepositoryInstance();
    Linux_SambaGlobalFileNameHandlingOptionsRepositoryInstance(
      const Linux_SambaGlobalFileNameHandlingOptionsRepositoryInstance& anInstance);
    Linux_SambaGlobalFileNameHandlingOptionsRepositoryInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaGlobalFileNameHandlingOptionsRepositoryInstance();
       
    Linux_SambaGlobalFileNameHandlingOptionsRepositoryInstance& operator=(
      const Linux_SambaGlobalFileNameHandlingOptionsRepositoryInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaGlobalFileNameHandlingOptionsInstanceName& anInstanceName);        
    const Linux_SambaGlobalFileNameHandlingOptionsInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaGlobalFileNameHandlingOptionsRepositoryInstanceEnumerationElement {

    Linux_SambaGlobalFileNameHandlingOptionsRepositoryInstance* m_elementP;
    Linux_SambaGlobalFileNameHandlingOptionsRepositoryInstanceEnumerationElement* m_nextP;

    Linux_SambaGlobalFileNameHandlingOptionsRepositoryInstanceEnumerationElement();
    ~Linux_SambaGlobalFileNameHandlingOptionsRepositoryInstanceEnumerationElement();  

  };
  

  class Linux_SambaGlobalFileNameHandlingOptionsRepositoryInstanceEnumeration {

    private:
    Linux_SambaGlobalFileNameHandlingOptionsRepositoryInstanceEnumerationElement* m_firstElementP;
    Linux_SambaGlobalFileNameHandlingOptionsRepositoryInstanceEnumerationElement* m_currentElementP;
    Linux_SambaGlobalFileNameHandlingOptionsRepositoryInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaGlobalFileNameHandlingOptionsRepositoryInstanceEnumeration();
    Linux_SambaGlobalFileNameHandlingOptionsRepositoryInstanceEnumeration(
      const Linux_SambaGlobalFileNameHandlingOptionsRepositoryInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaGlobalFileNameHandlingOptionsRepositoryInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaGlobalFileNameHandlingOptionsRepositoryInstance& getNext();
    int getSize() const;
    const Linux_SambaGlobalFileNameHandlingOptionsRepositoryInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaGlobalFileNameHandlingOptionsRepositoryInstance& anInstance);

  };

}

#endif

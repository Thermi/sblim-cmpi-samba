// =======================================================================
// Linux_SambaGlobalProtocolOptionsRepositoryInstance.h
//     created on Mon, 26 Jun 2006 using ECUTE 2.2.1
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
#ifndef Linux_SambaGlobalProtocolOptionsRepositoryInstance_h
#define Linux_SambaGlobalProtocolOptionsRepositoryInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaGlobalProtocolOptionsInstanceName.h"


namespace genProvider {

  class Linux_SambaGlobalProtocolOptionsRepositoryInstance {
       
    private:
    void init();
    void init(const Linux_SambaGlobalProtocolOptionsRepositoryInstance& anInstance);
    void reset();
       
    Linux_SambaGlobalProtocolOptionsInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaGlobalProtocolOptionsRepositoryInstance();
    Linux_SambaGlobalProtocolOptionsRepositoryInstance(
      const Linux_SambaGlobalProtocolOptionsRepositoryInstance& anInstance);
    Linux_SambaGlobalProtocolOptionsRepositoryInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaGlobalProtocolOptionsRepositoryInstance();
       
    Linux_SambaGlobalProtocolOptionsRepositoryInstance& operator=(
      const Linux_SambaGlobalProtocolOptionsRepositoryInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaGlobalProtocolOptionsInstanceName& anInstanceName);        
    const Linux_SambaGlobalProtocolOptionsInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaGlobalProtocolOptionsRepositoryInstanceEnumerationElement {

    Linux_SambaGlobalProtocolOptionsRepositoryInstance* m_elementP;
    Linux_SambaGlobalProtocolOptionsRepositoryInstanceEnumerationElement* m_nextP;

    Linux_SambaGlobalProtocolOptionsRepositoryInstanceEnumerationElement();
    ~Linux_SambaGlobalProtocolOptionsRepositoryInstanceEnumerationElement();  

  };
  

  class Linux_SambaGlobalProtocolOptionsRepositoryInstanceEnumeration {

    private:
    Linux_SambaGlobalProtocolOptionsRepositoryInstanceEnumerationElement* m_firstElementP;
    Linux_SambaGlobalProtocolOptionsRepositoryInstanceEnumerationElement* m_currentElementP;
    Linux_SambaGlobalProtocolOptionsRepositoryInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaGlobalProtocolOptionsRepositoryInstanceEnumeration();
    Linux_SambaGlobalProtocolOptionsRepositoryInstanceEnumeration(
      const Linux_SambaGlobalProtocolOptionsRepositoryInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaGlobalProtocolOptionsRepositoryInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaGlobalProtocolOptionsRepositoryInstance& getNext();
    int getSize() const;
    const Linux_SambaGlobalProtocolOptionsRepositoryInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaGlobalProtocolOptionsRepositoryInstance& anInstance);

  };

}

#endif

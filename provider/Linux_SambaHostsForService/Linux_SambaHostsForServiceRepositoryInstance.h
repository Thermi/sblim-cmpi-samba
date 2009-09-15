// =======================================================================
// Linux_SambaHostsForServiceRepositoryInstance.h
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
#ifndef Linux_SambaHostsForServiceRepositoryInstance_h
#define Linux_SambaHostsForServiceRepositoryInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaHostsForServiceInstanceName.h"


namespace genProvider {

  class Linux_SambaHostsForServiceRepositoryInstance {
       
    private:
    void init();
    void init(const Linux_SambaHostsForServiceRepositoryInstance& anInstance);
    void reset();
       
    Linux_SambaHostsForServiceInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaHostsForServiceRepositoryInstance();
    Linux_SambaHostsForServiceRepositoryInstance(
      const Linux_SambaHostsForServiceRepositoryInstance& anInstance);
    Linux_SambaHostsForServiceRepositoryInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaHostsForServiceRepositoryInstance();
       
    Linux_SambaHostsForServiceRepositoryInstance& operator=(
      const Linux_SambaHostsForServiceRepositoryInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaHostsForServiceInstanceName& anInstanceName);        
    const Linux_SambaHostsForServiceInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaHostsForServiceRepositoryInstanceEnumerationElement {

    Linux_SambaHostsForServiceRepositoryInstance* m_elementP;
    Linux_SambaHostsForServiceRepositoryInstanceEnumerationElement* m_nextP;

    Linux_SambaHostsForServiceRepositoryInstanceEnumerationElement();
    ~Linux_SambaHostsForServiceRepositoryInstanceEnumerationElement();  

  };
  

  class Linux_SambaHostsForServiceRepositoryInstanceEnumeration {

    private:
    Linux_SambaHostsForServiceRepositoryInstanceEnumerationElement* m_firstElementP;
    Linux_SambaHostsForServiceRepositoryInstanceEnumerationElement* m_currentElementP;
    Linux_SambaHostsForServiceRepositoryInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaHostsForServiceRepositoryInstanceEnumeration();
    Linux_SambaHostsForServiceRepositoryInstanceEnumeration(
      const Linux_SambaHostsForServiceRepositoryInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaHostsForServiceRepositoryInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaHostsForServiceRepositoryInstance& getNext();
    int getSize() const;
    const Linux_SambaHostsForServiceRepositoryInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaHostsForServiceRepositoryInstance& anInstance);

  };

}

#endif

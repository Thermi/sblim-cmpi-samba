// =======================================================================
// Linux_SambaHostsForServiceInstance.h
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
#ifndef Linux_SambaHostsForServiceInstance_h
#define Linux_SambaHostsForServiceInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaHostsForServiceInstanceName.h"


namespace genProvider {

  class Linux_SambaHostsForServiceInstance {
       
    private:
    void init();
    void init(const Linux_SambaHostsForServiceInstance& anInstance);
    void reset();
       
    Linux_SambaHostsForServiceInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaHostsForServiceInstance();
    Linux_SambaHostsForServiceInstance(
      const Linux_SambaHostsForServiceInstance& anInstance);
    Linux_SambaHostsForServiceInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaHostsForServiceInstance();
       
    Linux_SambaHostsForServiceInstance& operator=(
      const Linux_SambaHostsForServiceInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaHostsForServiceInstanceName& anInstanceName);        
    const Linux_SambaHostsForServiceInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaHostsForServiceInstanceEnumerationElement {

    Linux_SambaHostsForServiceInstance* m_elementP;
    Linux_SambaHostsForServiceInstanceEnumerationElement* m_nextP;

    Linux_SambaHostsForServiceInstanceEnumerationElement();
    ~Linux_SambaHostsForServiceInstanceEnumerationElement();  

  };
  

  class Linux_SambaHostsForServiceInstanceEnumeration {

    private:
    Linux_SambaHostsForServiceInstanceEnumerationElement* m_firstElementP;
    Linux_SambaHostsForServiceInstanceEnumerationElement* m_currentElementP;
    Linux_SambaHostsForServiceInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaHostsForServiceInstanceEnumeration();
    Linux_SambaHostsForServiceInstanceEnumeration(
      const Linux_SambaHostsForServiceInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaHostsForServiceInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaHostsForServiceInstance& getNext();
    int getSize() const;
    const Linux_SambaHostsForServiceInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaHostsForServiceInstance& anInstance);

  };

}

#endif

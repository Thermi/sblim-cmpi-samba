// =======================================================================
// Linux_SambaHostsForServiceManualInstance.h
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
#ifndef Linux_SambaHostsForServiceManualInstance_h
#define Linux_SambaHostsForServiceManualInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaHostsForServiceInstanceName.h"


namespace genProvider {

  class Linux_SambaHostsForServiceManualInstance {
       
    private:
    void init();
    void init(const Linux_SambaHostsForServiceManualInstance& anInstance);
    void reset();
       
    Linux_SambaHostsForServiceInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaHostsForServiceManualInstance();
    Linux_SambaHostsForServiceManualInstance(
      const Linux_SambaHostsForServiceManualInstance& anInstance);
    Linux_SambaHostsForServiceManualInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaHostsForServiceManualInstance();
       
    Linux_SambaHostsForServiceManualInstance& operator=(
      const Linux_SambaHostsForServiceManualInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaHostsForServiceInstanceName& anInstanceName);        
    const Linux_SambaHostsForServiceInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaHostsForServiceManualInstanceEnumerationElement {

    Linux_SambaHostsForServiceManualInstance* m_elementP;
    Linux_SambaHostsForServiceManualInstanceEnumerationElement* m_nextP;

    Linux_SambaHostsForServiceManualInstanceEnumerationElement();
    ~Linux_SambaHostsForServiceManualInstanceEnumerationElement();  

  };
  

  class Linux_SambaHostsForServiceManualInstanceEnumeration {

    private:
    Linux_SambaHostsForServiceManualInstanceEnumerationElement* m_firstElementP;
    Linux_SambaHostsForServiceManualInstanceEnumerationElement* m_currentElementP;
    Linux_SambaHostsForServiceManualInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaHostsForServiceManualInstanceEnumeration();
    Linux_SambaHostsForServiceManualInstanceEnumeration(
      const Linux_SambaHostsForServiceManualInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaHostsForServiceManualInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaHostsForServiceManualInstance& getNext();
    int getSize() const;
    const Linux_SambaHostsForServiceManualInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaHostsForServiceManualInstance& anInstance);

  };

}

#endif

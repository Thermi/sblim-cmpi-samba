// =======================================================================
// Linux_SambaGroupForUserInstance.h
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
#ifndef Linux_SambaGroupForUserInstance_h
#define Linux_SambaGroupForUserInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaGroupForUserInstanceName.h"


namespace genProvider {

  class Linux_SambaGroupForUserInstance {
       
    private:
    void init();
    void init(const Linux_SambaGroupForUserInstance& anInstance);
    void reset();
       
    Linux_SambaGroupForUserInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaGroupForUserInstance();
    Linux_SambaGroupForUserInstance(
      const Linux_SambaGroupForUserInstance& anInstance);
    Linux_SambaGroupForUserInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaGroupForUserInstance();
       
    Linux_SambaGroupForUserInstance& operator=(
      const Linux_SambaGroupForUserInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaGroupForUserInstanceName& anInstanceName);        
    const Linux_SambaGroupForUserInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaGroupForUserInstanceEnumerationElement {

    Linux_SambaGroupForUserInstance* m_elementP;
    Linux_SambaGroupForUserInstanceEnumerationElement* m_nextP;

    Linux_SambaGroupForUserInstanceEnumerationElement();
    ~Linux_SambaGroupForUserInstanceEnumerationElement();  

  };
  

  class Linux_SambaGroupForUserInstanceEnumeration {

    private:
    Linux_SambaGroupForUserInstanceEnumerationElement* m_firstElementP;
    Linux_SambaGroupForUserInstanceEnumerationElement* m_currentElementP;
    Linux_SambaGroupForUserInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaGroupForUserInstanceEnumeration();
    Linux_SambaGroupForUserInstanceEnumeration(
      const Linux_SambaGroupForUserInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaGroupForUserInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaGroupForUserInstance& getNext();
    int getSize() const;
    const Linux_SambaGroupForUserInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaGroupForUserInstance& anInstance);

  };

}

#endif

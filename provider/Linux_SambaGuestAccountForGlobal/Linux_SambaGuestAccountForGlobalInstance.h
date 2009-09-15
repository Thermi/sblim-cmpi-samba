// =======================================================================
// Linux_SambaGuestAccountForGlobalInstance.h
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
#ifndef Linux_SambaGuestAccountForGlobalInstance_h
#define Linux_SambaGuestAccountForGlobalInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaGuestAccountForGlobalInstanceName.h"


namespace genProvider {

  class Linux_SambaGuestAccountForGlobalInstance {
       
    private:
    void init();
    void init(const Linux_SambaGuestAccountForGlobalInstance& anInstance);
    void reset();
       
    Linux_SambaGuestAccountForGlobalInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaGuestAccountForGlobalInstance();
    Linux_SambaGuestAccountForGlobalInstance(
      const Linux_SambaGuestAccountForGlobalInstance& anInstance);
    Linux_SambaGuestAccountForGlobalInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaGuestAccountForGlobalInstance();
       
    Linux_SambaGuestAccountForGlobalInstance& operator=(
      const Linux_SambaGuestAccountForGlobalInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaGuestAccountForGlobalInstanceName& anInstanceName);        
    const Linux_SambaGuestAccountForGlobalInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaGuestAccountForGlobalInstanceEnumerationElement {

    Linux_SambaGuestAccountForGlobalInstance* m_elementP;
    Linux_SambaGuestAccountForGlobalInstanceEnumerationElement* m_nextP;

    Linux_SambaGuestAccountForGlobalInstanceEnumerationElement();
    ~Linux_SambaGuestAccountForGlobalInstanceEnumerationElement();  

  };
  

  class Linux_SambaGuestAccountForGlobalInstanceEnumeration {

    private:
    Linux_SambaGuestAccountForGlobalInstanceEnumerationElement* m_firstElementP;
    Linux_SambaGuestAccountForGlobalInstanceEnumerationElement* m_currentElementP;
    Linux_SambaGuestAccountForGlobalInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaGuestAccountForGlobalInstanceEnumeration();
    Linux_SambaGuestAccountForGlobalInstanceEnumeration(
      const Linux_SambaGuestAccountForGlobalInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaGuestAccountForGlobalInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaGuestAccountForGlobalInstance& getNext();
    int getSize() const;
    const Linux_SambaGuestAccountForGlobalInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaGuestAccountForGlobalInstance& anInstance);

  };

}

#endif

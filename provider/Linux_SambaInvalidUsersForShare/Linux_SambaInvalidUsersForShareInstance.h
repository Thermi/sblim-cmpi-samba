// =======================================================================
// Linux_SambaInvalidUsersForShareInstance.h
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
#ifndef Linux_SambaInvalidUsersForShareInstance_h
#define Linux_SambaInvalidUsersForShareInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaInvalidUsersForShareInstanceName.h"


namespace genProvider {

  class Linux_SambaInvalidUsersForShareInstance {
       
    private:
    void init();
    void init(const Linux_SambaInvalidUsersForShareInstance& anInstance);
    void reset();
       
    Linux_SambaInvalidUsersForShareInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaInvalidUsersForShareInstance();
    Linux_SambaInvalidUsersForShareInstance(
      const Linux_SambaInvalidUsersForShareInstance& anInstance);
    Linux_SambaInvalidUsersForShareInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaInvalidUsersForShareInstance();
       
    Linux_SambaInvalidUsersForShareInstance& operator=(
      const Linux_SambaInvalidUsersForShareInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaInvalidUsersForShareInstanceName& anInstanceName);        
    const Linux_SambaInvalidUsersForShareInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaInvalidUsersForShareInstanceEnumerationElement {

    Linux_SambaInvalidUsersForShareInstance* m_elementP;
    Linux_SambaInvalidUsersForShareInstanceEnumerationElement* m_nextP;

    Linux_SambaInvalidUsersForShareInstanceEnumerationElement();
    ~Linux_SambaInvalidUsersForShareInstanceEnumerationElement();  

  };
  

  class Linux_SambaInvalidUsersForShareInstanceEnumeration {

    private:
    Linux_SambaInvalidUsersForShareInstanceEnumerationElement* m_firstElementP;
    Linux_SambaInvalidUsersForShareInstanceEnumerationElement* m_currentElementP;
    Linux_SambaInvalidUsersForShareInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaInvalidUsersForShareInstanceEnumeration();
    Linux_SambaInvalidUsersForShareInstanceEnumeration(
      const Linux_SambaInvalidUsersForShareInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaInvalidUsersForShareInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaInvalidUsersForShareInstance& getNext();
    int getSize() const;
    const Linux_SambaInvalidUsersForShareInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaInvalidUsersForShareInstance& anInstance);

  };

}

#endif

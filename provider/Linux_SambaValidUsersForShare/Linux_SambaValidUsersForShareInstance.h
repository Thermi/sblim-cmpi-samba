// =======================================================================
// Linux_SambaValidUsersForShareInstance.h
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
#ifndef Linux_SambaValidUsersForShareInstance_h
#define Linux_SambaValidUsersForShareInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaValidUsersForShareInstanceName.h"


namespace genProvider {

  class Linux_SambaValidUsersForShareInstance {
       
    private:
    void init();
    void init(const Linux_SambaValidUsersForShareInstance& anInstance);
    void reset();
       
    Linux_SambaValidUsersForShareInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaValidUsersForShareInstance();
    Linux_SambaValidUsersForShareInstance(
      const Linux_SambaValidUsersForShareInstance& anInstance);
    Linux_SambaValidUsersForShareInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaValidUsersForShareInstance();
       
    Linux_SambaValidUsersForShareInstance& operator=(
      const Linux_SambaValidUsersForShareInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaValidUsersForShareInstanceName& anInstanceName);        
    const Linux_SambaValidUsersForShareInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaValidUsersForShareInstanceEnumerationElement {

    Linux_SambaValidUsersForShareInstance* m_elementP;
    Linux_SambaValidUsersForShareInstanceEnumerationElement* m_nextP;

    Linux_SambaValidUsersForShareInstanceEnumerationElement();
    ~Linux_SambaValidUsersForShareInstanceEnumerationElement();  

  };
  

  class Linux_SambaValidUsersForShareInstanceEnumeration {

    private:
    Linux_SambaValidUsersForShareInstanceEnumerationElement* m_firstElementP;
    Linux_SambaValidUsersForShareInstanceEnumerationElement* m_currentElementP;
    Linux_SambaValidUsersForShareInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaValidUsersForShareInstanceEnumeration();
    Linux_SambaValidUsersForShareInstanceEnumeration(
      const Linux_SambaValidUsersForShareInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaValidUsersForShareInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaValidUsersForShareInstance& getNext();
    int getSize() const;
    const Linux_SambaValidUsersForShareInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaValidUsersForShareInstance& anInstance);

  };

}

#endif

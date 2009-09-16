// =======================================================================
// Linux_SambaForceUserForShareInstance.h
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
#ifndef Linux_SambaForceUserForShareInstance_h
#define Linux_SambaForceUserForShareInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaForceUserForShareInstanceName.h"


namespace genProvider {

  class Linux_SambaForceUserForShareInstance {
       
    private:
    void init();
    void init(const Linux_SambaForceUserForShareInstance& anInstance);
    void reset();
       
    Linux_SambaForceUserForShareInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaForceUserForShareInstance();
    Linux_SambaForceUserForShareInstance(
      const Linux_SambaForceUserForShareInstance& anInstance);
    Linux_SambaForceUserForShareInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaForceUserForShareInstance();
       
    Linux_SambaForceUserForShareInstance& operator=(
      const Linux_SambaForceUserForShareInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaForceUserForShareInstanceName& anInstanceName);        
    const Linux_SambaForceUserForShareInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaForceUserForShareInstanceEnumerationElement {

    Linux_SambaForceUserForShareInstance* m_elementP;
    Linux_SambaForceUserForShareInstanceEnumerationElement* m_nextP;

    Linux_SambaForceUserForShareInstanceEnumerationElement();
    ~Linux_SambaForceUserForShareInstanceEnumerationElement();  

  };
  

  class Linux_SambaForceUserForShareInstanceEnumeration {

    private:
    Linux_SambaForceUserForShareInstanceEnumerationElement* m_firstElementP;
    Linux_SambaForceUserForShareInstanceEnumerationElement* m_currentElementP;
    Linux_SambaForceUserForShareInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaForceUserForShareInstanceEnumeration();
    Linux_SambaForceUserForShareInstanceEnumeration(
      const Linux_SambaForceUserForShareInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaForceUserForShareInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaForceUserForShareInstance& getNext();
    int getSize() const;
    const Linux_SambaForceUserForShareInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaForceUserForShareInstance& anInstance);

  };

}

#endif

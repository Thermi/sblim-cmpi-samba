// =======================================================================
// Linux_SambaCommonSecurityForShareRepositoryInstance.h
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
#ifndef Linux_SambaCommonSecurityForShareRepositoryInstance_h
#define Linux_SambaCommonSecurityForShareRepositoryInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaCommonSecurityForShareInstanceName.h"


namespace genProvider {

  class Linux_SambaCommonSecurityForShareRepositoryInstance {
       
    private:
    void init();
    void init(const Linux_SambaCommonSecurityForShareRepositoryInstance& anInstance);
    void reset();
       
    Linux_SambaCommonSecurityForShareInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaCommonSecurityForShareRepositoryInstance();
    Linux_SambaCommonSecurityForShareRepositoryInstance(
      const Linux_SambaCommonSecurityForShareRepositoryInstance& anInstance);
    Linux_SambaCommonSecurityForShareRepositoryInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaCommonSecurityForShareRepositoryInstance();
       
    Linux_SambaCommonSecurityForShareRepositoryInstance& operator=(
      const Linux_SambaCommonSecurityForShareRepositoryInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaCommonSecurityForShareInstanceName& anInstanceName);        
    const Linux_SambaCommonSecurityForShareInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaCommonSecurityForShareRepositoryInstanceEnumerationElement {

    Linux_SambaCommonSecurityForShareRepositoryInstance* m_elementP;
    Linux_SambaCommonSecurityForShareRepositoryInstanceEnumerationElement* m_nextP;

    Linux_SambaCommonSecurityForShareRepositoryInstanceEnumerationElement();
    ~Linux_SambaCommonSecurityForShareRepositoryInstanceEnumerationElement();  

  };
  

  class Linux_SambaCommonSecurityForShareRepositoryInstanceEnumeration {

    private:
    Linux_SambaCommonSecurityForShareRepositoryInstanceEnumerationElement* m_firstElementP;
    Linux_SambaCommonSecurityForShareRepositoryInstanceEnumerationElement* m_currentElementP;
    Linux_SambaCommonSecurityForShareRepositoryInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaCommonSecurityForShareRepositoryInstanceEnumeration();
    Linux_SambaCommonSecurityForShareRepositoryInstanceEnumeration(
      const Linux_SambaCommonSecurityForShareRepositoryInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaCommonSecurityForShareRepositoryInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaCommonSecurityForShareRepositoryInstance& getNext();
    int getSize() const;
    const Linux_SambaCommonSecurityForShareRepositoryInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaCommonSecurityForShareRepositoryInstance& anInstance);

  };

}

#endif

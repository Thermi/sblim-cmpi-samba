// =======================================================================
// Linux_SambaScriptingOptionsRepositoryInstance.h
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
#ifndef Linux_SambaScriptingOptionsRepositoryInstance_h
#define Linux_SambaScriptingOptionsRepositoryInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaScriptingOptionsInstanceName.h"


namespace genProvider {

  class Linux_SambaScriptingOptionsRepositoryInstance {
       
    private:
    void init();
    void init(const Linux_SambaScriptingOptionsRepositoryInstance& anInstance);
    void reset();
       
    Linux_SambaScriptingOptionsInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaScriptingOptionsRepositoryInstance();
    Linux_SambaScriptingOptionsRepositoryInstance(
      const Linux_SambaScriptingOptionsRepositoryInstance& anInstance);
    Linux_SambaScriptingOptionsRepositoryInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaScriptingOptionsRepositoryInstance();
       
    Linux_SambaScriptingOptionsRepositoryInstance& operator=(
      const Linux_SambaScriptingOptionsRepositoryInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaScriptingOptionsInstanceName& anInstanceName);        
    const Linux_SambaScriptingOptionsInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaScriptingOptionsRepositoryInstanceEnumerationElement {

    Linux_SambaScriptingOptionsRepositoryInstance* m_elementP;
    Linux_SambaScriptingOptionsRepositoryInstanceEnumerationElement* m_nextP;

    Linux_SambaScriptingOptionsRepositoryInstanceEnumerationElement();
    ~Linux_SambaScriptingOptionsRepositoryInstanceEnumerationElement();  

  };
  

  class Linux_SambaScriptingOptionsRepositoryInstanceEnumeration {

    private:
    Linux_SambaScriptingOptionsRepositoryInstanceEnumerationElement* m_firstElementP;
    Linux_SambaScriptingOptionsRepositoryInstanceEnumerationElement* m_currentElementP;
    Linux_SambaScriptingOptionsRepositoryInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaScriptingOptionsRepositoryInstanceEnumeration();
    Linux_SambaScriptingOptionsRepositoryInstanceEnumeration(
      const Linux_SambaScriptingOptionsRepositoryInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaScriptingOptionsRepositoryInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaScriptingOptionsRepositoryInstance& getNext();
    int getSize() const;
    const Linux_SambaScriptingOptionsRepositoryInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaScriptingOptionsRepositoryInstance& anInstance);

  };

}

#endif

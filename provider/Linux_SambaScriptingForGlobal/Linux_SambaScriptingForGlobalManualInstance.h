// =======================================================================
// Linux_SambaScriptingForGlobalManualInstance.h
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
#ifndef Linux_SambaScriptingForGlobalManualInstance_h
#define Linux_SambaScriptingForGlobalManualInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaScriptingForGlobalInstanceName.h"


namespace genProvider {

  class Linux_SambaScriptingForGlobalManualInstance {
       
    private:
    void init();
    void init(const Linux_SambaScriptingForGlobalManualInstance& anInstance);
    void reset();
       
    Linux_SambaScriptingForGlobalInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaScriptingForGlobalManualInstance();
    Linux_SambaScriptingForGlobalManualInstance(
      const Linux_SambaScriptingForGlobalManualInstance& anInstance);
    Linux_SambaScriptingForGlobalManualInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaScriptingForGlobalManualInstance();
       
    Linux_SambaScriptingForGlobalManualInstance& operator=(
      const Linux_SambaScriptingForGlobalManualInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaScriptingForGlobalInstanceName& anInstanceName);        
    const Linux_SambaScriptingForGlobalInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaScriptingForGlobalManualInstanceEnumerationElement {

    Linux_SambaScriptingForGlobalManualInstance* m_elementP;
    Linux_SambaScriptingForGlobalManualInstanceEnumerationElement* m_nextP;

    Linux_SambaScriptingForGlobalManualInstanceEnumerationElement();
    ~Linux_SambaScriptingForGlobalManualInstanceEnumerationElement();  

  };
  

  class Linux_SambaScriptingForGlobalManualInstanceEnumeration {

    private:
    Linux_SambaScriptingForGlobalManualInstanceEnumerationElement* m_firstElementP;
    Linux_SambaScriptingForGlobalManualInstanceEnumerationElement* m_currentElementP;
    Linux_SambaScriptingForGlobalManualInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaScriptingForGlobalManualInstanceEnumeration();
    Linux_SambaScriptingForGlobalManualInstanceEnumeration(
      const Linux_SambaScriptingForGlobalManualInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaScriptingForGlobalManualInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaScriptingForGlobalManualInstance& getNext();
    int getSize() const;
    const Linux_SambaScriptingForGlobalManualInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaScriptingForGlobalManualInstance& anInstance);

  };

}

#endif

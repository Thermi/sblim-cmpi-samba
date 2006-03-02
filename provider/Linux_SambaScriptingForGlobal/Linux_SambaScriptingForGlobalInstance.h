// =======================================================================
// Linux_SambaScriptingForGlobalInstance.h
//     created on Fri, 24 Feb 2006 using ECUTE
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
//                Rodrigo Ceron    <rceron@br.ibm.com>
//                Wolfgang Taphorn <taphorn@de.ibm.com>
//
// =======================================================================
//
// 
#ifndef Linux_SambaScriptingForGlobalInstance_h
#define Linux_SambaScriptingForGlobalInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaScriptingForGlobalInstanceName.h"


namespace genProvider {

  class Linux_SambaScriptingForGlobalInstance {
       
    private:
    void init();
    void init(const Linux_SambaScriptingForGlobalInstance& anInstance);
    void reset();
       
    Linux_SambaScriptingForGlobalInstanceName m_instanceName;
    CMPIUint16 m_IsCurrent;
    CMPIUint16 m_IsDefault;
       
    struct isSetType{
      unsigned int instanceName:1;
      unsigned int IsCurrent:1;
      unsigned int IsDefault:1;

    } isSet;
    
    public:
    Linux_SambaScriptingForGlobalInstance();
    Linux_SambaScriptingForGlobalInstance(
      const Linux_SambaScriptingForGlobalInstance& anInstance);
    Linux_SambaScriptingForGlobalInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaScriptingForGlobalInstance();
       
    Linux_SambaScriptingForGlobalInstance& operator=(
      const Linux_SambaScriptingForGlobalInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaScriptingForGlobalInstanceName& anInstanceName);        
    const Linux_SambaScriptingForGlobalInstanceName& getInstanceName() const;

    unsigned int isIsCurrentSet() const;
    void setIsCurrent(const CMPIUint16 aValue);
    const CMPIUint16 getIsCurrent() const;

    unsigned int isIsDefaultSet() const;
    void setIsDefault(const CMPIUint16 aValue);
    const CMPIUint16 getIsDefault() const;


  };
  
  struct Linux_SambaScriptingForGlobalInstanceEnumerationElement {

    Linux_SambaScriptingForGlobalInstance* m_elementP;
    Linux_SambaScriptingForGlobalInstanceEnumerationElement* m_nextP;

    Linux_SambaScriptingForGlobalInstanceEnumerationElement();
    ~Linux_SambaScriptingForGlobalInstanceEnumerationElement();  

  };
  

  class Linux_SambaScriptingForGlobalInstanceEnumeration {

    private:
    Linux_SambaScriptingForGlobalInstanceEnumerationElement* m_firstElementP;
    Linux_SambaScriptingForGlobalInstanceEnumerationElement* m_currentElementP;
    Linux_SambaScriptingForGlobalInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaScriptingForGlobalInstanceEnumeration();
    Linux_SambaScriptingForGlobalInstanceEnumeration(
      const Linux_SambaScriptingForGlobalInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaScriptingForGlobalInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaScriptingForGlobalInstance& getNext();
    int getSize() const;
    const Linux_SambaScriptingForGlobalInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaScriptingForGlobalInstance& anInstance);

  };

}

#endif

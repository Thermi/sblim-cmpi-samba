// =======================================================================
// Linux_SambaShareFileNameHandlingForShareInstance.h
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
#ifndef Linux_SambaShareFileNameHandlingForShareInstance_h
#define Linux_SambaShareFileNameHandlingForShareInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaShareFileNameHandlingForShareInstanceName.h"


namespace genProvider {

  class Linux_SambaShareFileNameHandlingForShareInstance {
       
    private:
    void init();
    void init(const Linux_SambaShareFileNameHandlingForShareInstance& anInstance);
    void reset();
       
    Linux_SambaShareFileNameHandlingForShareInstanceName m_instanceName;
    CMPIUint16 m_IsCurrent;
    CMPIUint16 m_IsDefault;
       
    struct isSetType{
      unsigned int instanceName:1;
      unsigned int IsCurrent:1;
      unsigned int IsDefault:1;

    } isSet;
    
    public:
    Linux_SambaShareFileNameHandlingForShareInstance();
    Linux_SambaShareFileNameHandlingForShareInstance(
      const Linux_SambaShareFileNameHandlingForShareInstance& anInstance);
    Linux_SambaShareFileNameHandlingForShareInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaShareFileNameHandlingForShareInstance();
       
    Linux_SambaShareFileNameHandlingForShareInstance& operator=(
      const Linux_SambaShareFileNameHandlingForShareInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaShareFileNameHandlingForShareInstanceName& anInstanceName);        
    const Linux_SambaShareFileNameHandlingForShareInstanceName& getInstanceName() const;

    unsigned int isIsCurrentSet() const;
    void setIsCurrent(const CMPIUint16 aValue);
    const CMPIUint16 getIsCurrent() const;

    unsigned int isIsDefaultSet() const;
    void setIsDefault(const CMPIUint16 aValue);
    const CMPIUint16 getIsDefault() const;


  };
  
  struct Linux_SambaShareFileNameHandlingForShareInstanceEnumerationElement {

    Linux_SambaShareFileNameHandlingForShareInstance* m_elementP;
    Linux_SambaShareFileNameHandlingForShareInstanceEnumerationElement* m_nextP;

    Linux_SambaShareFileNameHandlingForShareInstanceEnumerationElement();
    ~Linux_SambaShareFileNameHandlingForShareInstanceEnumerationElement();  

  };
  

  class Linux_SambaShareFileNameHandlingForShareInstanceEnumeration {

    private:
    Linux_SambaShareFileNameHandlingForShareInstanceEnumerationElement* m_firstElementP;
    Linux_SambaShareFileNameHandlingForShareInstanceEnumerationElement* m_currentElementP;
    Linux_SambaShareFileNameHandlingForShareInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaShareFileNameHandlingForShareInstanceEnumeration();
    Linux_SambaShareFileNameHandlingForShareInstanceEnumeration(
      const Linux_SambaShareFileNameHandlingForShareInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaShareFileNameHandlingForShareInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaShareFileNameHandlingForShareInstance& getNext();
    int getSize() const;
    const Linux_SambaShareFileNameHandlingForShareInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaShareFileNameHandlingForShareInstance& anInstance);

  };

}

#endif

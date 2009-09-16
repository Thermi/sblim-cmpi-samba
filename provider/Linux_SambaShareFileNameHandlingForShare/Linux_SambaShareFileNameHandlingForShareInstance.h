// =======================================================================
// Linux_SambaShareFileNameHandlingForShareInstance.h
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

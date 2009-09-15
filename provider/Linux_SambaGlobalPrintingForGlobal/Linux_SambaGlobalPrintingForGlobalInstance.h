// =======================================================================
// Linux_SambaGlobalPrintingForGlobalInstance.h
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
#ifndef Linux_SambaGlobalPrintingForGlobalInstance_h
#define Linux_SambaGlobalPrintingForGlobalInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaGlobalPrintingForGlobalInstanceName.h"


namespace genProvider {

  class Linux_SambaGlobalPrintingForGlobalInstance {
       
    private:
    void init();
    void init(const Linux_SambaGlobalPrintingForGlobalInstance& anInstance);
    void reset();
       
    Linux_SambaGlobalPrintingForGlobalInstanceName m_instanceName;
    CMPIUint16 m_IsCurrent;
    CMPIUint16 m_IsDefault;
       
    struct isSetType{
      unsigned int instanceName:1;
      unsigned int IsCurrent:1;
      unsigned int IsDefault:1;

    } isSet;
    
    public:
    Linux_SambaGlobalPrintingForGlobalInstance();
    Linux_SambaGlobalPrintingForGlobalInstance(
      const Linux_SambaGlobalPrintingForGlobalInstance& anInstance);
    Linux_SambaGlobalPrintingForGlobalInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaGlobalPrintingForGlobalInstance();
       
    Linux_SambaGlobalPrintingForGlobalInstance& operator=(
      const Linux_SambaGlobalPrintingForGlobalInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaGlobalPrintingForGlobalInstanceName& anInstanceName);        
    const Linux_SambaGlobalPrintingForGlobalInstanceName& getInstanceName() const;

    unsigned int isIsCurrentSet() const;
    void setIsCurrent(const CMPIUint16 aValue);
    const CMPIUint16 getIsCurrent() const;

    unsigned int isIsDefaultSet() const;
    void setIsDefault(const CMPIUint16 aValue);
    const CMPIUint16 getIsDefault() const;


  };
  
  struct Linux_SambaGlobalPrintingForGlobalInstanceEnumerationElement {

    Linux_SambaGlobalPrintingForGlobalInstance* m_elementP;
    Linux_SambaGlobalPrintingForGlobalInstanceEnumerationElement* m_nextP;

    Linux_SambaGlobalPrintingForGlobalInstanceEnumerationElement();
    ~Linux_SambaGlobalPrintingForGlobalInstanceEnumerationElement();  

  };
  

  class Linux_SambaGlobalPrintingForGlobalInstanceEnumeration {

    private:
    Linux_SambaGlobalPrintingForGlobalInstanceEnumerationElement* m_firstElementP;
    Linux_SambaGlobalPrintingForGlobalInstanceEnumerationElement* m_currentElementP;
    Linux_SambaGlobalPrintingForGlobalInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaGlobalPrintingForGlobalInstanceEnumeration();
    Linux_SambaGlobalPrintingForGlobalInstanceEnumeration(
      const Linux_SambaGlobalPrintingForGlobalInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaGlobalPrintingForGlobalInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaGlobalPrintingForGlobalInstance& getNext();
    int getSize() const;
    const Linux_SambaGlobalPrintingForGlobalInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaGlobalPrintingForGlobalInstance& anInstance);

  };

}

#endif

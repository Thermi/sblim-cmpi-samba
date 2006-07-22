// =======================================================================
// Linux_SambaShareForServiceManualInstance.h
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
#ifndef Linux_SambaShareForServiceManualInstance_h
#define Linux_SambaShareForServiceManualInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaShareForServiceInstanceName.h"


namespace genProvider {

  class Linux_SambaShareForServiceManualInstance {
       
    private:
    void init();
    void init(const Linux_SambaShareForServiceManualInstance& anInstance);
    void reset();
       
    Linux_SambaShareForServiceInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaShareForServiceManualInstance();
    Linux_SambaShareForServiceManualInstance(
      const Linux_SambaShareForServiceManualInstance& anInstance);
    Linux_SambaShareForServiceManualInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaShareForServiceManualInstance();
       
    Linux_SambaShareForServiceManualInstance& operator=(
      const Linux_SambaShareForServiceManualInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaShareForServiceInstanceName& anInstanceName);        
    const Linux_SambaShareForServiceInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaShareForServiceManualInstanceEnumerationElement {

    Linux_SambaShareForServiceManualInstance* m_elementP;
    Linux_SambaShareForServiceManualInstanceEnumerationElement* m_nextP;

    Linux_SambaShareForServiceManualInstanceEnumerationElement();
    ~Linux_SambaShareForServiceManualInstanceEnumerationElement();  

  };
  

  class Linux_SambaShareForServiceManualInstanceEnumeration {

    private:
    Linux_SambaShareForServiceManualInstanceEnumerationElement* m_firstElementP;
    Linux_SambaShareForServiceManualInstanceEnumerationElement* m_currentElementP;
    Linux_SambaShareForServiceManualInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaShareForServiceManualInstanceEnumeration();
    Linux_SambaShareForServiceManualInstanceEnumeration(
      const Linux_SambaShareForServiceManualInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaShareForServiceManualInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaShareForServiceManualInstance& getNext();
    int getSize() const;
    const Linux_SambaShareForServiceManualInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaShareForServiceManualInstance& anInstance);

  };

}

#endif

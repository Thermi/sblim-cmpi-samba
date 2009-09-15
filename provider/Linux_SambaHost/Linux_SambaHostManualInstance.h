// =======================================================================
// Linux_SambaHostManualInstance.h
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
#ifndef Linux_SambaHostManualInstance_h
#define Linux_SambaHostManualInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaHostInstanceName.h"


namespace genProvider {

  class Linux_SambaHostManualInstance {
       
    private:
    void init();
    void init(const Linux_SambaHostManualInstance& anInstance);
    void reset();
       
    Linux_SambaHostInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaHostManualInstance();
    Linux_SambaHostManualInstance(
      const Linux_SambaHostManualInstance& anInstance);
    Linux_SambaHostManualInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaHostManualInstance();
       
    Linux_SambaHostManualInstance& operator=(
      const Linux_SambaHostManualInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaHostInstanceName& anInstanceName);        
    const Linux_SambaHostInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaHostManualInstanceEnumerationElement {

    Linux_SambaHostManualInstance* m_elementP;
    Linux_SambaHostManualInstanceEnumerationElement* m_nextP;

    Linux_SambaHostManualInstanceEnumerationElement();
    ~Linux_SambaHostManualInstanceEnumerationElement();  

  };
  

  class Linux_SambaHostManualInstanceEnumeration {

    private:
    Linux_SambaHostManualInstanceEnumerationElement* m_firstElementP;
    Linux_SambaHostManualInstanceEnumerationElement* m_currentElementP;
    Linux_SambaHostManualInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaHostManualInstanceEnumeration();
    Linux_SambaHostManualInstanceEnumeration(
      const Linux_SambaHostManualInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaHostManualInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaHostManualInstance& getNext();
    int getSize() const;
    const Linux_SambaHostManualInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaHostManualInstance& anInstance);

  };

}

#endif

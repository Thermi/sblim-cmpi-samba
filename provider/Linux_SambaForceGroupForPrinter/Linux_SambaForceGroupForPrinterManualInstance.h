// =======================================================================
// Linux_SambaForceGroupForPrinterManualInstance.h
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
#ifndef Linux_SambaForceGroupForPrinterManualInstance_h
#define Linux_SambaForceGroupForPrinterManualInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaForceGroupForPrinterInstanceName.h"


namespace genProvider {

  class Linux_SambaForceGroupForPrinterManualInstance {
       
    private:
    void init();
    void init(const Linux_SambaForceGroupForPrinterManualInstance& anInstance);
    void reset();
       
    Linux_SambaForceGroupForPrinterInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaForceGroupForPrinterManualInstance();
    Linux_SambaForceGroupForPrinterManualInstance(
      const Linux_SambaForceGroupForPrinterManualInstance& anInstance);
    Linux_SambaForceGroupForPrinterManualInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaForceGroupForPrinterManualInstance();
       
    Linux_SambaForceGroupForPrinterManualInstance& operator=(
      const Linux_SambaForceGroupForPrinterManualInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaForceGroupForPrinterInstanceName& anInstanceName);        
    const Linux_SambaForceGroupForPrinterInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaForceGroupForPrinterManualInstanceEnumerationElement {

    Linux_SambaForceGroupForPrinterManualInstance* m_elementP;
    Linux_SambaForceGroupForPrinterManualInstanceEnumerationElement* m_nextP;

    Linux_SambaForceGroupForPrinterManualInstanceEnumerationElement();
    ~Linux_SambaForceGroupForPrinterManualInstanceEnumerationElement();  

  };
  

  class Linux_SambaForceGroupForPrinterManualInstanceEnumeration {

    private:
    Linux_SambaForceGroupForPrinterManualInstanceEnumerationElement* m_firstElementP;
    Linux_SambaForceGroupForPrinterManualInstanceEnumerationElement* m_currentElementP;
    Linux_SambaForceGroupForPrinterManualInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaForceGroupForPrinterManualInstanceEnumeration();
    Linux_SambaForceGroupForPrinterManualInstanceEnumeration(
      const Linux_SambaForceGroupForPrinterManualInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaForceGroupForPrinterManualInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaForceGroupForPrinterManualInstance& getNext();
    int getSize() const;
    const Linux_SambaForceGroupForPrinterManualInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaForceGroupForPrinterManualInstance& anInstance);

  };

}

#endif

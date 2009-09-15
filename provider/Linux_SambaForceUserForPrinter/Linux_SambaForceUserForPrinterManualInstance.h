// =======================================================================
// Linux_SambaForceUserForPrinterManualInstance.h
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
#ifndef Linux_SambaForceUserForPrinterManualInstance_h
#define Linux_SambaForceUserForPrinterManualInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaForceUserForPrinterInstanceName.h"


namespace genProvider {

  class Linux_SambaForceUserForPrinterManualInstance {
       
    private:
    void init();
    void init(const Linux_SambaForceUserForPrinterManualInstance& anInstance);
    void reset();
       
    Linux_SambaForceUserForPrinterInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaForceUserForPrinterManualInstance();
    Linux_SambaForceUserForPrinterManualInstance(
      const Linux_SambaForceUserForPrinterManualInstance& anInstance);
    Linux_SambaForceUserForPrinterManualInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaForceUserForPrinterManualInstance();
       
    Linux_SambaForceUserForPrinterManualInstance& operator=(
      const Linux_SambaForceUserForPrinterManualInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaForceUserForPrinterInstanceName& anInstanceName);        
    const Linux_SambaForceUserForPrinterInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaForceUserForPrinterManualInstanceEnumerationElement {

    Linux_SambaForceUserForPrinterManualInstance* m_elementP;
    Linux_SambaForceUserForPrinterManualInstanceEnumerationElement* m_nextP;

    Linux_SambaForceUserForPrinterManualInstanceEnumerationElement();
    ~Linux_SambaForceUserForPrinterManualInstanceEnumerationElement();  

  };
  

  class Linux_SambaForceUserForPrinterManualInstanceEnumeration {

    private:
    Linux_SambaForceUserForPrinterManualInstanceEnumerationElement* m_firstElementP;
    Linux_SambaForceUserForPrinterManualInstanceEnumerationElement* m_currentElementP;
    Linux_SambaForceUserForPrinterManualInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaForceUserForPrinterManualInstanceEnumeration();
    Linux_SambaForceUserForPrinterManualInstanceEnumeration(
      const Linux_SambaForceUserForPrinterManualInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaForceUserForPrinterManualInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaForceUserForPrinterManualInstance& getNext();
    int getSize() const;
    const Linux_SambaForceUserForPrinterManualInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaForceUserForPrinterManualInstance& anInstance);

  };

}

#endif

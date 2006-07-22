// =======================================================================
// Linux_SambaInvalidUsersForPrinterManualInstance.h
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
#ifndef Linux_SambaInvalidUsersForPrinterManualInstance_h
#define Linux_SambaInvalidUsersForPrinterManualInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaInvalidUsersForPrinterInstanceName.h"


namespace genProvider {

  class Linux_SambaInvalidUsersForPrinterManualInstance {
       
    private:
    void init();
    void init(const Linux_SambaInvalidUsersForPrinterManualInstance& anInstance);
    void reset();
       
    Linux_SambaInvalidUsersForPrinterInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaInvalidUsersForPrinterManualInstance();
    Linux_SambaInvalidUsersForPrinterManualInstance(
      const Linux_SambaInvalidUsersForPrinterManualInstance& anInstance);
    Linux_SambaInvalidUsersForPrinterManualInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaInvalidUsersForPrinterManualInstance();
       
    Linux_SambaInvalidUsersForPrinterManualInstance& operator=(
      const Linux_SambaInvalidUsersForPrinterManualInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaInvalidUsersForPrinterInstanceName& anInstanceName);        
    const Linux_SambaInvalidUsersForPrinterInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaInvalidUsersForPrinterManualInstanceEnumerationElement {

    Linux_SambaInvalidUsersForPrinterManualInstance* m_elementP;
    Linux_SambaInvalidUsersForPrinterManualInstanceEnumerationElement* m_nextP;

    Linux_SambaInvalidUsersForPrinterManualInstanceEnumerationElement();
    ~Linux_SambaInvalidUsersForPrinterManualInstanceEnumerationElement();  

  };
  

  class Linux_SambaInvalidUsersForPrinterManualInstanceEnumeration {

    private:
    Linux_SambaInvalidUsersForPrinterManualInstanceEnumerationElement* m_firstElementP;
    Linux_SambaInvalidUsersForPrinterManualInstanceEnumerationElement* m_currentElementP;
    Linux_SambaInvalidUsersForPrinterManualInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaInvalidUsersForPrinterManualInstanceEnumeration();
    Linux_SambaInvalidUsersForPrinterManualInstanceEnumeration(
      const Linux_SambaInvalidUsersForPrinterManualInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaInvalidUsersForPrinterManualInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaInvalidUsersForPrinterManualInstance& getNext();
    int getSize() const;
    const Linux_SambaInvalidUsersForPrinterManualInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaInvalidUsersForPrinterManualInstance& anInstance);

  };

}

#endif

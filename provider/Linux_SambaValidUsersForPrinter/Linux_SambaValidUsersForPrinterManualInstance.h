// =======================================================================
// Linux_SambaValidUsersForPrinterManualInstance.h
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
#ifndef Linux_SambaValidUsersForPrinterManualInstance_h
#define Linux_SambaValidUsersForPrinterManualInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaValidUsersForPrinterInstanceName.h"


namespace genProvider {

  class Linux_SambaValidUsersForPrinterManualInstance {
       
    private:
    void init();
    void init(const Linux_SambaValidUsersForPrinterManualInstance& anInstance);
    void reset();
       
    Linux_SambaValidUsersForPrinterInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaValidUsersForPrinterManualInstance();
    Linux_SambaValidUsersForPrinterManualInstance(
      const Linux_SambaValidUsersForPrinterManualInstance& anInstance);
    Linux_SambaValidUsersForPrinterManualInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaValidUsersForPrinterManualInstance();
       
    Linux_SambaValidUsersForPrinterManualInstance& operator=(
      const Linux_SambaValidUsersForPrinterManualInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaValidUsersForPrinterInstanceName& anInstanceName);        
    const Linux_SambaValidUsersForPrinterInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaValidUsersForPrinterManualInstanceEnumerationElement {

    Linux_SambaValidUsersForPrinterManualInstance* m_elementP;
    Linux_SambaValidUsersForPrinterManualInstanceEnumerationElement* m_nextP;

    Linux_SambaValidUsersForPrinterManualInstanceEnumerationElement();
    ~Linux_SambaValidUsersForPrinterManualInstanceEnumerationElement();  

  };
  

  class Linux_SambaValidUsersForPrinterManualInstanceEnumeration {

    private:
    Linux_SambaValidUsersForPrinterManualInstanceEnumerationElement* m_firstElementP;
    Linux_SambaValidUsersForPrinterManualInstanceEnumerationElement* m_currentElementP;
    Linux_SambaValidUsersForPrinterManualInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaValidUsersForPrinterManualInstanceEnumeration();
    Linux_SambaValidUsersForPrinterManualInstanceEnumeration(
      const Linux_SambaValidUsersForPrinterManualInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaValidUsersForPrinterManualInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaValidUsersForPrinterManualInstance& getNext();
    int getSize() const;
    const Linux_SambaValidUsersForPrinterManualInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaValidUsersForPrinterManualInstance& anInstance);

  };

}

#endif

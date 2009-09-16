// =======================================================================
// Linux_SambaUserManualInstance.h
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
#ifndef Linux_SambaUserManualInstance_h
#define Linux_SambaUserManualInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaUserInstanceName.h"


namespace genProvider {

  class Linux_SambaUserManualInstance {
       
    private:
    void init();
    void init(const Linux_SambaUserManualInstance& anInstance);
    void reset();
       
    Linux_SambaUserInstanceName m_instanceName;
    const char* m_SambaUserPassword;
    const char* m_SystemUserName;
       
    struct isSetType{
      unsigned int instanceName:1;
      unsigned int SambaUserPassword:1;
      unsigned int SystemUserName:1;

    } isSet;
    
    public:
    Linux_SambaUserManualInstance();
    Linux_SambaUserManualInstance(
      const Linux_SambaUserManualInstance& anInstance);
    Linux_SambaUserManualInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaUserManualInstance();
       
    Linux_SambaUserManualInstance& operator=(
      const Linux_SambaUserManualInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaUserInstanceName& anInstanceName);        
    const Linux_SambaUserInstanceName& getInstanceName() const;

    unsigned int isSambaUserPasswordSet() const;
    void setSambaUserPassword(const char* aValue, int aCopyFlag = 1);
    const char* getSambaUserPassword() const;

    unsigned int isSystemUserNameSet() const;
    void setSystemUserName(const char* aValue, int aCopyFlag = 1);
    const char* getSystemUserName() const;


  };
  
  struct Linux_SambaUserManualInstanceEnumerationElement {

    Linux_SambaUserManualInstance* m_elementP;
    Linux_SambaUserManualInstanceEnumerationElement* m_nextP;

    Linux_SambaUserManualInstanceEnumerationElement();
    ~Linux_SambaUserManualInstanceEnumerationElement();  

  };
  

  class Linux_SambaUserManualInstanceEnumeration {

    private:
    Linux_SambaUserManualInstanceEnumerationElement* m_firstElementP;
    Linux_SambaUserManualInstanceEnumerationElement* m_currentElementP;
    Linux_SambaUserManualInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaUserManualInstanceEnumeration();
    Linux_SambaUserManualInstanceEnumeration(
      const Linux_SambaUserManualInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaUserManualInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaUserManualInstance& getNext();
    int getSize() const;
    const Linux_SambaUserManualInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaUserManualInstance& anInstance);

  };

}

#endif

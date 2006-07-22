// =======================================================================
// Linux_SambaScriptingOptionsInstance.h
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
#ifndef Linux_SambaScriptingOptionsInstance_h
#define Linux_SambaScriptingOptionsInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaScriptingOptionsInstanceName.h"


namespace genProvider {

  class Linux_SambaScriptingOptionsInstance {
       
    private:
    void init();
    void init(const Linux_SambaScriptingOptionsInstance& anInstance);
    void reset();
       
    Linux_SambaScriptingOptionsInstanceName m_instanceName;
    const char* m_Caption;
    const char* m_Description;
    const char* m_ElementName;
    const char* m_addGroupScript;
    const char* m_addPrinterCommand;
    const char* m_addShareCommand;
    const char* m_addUserScript;
    const char* m_addUsertoGroupScript;
    const char* m_deleteGrouprScript;
    const char* m_deleteUserScript;
    const char* m_deleteUserfromGroupScript;
    const char* m_setPrimaryGroupScript;
       
    struct isSetType{
      unsigned int instanceName:1;
      unsigned int Caption:1;
      unsigned int Description:1;
      unsigned int ElementName:1;
      unsigned int addGroupScript:1;
      unsigned int addPrinterCommand:1;
      unsigned int addShareCommand:1;
      unsigned int addUserScript:1;
      unsigned int addUsertoGroupScript:1;
      unsigned int deleteGrouprScript:1;
      unsigned int deleteUserScript:1;
      unsigned int deleteUserfromGroupScript:1;
      unsigned int setPrimaryGroupScript:1;

    } isSet;
    
    public:
    Linux_SambaScriptingOptionsInstance();
    Linux_SambaScriptingOptionsInstance(
      const Linux_SambaScriptingOptionsInstance& anInstance);
    Linux_SambaScriptingOptionsInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaScriptingOptionsInstance();
       
    Linux_SambaScriptingOptionsInstance& operator=(
      const Linux_SambaScriptingOptionsInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaScriptingOptionsInstanceName& anInstanceName);        
    const Linux_SambaScriptingOptionsInstanceName& getInstanceName() const;

    unsigned int isCaptionSet() const;
    void setCaption(const char* aValue, int aCopyFlag = 1);
    const char* getCaption() const;

    unsigned int isDescriptionSet() const;
    void setDescription(const char* aValue, int aCopyFlag = 1);
    const char* getDescription() const;

    unsigned int isElementNameSet() const;
    void setElementName(const char* aValue, int aCopyFlag = 1);
    const char* getElementName() const;

    unsigned int isaddGroupScriptSet() const;
    void setaddGroupScript(const char* aValue, int aCopyFlag = 1);
    const char* getaddGroupScript() const;

    unsigned int isaddPrinterCommandSet() const;
    void setaddPrinterCommand(const char* aValue, int aCopyFlag = 1);
    const char* getaddPrinterCommand() const;

    unsigned int isaddShareCommandSet() const;
    void setaddShareCommand(const char* aValue, int aCopyFlag = 1);
    const char* getaddShareCommand() const;

    unsigned int isaddUserScriptSet() const;
    void setaddUserScript(const char* aValue, int aCopyFlag = 1);
    const char* getaddUserScript() const;

    unsigned int isaddUsertoGroupScriptSet() const;
    void setaddUsertoGroupScript(const char* aValue, int aCopyFlag = 1);
    const char* getaddUsertoGroupScript() const;

    unsigned int isdeleteGrouprScriptSet() const;
    void setdeleteGrouprScript(const char* aValue, int aCopyFlag = 1);
    const char* getdeleteGrouprScript() const;

    unsigned int isdeleteUserScriptSet() const;
    void setdeleteUserScript(const char* aValue, int aCopyFlag = 1);
    const char* getdeleteUserScript() const;

    unsigned int isdeleteUserfromGroupScriptSet() const;
    void setdeleteUserfromGroupScript(const char* aValue, int aCopyFlag = 1);
    const char* getdeleteUserfromGroupScript() const;

    unsigned int issetPrimaryGroupScriptSet() const;
    void setsetPrimaryGroupScript(const char* aValue, int aCopyFlag = 1);
    const char* getsetPrimaryGroupScript() const;


  };
  
  struct Linux_SambaScriptingOptionsInstanceEnumerationElement {

    Linux_SambaScriptingOptionsInstance* m_elementP;
    Linux_SambaScriptingOptionsInstanceEnumerationElement* m_nextP;

    Linux_SambaScriptingOptionsInstanceEnumerationElement();
    ~Linux_SambaScriptingOptionsInstanceEnumerationElement();  

  };
  

  class Linux_SambaScriptingOptionsInstanceEnumeration {

    private:
    Linux_SambaScriptingOptionsInstanceEnumerationElement* m_firstElementP;
    Linux_SambaScriptingOptionsInstanceEnumerationElement* m_currentElementP;
    Linux_SambaScriptingOptionsInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaScriptingOptionsInstanceEnumeration();
    Linux_SambaScriptingOptionsInstanceEnumeration(
      const Linux_SambaScriptingOptionsInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaScriptingOptionsInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaScriptingOptionsInstance& getNext();
    int getSize() const;
    const Linux_SambaScriptingOptionsInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaScriptingOptionsInstance& anInstance);

  };

}

#endif

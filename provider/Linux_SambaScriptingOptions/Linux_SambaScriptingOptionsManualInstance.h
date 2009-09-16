// =======================================================================
// Linux_SambaScriptingOptionsManualInstance.h
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
#ifndef Linux_SambaScriptingOptionsManualInstance_h
#define Linux_SambaScriptingOptionsManualInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaScriptingOptionsInstanceName.h"


namespace genProvider {

  class Linux_SambaScriptingOptionsManualInstance {
       
    private:
    void init();
    void init(const Linux_SambaScriptingOptionsManualInstance& anInstance);
    void reset();
       
    Linux_SambaScriptingOptionsInstanceName m_instanceName;
    const char* m_addGroupScript;
    const char* m_addPrinterCommand;
    const char* m_addShareCommand;
    const char* m_addUserScript;
    const char* m_addUsertoGroupScript;
    const char* m_deleteGrouprScript;
    const char* m_deleteUserScript;
    const char* m_deleteUserfromGroupScript;
       
    struct isSetType{
      unsigned int instanceName:1;
      unsigned int addGroupScript:1;
      unsigned int addPrinterCommand:1;
      unsigned int addShareCommand:1;
      unsigned int addUserScript:1;
      unsigned int addUsertoGroupScript:1;
      unsigned int deleteGrouprScript:1;
      unsigned int deleteUserScript:1;
      unsigned int deleteUserfromGroupScript:1;

    } isSet;
    
    public:
    Linux_SambaScriptingOptionsManualInstance();
    Linux_SambaScriptingOptionsManualInstance(
      const Linux_SambaScriptingOptionsManualInstance& anInstance);
    Linux_SambaScriptingOptionsManualInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaScriptingOptionsManualInstance();
       
    Linux_SambaScriptingOptionsManualInstance& operator=(
      const Linux_SambaScriptingOptionsManualInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaScriptingOptionsInstanceName& anInstanceName);        
    const Linux_SambaScriptingOptionsInstanceName& getInstanceName() const;

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


  };
  
  struct Linux_SambaScriptingOptionsManualInstanceEnumerationElement {

    Linux_SambaScriptingOptionsManualInstance* m_elementP;
    Linux_SambaScriptingOptionsManualInstanceEnumerationElement* m_nextP;

    Linux_SambaScriptingOptionsManualInstanceEnumerationElement();
    ~Linux_SambaScriptingOptionsManualInstanceEnumerationElement();  

  };
  

  class Linux_SambaScriptingOptionsManualInstanceEnumeration {

    private:
    Linux_SambaScriptingOptionsManualInstanceEnumerationElement* m_firstElementP;
    Linux_SambaScriptingOptionsManualInstanceEnumerationElement* m_currentElementP;
    Linux_SambaScriptingOptionsManualInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaScriptingOptionsManualInstanceEnumeration();
    Linux_SambaScriptingOptionsManualInstanceEnumeration(
      const Linux_SambaScriptingOptionsManualInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaScriptingOptionsManualInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaScriptingOptionsManualInstance& getNext();
    int getSize() const;
    const Linux_SambaScriptingOptionsManualInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaScriptingOptionsManualInstance& anInstance);

  };

}

#endif

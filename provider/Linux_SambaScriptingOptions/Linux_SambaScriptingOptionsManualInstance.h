/**
 *  Linux_SambaScriptingOptionsManualInstance.h
 * 
 * (C) Copyright IBM Corp. 2005
 *
 * THIS FILE IS PROVIDED UNDER THE TERMS OF THE COMMON PUBLIC LICENSE
 * ("AGREEMENT"). ANY USE, REPRODUCTION OR DISTRIBUTION OF THIS FILE
 * CONSTITUTES RECIPIENTS ACCEPTANCE OF THE AGREEMENT.
 *
 * You can obtain a current copy of the Common Public License from
 * http://www.opensource.org/licenses/cpl1.0.php
 *
 * Author:     Rodrigo Ceron <rceron@br.ibm.com>
 *
 * Contributors:
 *
 */


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
  public:
       Linux_SambaScriptingOptionsManualInstance();
  	
       Linux_SambaScriptingOptionsManualInstance
  	    (const Linux_SambaScriptingOptionsManualInstance& original);
  	   
       Linux_SambaScriptingOptionsManualInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaScriptingOptionsManualInstance();
       
       Linux_SambaScriptingOptionsManualInstance& operator=
  	    (const Linux_SambaScriptingOptionsManualInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaScriptingOptionsInstanceName& val);        
       const Linux_SambaScriptingOptionsInstanceName&
        getInstanceName() const;

       unsigned int isaddGroupScriptSet() const;
       void setaddGroupScript(const char* val, int makeCopy = 1);
       const char* getaddGroupScript() const;

       unsigned int isaddPrinterCommandSet() const;
       void setaddPrinterCommand(const char* val, int makeCopy = 1);
       const char* getaddPrinterCommand() const;

       unsigned int isaddShareCommandSet() const;
       void setaddShareCommand(const char* val, int makeCopy = 1);
       const char* getaddShareCommand() const;

       unsigned int isaddUserScriptSet() const;
       void setaddUserScript(const char* val, int makeCopy = 1);
       const char* getaddUserScript() const;

       unsigned int isaddUsertoGroupScriptSet() const;
       void setaddUsertoGroupScript(const char* val, int makeCopy = 1);
       const char* getaddUsertoGroupScript() const;

       unsigned int isdeleteGrouprScriptSet() const;
       void setdeleteGrouprScript(const char* val, int makeCopy = 1);
       const char* getdeleteGrouprScript() const;

       unsigned int isdeleteUserScriptSet() const;
       void setdeleteUserScript(const char* val, int makeCopy = 1);
       const char* getdeleteUserScript() const;

       unsigned int isdeleteUserfromGroupScriptSet() const;
       void setdeleteUserfromGroupScript(const char* val, int makeCopy = 1);
       const char* getdeleteUserfromGroupScript() const;
       
  private:
       void init();
       void init(const Linux_SambaScriptingOptionsManualInstance& original);
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
  };
  
  
  struct Linux_SambaScriptingOptionsManualInstanceEnumerationElement{
  	Linux_SambaScriptingOptionsManualInstance* m_elementP;
  	Linux_SambaScriptingOptionsManualInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaScriptingOptionsManualInstanceEnumerationElement();
  	~Linux_SambaScriptingOptionsManualInstanceEnumerationElement();  	
  };
  

  class Linux_SambaScriptingOptionsManualInstanceEnumeration {
  	private:
  	  Linux_SambaScriptingOptionsManualInstanceEnumerationElement* firstElementP;
  	  Linux_SambaScriptingOptionsManualInstanceEnumerationElement* currentElementP;
  	  Linux_SambaScriptingOptionsManualInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaScriptingOptionsManualInstanceEnumeration();
  	  
  	  Linux_SambaScriptingOptionsManualInstanceEnumeration(
  	   const Linux_SambaScriptingOptionsManualInstanceEnumeration& original);
  	  
  	  ~Linux_SambaScriptingOptionsManualInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaScriptingOptionsManualInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaScriptingOptionsManualInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaScriptingOptionsManualInstance& elementP);
  };
}
#endif


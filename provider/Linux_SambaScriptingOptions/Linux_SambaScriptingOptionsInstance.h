/**
 *  Linux_SambaScriptingOptionsInstance.h
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
  public:
       Linux_SambaScriptingOptionsInstance();
  	
       Linux_SambaScriptingOptionsInstance
  	    (const Linux_SambaScriptingOptionsInstance& original);
  	   
       Linux_SambaScriptingOptionsInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaScriptingOptionsInstance();
       
       Linux_SambaScriptingOptionsInstance& operator=
  	    (const Linux_SambaScriptingOptionsInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaScriptingOptionsInstanceName& val);        
       const Linux_SambaScriptingOptionsInstanceName&
        getInstanceName() const;

       unsigned int isCaptionSet() const;
       void setCaption(const char* val, int makeCopy = 1);
       const char* getCaption() const;

       unsigned int isDescriptionSet() const;
       void setDescription(const char* val, int makeCopy = 1);
       const char* getDescription() const;

       unsigned int isElementNameSet() const;
       void setElementName(const char* val, int makeCopy = 1);
       const char* getElementName() const;

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

       unsigned int issetPrimaryGroupScriptSet() const;
       void setsetPrimaryGroupScript(const char* val, int makeCopy = 1);
       const char* getsetPrimaryGroupScript() const;
       
  private:
       void init();
       void init(const Linux_SambaScriptingOptionsInstance& original);
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
  };
  
  
  struct Linux_SambaScriptingOptionsInstanceEnumerationElement{
  	Linux_SambaScriptingOptionsInstance* m_elementP;
  	Linux_SambaScriptingOptionsInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaScriptingOptionsInstanceEnumerationElement();
  	~Linux_SambaScriptingOptionsInstanceEnumerationElement();  	
  };
  

  class Linux_SambaScriptingOptionsInstanceEnumeration {
  	private:
  	  Linux_SambaScriptingOptionsInstanceEnumerationElement* firstElementP;
  	  Linux_SambaScriptingOptionsInstanceEnumerationElement* currentElementP;
  	  Linux_SambaScriptingOptionsInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaScriptingOptionsInstanceEnumeration();
  	  
  	  Linux_SambaScriptingOptionsInstanceEnumeration(
  	   const Linux_SambaScriptingOptionsInstanceEnumeration& original);
  	  
  	  ~Linux_SambaScriptingOptionsInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaScriptingOptionsInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaScriptingOptionsInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaScriptingOptionsInstance& elementP);
  };
}
#endif

/**
 *  Linux_SambaUserInstance.h
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


#ifndef Linux_SambaUserInstance_h
#define Linux_SambaUserInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaUserInstanceName.h"

namespace genProvider {

  class Linux_SambaUserInstance {
  public:
       Linux_SambaUserInstance();
  	
       Linux_SambaUserInstance
  	    (const Linux_SambaUserInstance& original);
  	   
       Linux_SambaUserInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaUserInstance();
       
       Linux_SambaUserInstance& operator=
  	    (const Linux_SambaUserInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaUserInstanceName& val);        
       const Linux_SambaUserInstanceName&
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

       unsigned int isSambaUserPasswordSet() const;
       void setSambaUserPassword(const char* val, int makeCopy = 1);
       const char* getSambaUserPassword() const;

       unsigned int isSystemUserNameSet() const;
       void setSystemUserName(const char* val, int makeCopy = 1);
       const char* getSystemUserName() const;
       
  private:
       void init();
       void init(const Linux_SambaUserInstance& original);
       void reset();
       
       Linux_SambaUserInstanceName m_instanceName;
       const char* m_Caption;
       const char* m_Description;
       const char* m_ElementName;
       const char* m_SambaUserPassword;
       const char* m_SystemUserName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
         unsigned int Caption:1;
         unsigned int Description:1;
         unsigned int ElementName:1;
         unsigned int SambaUserPassword:1;
         unsigned int SystemUserName:1;
       } isSet;
  };
  
  
  struct Linux_SambaUserInstanceEnumerationElement{
  	Linux_SambaUserInstance* m_elementP;
  	Linux_SambaUserInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaUserInstanceEnumerationElement();
  	~Linux_SambaUserInstanceEnumerationElement();  	
  };
  

  class Linux_SambaUserInstanceEnumeration {
  	private:
  	  Linux_SambaUserInstanceEnumerationElement* firstElementP;
  	  Linux_SambaUserInstanceEnumerationElement* currentElementP;
  	  Linux_SambaUserInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaUserInstanceEnumeration();
  	  
  	  Linux_SambaUserInstanceEnumeration(
  	   const Linux_SambaUserInstanceEnumeration& original);
  	  
  	  ~Linux_SambaUserInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaUserInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaUserInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaUserInstance& elementP);
  };
}
#endif


/**
 *  Linux_SambaUserManualInstance.h
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
  public:
       Linux_SambaUserManualInstance();
  	
       Linux_SambaUserManualInstance
  	    (const Linux_SambaUserManualInstance& original);
  	   
       Linux_SambaUserManualInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaUserManualInstance();
       
       Linux_SambaUserManualInstance& operator=
  	    (const Linux_SambaUserManualInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaUserInstanceName& val);        
       const Linux_SambaUserInstanceName&
        getInstanceName() const;

       unsigned int isSambaUserPasswordSet() const;
       void setSambaUserPassword(const char* val, int makeCopy = 1);
       const char* getSambaUserPassword() const;

       unsigned int isSystemUserNameSet() const;
       void setSystemUserName(const char* val, int makeCopy = 1);
       const char* getSystemUserName() const;
       
  private:
       void init();
       void init(const Linux_SambaUserManualInstance& original);
       void reset();
       
       Linux_SambaUserInstanceName m_instanceName;
       const char* m_SambaUserPassword;
       const char* m_SystemUserName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
         unsigned int SambaUserPassword:1;
         unsigned int SystemUserName:1;
       } isSet;
  };
  
  
  struct Linux_SambaUserManualInstanceEnumerationElement{
  	Linux_SambaUserManualInstance* m_elementP;
  	Linux_SambaUserManualInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaUserManualInstanceEnumerationElement();
  	~Linux_SambaUserManualInstanceEnumerationElement();  	
  };
  

  class Linux_SambaUserManualInstanceEnumeration {
  	private:
  	  Linux_SambaUserManualInstanceEnumerationElement* firstElementP;
  	  Linux_SambaUserManualInstanceEnumerationElement* currentElementP;
  	  Linux_SambaUserManualInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaUserManualInstanceEnumeration();
  	  
  	  Linux_SambaUserManualInstanceEnumeration(
  	   const Linux_SambaUserManualInstanceEnumeration& original);
  	  
  	  ~Linux_SambaUserManualInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaUserManualInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaUserManualInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaUserManualInstance& elementP);
  };
}
#endif


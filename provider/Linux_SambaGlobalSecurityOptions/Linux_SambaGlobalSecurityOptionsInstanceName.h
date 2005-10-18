/**
 *  Linux_SambaGlobalSecurityOptionsInstanceName.h
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


#ifndef Linux_SambaGlobalSecurityOptionsInstanceName_h
#define Linux_SambaGlobalSecurityOptionsInstanceName_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"
#include "ArrayConverter.h"
#include "CmpiErrorFormater.h"

namespace genProvider {

  class Linux_SambaGlobalSecurityOptionsInstanceName {
  public:
       Linux_SambaGlobalSecurityOptionsInstanceName();
  	
       Linux_SambaGlobalSecurityOptionsInstanceName
  	    (const Linux_SambaGlobalSecurityOptionsInstanceName& original);
  	   
       Linux_SambaGlobalSecurityOptionsInstanceName
        (const CmpiObjectPath& path);
  	 
       ~Linux_SambaGlobalSecurityOptionsInstanceName();
       
       Linux_SambaGlobalSecurityOptionsInstanceName& operator=
  	    (const Linux_SambaGlobalSecurityOptionsInstanceName& original);
       
       CmpiObjectPath getObjectPath() const;
       
       void fillKeys(CmpiInstance& cmpiInstance) const;
       
       unsigned int isNameSpaceSet() const;
       void setNamespace(const char * val, int makeCopy = 1);
       const char * getNamespace() const;

       unsigned int isInstanceIDSet() const;
       void setInstanceID(const char* val, int makeCopy = 1);
       const char* getInstanceID() const;

       unsigned int isNameSet() const;
       void setName(const char* val, int makeCopy = 1);
       const char* getName() const;
       
  private:
       void init();
       void init(const Linux_SambaGlobalSecurityOptionsInstanceName& original);
       void reset();
       
       const char* m_CIMClassNameP;
       const char* m_namespace;
       const char* m_InstanceID;
       const char* m_Name;
       
       struct isSetType{
       	 unsigned int m_namespace:1;
         unsigned int InstanceID:1;
         unsigned int Name:1;
       } isSet;
  };
  
  
  struct Linux_SambaGlobalSecurityOptionsInstanceNameEnumerationElement{
  	Linux_SambaGlobalSecurityOptionsInstanceName* m_elementP;
  	Linux_SambaGlobalSecurityOptionsInstanceNameEnumerationElement* m_nextP;
  	
  	Linux_SambaGlobalSecurityOptionsInstanceNameEnumerationElement();
  	~Linux_SambaGlobalSecurityOptionsInstanceNameEnumerationElement();  	
  };
  

  class Linux_SambaGlobalSecurityOptionsInstanceNameEnumeration {
  	private:
  	  Linux_SambaGlobalSecurityOptionsInstanceNameEnumerationElement* firstElementP;
  	  Linux_SambaGlobalSecurityOptionsInstanceNameEnumerationElement* currentElementP;
  	  Linux_SambaGlobalSecurityOptionsInstanceNameEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaGlobalSecurityOptionsInstanceNameEnumeration();
  	  
  	  Linux_SambaGlobalSecurityOptionsInstanceNameEnumeration(const CmpiArray& arr);
  	  
  	  Linux_SambaGlobalSecurityOptionsInstanceNameEnumeration(
  	   const Linux_SambaGlobalSecurityOptionsInstanceNameEnumeration& original);
  	  
  	  ~Linux_SambaGlobalSecurityOptionsInstanceNameEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaGlobalSecurityOptionsInstanceName& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaGlobalSecurityOptionsInstanceName& getElement(int pos) const;  	  
  	  
  	  //no copy of the element is done
  	  void addElement(const Linux_SambaGlobalSecurityOptionsInstanceName& elementP);
  	  
  	  operator CmpiArray() const;
  };
}
#endif


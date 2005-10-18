/**
 *  Linux_SambaShareSecurityOptionsInstanceName.h
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


#ifndef Linux_SambaShareSecurityOptionsInstanceName_h
#define Linux_SambaShareSecurityOptionsInstanceName_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"
#include "ArrayConverter.h"
#include "CmpiErrorFormater.h"

namespace genProvider {

  class Linux_SambaShareSecurityOptionsInstanceName {
  public:
       Linux_SambaShareSecurityOptionsInstanceName();
  	
       Linux_SambaShareSecurityOptionsInstanceName
  	    (const Linux_SambaShareSecurityOptionsInstanceName& original);
  	   
       Linux_SambaShareSecurityOptionsInstanceName
        (const CmpiObjectPath& path);
  	 
       ~Linux_SambaShareSecurityOptionsInstanceName();
       
       Linux_SambaShareSecurityOptionsInstanceName& operator=
  	    (const Linux_SambaShareSecurityOptionsInstanceName& original);
       
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
       void init(const Linux_SambaShareSecurityOptionsInstanceName& original);
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
  
  
  struct Linux_SambaShareSecurityOptionsInstanceNameEnumerationElement{
  	Linux_SambaShareSecurityOptionsInstanceName* m_elementP;
  	Linux_SambaShareSecurityOptionsInstanceNameEnumerationElement* m_nextP;
  	
  	Linux_SambaShareSecurityOptionsInstanceNameEnumerationElement();
  	~Linux_SambaShareSecurityOptionsInstanceNameEnumerationElement();  	
  };
  

  class Linux_SambaShareSecurityOptionsInstanceNameEnumeration {
  	private:
  	  Linux_SambaShareSecurityOptionsInstanceNameEnumerationElement* firstElementP;
  	  Linux_SambaShareSecurityOptionsInstanceNameEnumerationElement* currentElementP;
  	  Linux_SambaShareSecurityOptionsInstanceNameEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaShareSecurityOptionsInstanceNameEnumeration();
  	  
  	  Linux_SambaShareSecurityOptionsInstanceNameEnumeration(const CmpiArray& arr);
  	  
  	  Linux_SambaShareSecurityOptionsInstanceNameEnumeration(
  	   const Linux_SambaShareSecurityOptionsInstanceNameEnumeration& original);
  	  
  	  ~Linux_SambaShareSecurityOptionsInstanceNameEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaShareSecurityOptionsInstanceName& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaShareSecurityOptionsInstanceName& getElement(int pos) const;  	  
  	  
  	  //no copy of the element is done
  	  void addElement(const Linux_SambaShareSecurityOptionsInstanceName& elementP);
  	  
  	  operator CmpiArray() const;
  };
}
#endif


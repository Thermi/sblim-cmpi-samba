/**
 *  Linux_SambaCommonSecurityOptionsInstanceName.h
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


#ifndef Linux_SambaCommonSecurityOptionsInstanceName_h
#define Linux_SambaCommonSecurityOptionsInstanceName_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"
#include "ArrayConverter.h"
#include "CmpiErrorFormater.h"

namespace genProvider {

  class Linux_SambaCommonSecurityOptionsInstanceName {
  public:
       Linux_SambaCommonSecurityOptionsInstanceName();
  	
       Linux_SambaCommonSecurityOptionsInstanceName
  	    (const Linux_SambaCommonSecurityOptionsInstanceName& original);
  	   
       Linux_SambaCommonSecurityOptionsInstanceName
        (const CmpiObjectPath& path);
  	 
       ~Linux_SambaCommonSecurityOptionsInstanceName();
       
       Linux_SambaCommonSecurityOptionsInstanceName& operator=
  	    (const Linux_SambaCommonSecurityOptionsInstanceName& original);
       
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
       void init(const Linux_SambaCommonSecurityOptionsInstanceName& original);
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
  
  
  struct Linux_SambaCommonSecurityOptionsInstanceNameEnumerationElement{
  	Linux_SambaCommonSecurityOptionsInstanceName* m_elementP;
  	Linux_SambaCommonSecurityOptionsInstanceNameEnumerationElement* m_nextP;
  	
  	Linux_SambaCommonSecurityOptionsInstanceNameEnumerationElement();
  	~Linux_SambaCommonSecurityOptionsInstanceNameEnumerationElement();  	
  };
  

  class Linux_SambaCommonSecurityOptionsInstanceNameEnumeration {
  	private:
  	  Linux_SambaCommonSecurityOptionsInstanceNameEnumerationElement* firstElementP;
  	  Linux_SambaCommonSecurityOptionsInstanceNameEnumerationElement* currentElementP;
  	  Linux_SambaCommonSecurityOptionsInstanceNameEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaCommonSecurityOptionsInstanceNameEnumeration();
  	  
  	  Linux_SambaCommonSecurityOptionsInstanceNameEnumeration(const CmpiArray& arr);
  	  
  	  Linux_SambaCommonSecurityOptionsInstanceNameEnumeration(
  	   const Linux_SambaCommonSecurityOptionsInstanceNameEnumeration& original);
  	  
  	  ~Linux_SambaCommonSecurityOptionsInstanceNameEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaCommonSecurityOptionsInstanceName& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaCommonSecurityOptionsInstanceName& getElement(int pos) const;  	  
  	  
  	  //no copy of the element is done
  	  void addElement(const Linux_SambaCommonSecurityOptionsInstanceName& elementP);
  	  
  	  operator CmpiArray() const;
  };
}
#endif


/**
 *  Linux_SambaServiceConfigurationInstanceName.h
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


#ifndef Linux_SambaServiceConfigurationInstanceName_h
#define Linux_SambaServiceConfigurationInstanceName_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"
#include "ArrayConverter.h"
#include "CmpiErrorFormater.h"

namespace genProvider {

  class Linux_SambaServiceConfigurationInstanceName {
  public:
       Linux_SambaServiceConfigurationInstanceName();
  	
       Linux_SambaServiceConfigurationInstanceName
  	    (const Linux_SambaServiceConfigurationInstanceName& original);
  	   
       Linux_SambaServiceConfigurationInstanceName
        (const CmpiObjectPath& path);
  	 
       ~Linux_SambaServiceConfigurationInstanceName();
       
       Linux_SambaServiceConfigurationInstanceName& operator=
  	    (const Linux_SambaServiceConfigurationInstanceName& original);
       
       CmpiObjectPath getObjectPath() const;
       
       void fillKeys(CmpiInstance& cmpiInstance) const;
       
       unsigned int isNameSpaceSet() const;
       void setNamespace(const char * val, int makeCopy = 1);
       const char * getNamespace() const;

       unsigned int isNameSet() const;
       void setName(const char* val, int makeCopy = 1);
       const char* getName() const;
       
  private:
       void init();
       void init(const Linux_SambaServiceConfigurationInstanceName& original);
       void reset();
       
       const char* m_CIMClassNameP;
       const char* m_namespace;
       const char* m_Name;
       
       struct isSetType{
       	 unsigned int m_namespace:1;
         unsigned int Name:1;
       } isSet;
  };
  
  
  struct Linux_SambaServiceConfigurationInstanceNameEnumerationElement{
  	Linux_SambaServiceConfigurationInstanceName* m_elementP;
  	Linux_SambaServiceConfigurationInstanceNameEnumerationElement* m_nextP;
  	
  	Linux_SambaServiceConfigurationInstanceNameEnumerationElement();
  	~Linux_SambaServiceConfigurationInstanceNameEnumerationElement();  	
  };
  

  class Linux_SambaServiceConfigurationInstanceNameEnumeration {
  	private:
  	  Linux_SambaServiceConfigurationInstanceNameEnumerationElement* firstElementP;
  	  Linux_SambaServiceConfigurationInstanceNameEnumerationElement* currentElementP;
  	  Linux_SambaServiceConfigurationInstanceNameEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaServiceConfigurationInstanceNameEnumeration();
  	  
  	  Linux_SambaServiceConfigurationInstanceNameEnumeration(const CmpiArray& arr);
  	  
  	  Linux_SambaServiceConfigurationInstanceNameEnumeration(
  	   const Linux_SambaServiceConfigurationInstanceNameEnumeration& original);
  	  
  	  ~Linux_SambaServiceConfigurationInstanceNameEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaServiceConfigurationInstanceName& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaServiceConfigurationInstanceName& getElement(int pos) const;  	  
  	  
  	  //no copy of the element is done
  	  void addElement(const Linux_SambaServiceConfigurationInstanceName& elementP);
  	  
  	  operator CmpiArray() const;
  };
}
#endif


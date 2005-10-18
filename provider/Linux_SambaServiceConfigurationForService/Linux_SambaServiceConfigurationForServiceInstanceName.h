/**
 *  Linux_SambaServiceConfigurationForServiceInstanceName.h
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


#ifndef Linux_SambaServiceConfigurationForServiceInstanceName_h
#define Linux_SambaServiceConfigurationForServiceInstanceName_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"
#include "ArrayConverter.h"
#include "CmpiErrorFormater.h"
#include "Linux_SambaServiceConfigurationInstanceName.h"
#include "Linux_SambaServiceInstanceName.h"

namespace genProvider {

  class Linux_SambaServiceConfigurationForServiceInstanceName {
  public:
       Linux_SambaServiceConfigurationForServiceInstanceName();
  	
       Linux_SambaServiceConfigurationForServiceInstanceName
  	    (const Linux_SambaServiceConfigurationForServiceInstanceName& original);
  	   
       Linux_SambaServiceConfigurationForServiceInstanceName
        (const CmpiObjectPath& path);
  	 
       ~Linux_SambaServiceConfigurationForServiceInstanceName();
       
       Linux_SambaServiceConfigurationForServiceInstanceName& operator=
  	    (const Linux_SambaServiceConfigurationForServiceInstanceName& original);
       
       CmpiObjectPath getObjectPath() const;
       
       void fillKeys(CmpiInstance& cmpiInstance) const;
       
       unsigned int isNameSpaceSet() const;
       void setNamespace(const char * val, int makeCopy = 1);
       const char * getNamespace() const;

       unsigned int isConfigurationSet() const;
       void setConfiguration(const Linux_SambaServiceConfigurationInstanceName& val);
       const Linux_SambaServiceConfigurationInstanceName& getConfiguration() const;

       unsigned int isElementSet() const;
       void setElement(const Linux_SambaServiceInstanceName& val);
       const Linux_SambaServiceInstanceName& getElement() const;
       
  private:
       void init();
       void init(const Linux_SambaServiceConfigurationForServiceInstanceName& original);
       void reset();
       
       const char* m_CIMClassNameP;
       const char* m_namespace;
       Linux_SambaServiceConfigurationInstanceName m_Configuration;
       Linux_SambaServiceInstanceName m_Element;
       
       struct isSetType{
       	 unsigned int m_namespace:1;
         unsigned int Configuration:1;
         unsigned int Element:1;
       } isSet;
  };
  
  
  struct Linux_SambaServiceConfigurationForServiceInstanceNameEnumerationElement{
  	Linux_SambaServiceConfigurationForServiceInstanceName* m_elementP;
  	Linux_SambaServiceConfigurationForServiceInstanceNameEnumerationElement* m_nextP;
  	
  	Linux_SambaServiceConfigurationForServiceInstanceNameEnumerationElement();
  	~Linux_SambaServiceConfigurationForServiceInstanceNameEnumerationElement();  	
  };
  

  class Linux_SambaServiceConfigurationForServiceInstanceNameEnumeration {
  	private:
  	  Linux_SambaServiceConfigurationForServiceInstanceNameEnumerationElement* firstElementP;
  	  Linux_SambaServiceConfigurationForServiceInstanceNameEnumerationElement* currentElementP;
  	  Linux_SambaServiceConfigurationForServiceInstanceNameEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaServiceConfigurationForServiceInstanceNameEnumeration();
  	  
  	  Linux_SambaServiceConfigurationForServiceInstanceNameEnumeration(const CmpiArray& arr);
  	  
  	  Linux_SambaServiceConfigurationForServiceInstanceNameEnumeration(
  	   const Linux_SambaServiceConfigurationForServiceInstanceNameEnumeration& original);
  	  
  	  ~Linux_SambaServiceConfigurationForServiceInstanceNameEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaServiceConfigurationForServiceInstanceName& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaServiceConfigurationForServiceInstanceName& getElement(int pos) const;  	  
  	  
  	  //no copy of the element is done
  	  void addElement(const Linux_SambaServiceConfigurationForServiceInstanceName& elementP);
  	  
  	  operator CmpiArray() const;
  };
}
#endif


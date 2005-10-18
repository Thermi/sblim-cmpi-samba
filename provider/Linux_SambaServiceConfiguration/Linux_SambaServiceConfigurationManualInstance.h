/**
 *  Linux_SambaServiceConfigurationManualInstance.h
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


#ifndef Linux_SambaServiceConfigurationManualInstance_h
#define Linux_SambaServiceConfigurationManualInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaServiceConfigurationInstanceName.h"

namespace genProvider {

  class Linux_SambaServiceConfigurationManualInstance {
  public:
       Linux_SambaServiceConfigurationManualInstance();
  	
       Linux_SambaServiceConfigurationManualInstance
  	    (const Linux_SambaServiceConfigurationManualInstance& original);
  	   
       Linux_SambaServiceConfigurationManualInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaServiceConfigurationManualInstance();
       
       Linux_SambaServiceConfigurationManualInstance& operator=
  	    (const Linux_SambaServiceConfigurationManualInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaServiceConfigurationInstanceName& val);        
       const Linux_SambaServiceConfigurationInstanceName&
        getInstanceName() const;

       unsigned int isConfigurationFileSet() const;
       void setConfigurationFile(const char* val, int makeCopy = 1);
       const char* getConfigurationFile() const;
       
  private:
       void init();
       void init(const Linux_SambaServiceConfigurationManualInstance& original);
       void reset();
       
       Linux_SambaServiceConfigurationInstanceName m_instanceName;
       const char* m_ConfigurationFile;
       
       struct isSetType{
       	 unsigned int instanceName:1;
         unsigned int ConfigurationFile:1;
       } isSet;
  };
  
  
  struct Linux_SambaServiceConfigurationManualInstanceEnumerationElement{
  	Linux_SambaServiceConfigurationManualInstance* m_elementP;
  	Linux_SambaServiceConfigurationManualInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaServiceConfigurationManualInstanceEnumerationElement();
  	~Linux_SambaServiceConfigurationManualInstanceEnumerationElement();  	
  };
  

  class Linux_SambaServiceConfigurationManualInstanceEnumeration {
  	private:
  	  Linux_SambaServiceConfigurationManualInstanceEnumerationElement* firstElementP;
  	  Linux_SambaServiceConfigurationManualInstanceEnumerationElement* currentElementP;
  	  Linux_SambaServiceConfigurationManualInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaServiceConfigurationManualInstanceEnumeration();
  	  
  	  Linux_SambaServiceConfigurationManualInstanceEnumeration(
  	   const Linux_SambaServiceConfigurationManualInstanceEnumeration& original);
  	  
  	  ~Linux_SambaServiceConfigurationManualInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaServiceConfigurationManualInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaServiceConfigurationManualInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaServiceConfigurationManualInstance& elementP);
  };
}
#endif


/**
 *  Linux_SambaGlobalFileNameHandlingOptionsManualInstance.h
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


#ifndef Linux_SambaGlobalFileNameHandlingOptionsManualInstance_h
#define Linux_SambaGlobalFileNameHandlingOptionsManualInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaGlobalFileNameHandlingOptionsInstanceName.h"

namespace genProvider {

  class Linux_SambaGlobalFileNameHandlingOptionsManualInstance {
  public:
       Linux_SambaGlobalFileNameHandlingOptionsManualInstance();
  	
       Linux_SambaGlobalFileNameHandlingOptionsManualInstance
  	    (const Linux_SambaGlobalFileNameHandlingOptionsManualInstance& original);
  	   
       Linux_SambaGlobalFileNameHandlingOptionsManualInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaGlobalFileNameHandlingOptionsManualInstance();
       
       Linux_SambaGlobalFileNameHandlingOptionsManualInstance& operator=
  	    (const Linux_SambaGlobalFileNameHandlingOptionsManualInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaGlobalFileNameHandlingOptionsInstanceName& val);        
       const Linux_SambaGlobalFileNameHandlingOptionsInstanceName&
        getInstanceName() const;

       unsigned int isCaseSensitiveSet() const;
       void setCaseSensitive(const CMPIBoolean val);
       const CMPIBoolean getCaseSensitive() const;

       unsigned int isDosFiletimesSet() const;
       void setDosFiletimes(const CMPIBoolean val);
       const CMPIBoolean getDosFiletimes() const;

       unsigned int isHideDotFilesSet() const;
       void setHideDotFiles(const CMPIBoolean val);
       const CMPIBoolean getHideDotFiles() const;
       
  private:
       void init();
       void init(const Linux_SambaGlobalFileNameHandlingOptionsManualInstance& original);
       void reset();
       
       Linux_SambaGlobalFileNameHandlingOptionsInstanceName m_instanceName;
       CMPIBoolean m_CaseSensitive;
       CMPIBoolean m_DosFiletimes;
       CMPIBoolean m_HideDotFiles;
       
       struct isSetType{
       	 unsigned int instanceName:1;
         unsigned int CaseSensitive:1;
         unsigned int DosFiletimes:1;
         unsigned int HideDotFiles:1;
       } isSet;
  };
  
  
  struct Linux_SambaGlobalFileNameHandlingOptionsManualInstanceEnumerationElement{
  	Linux_SambaGlobalFileNameHandlingOptionsManualInstance* m_elementP;
  	Linux_SambaGlobalFileNameHandlingOptionsManualInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaGlobalFileNameHandlingOptionsManualInstanceEnumerationElement();
  	~Linux_SambaGlobalFileNameHandlingOptionsManualInstanceEnumerationElement();  	
  };
  

  class Linux_SambaGlobalFileNameHandlingOptionsManualInstanceEnumeration {
  	private:
  	  Linux_SambaGlobalFileNameHandlingOptionsManualInstanceEnumerationElement* firstElementP;
  	  Linux_SambaGlobalFileNameHandlingOptionsManualInstanceEnumerationElement* currentElementP;
  	  Linux_SambaGlobalFileNameHandlingOptionsManualInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaGlobalFileNameHandlingOptionsManualInstanceEnumeration();
  	  
  	  Linux_SambaGlobalFileNameHandlingOptionsManualInstanceEnumeration(
  	   const Linux_SambaGlobalFileNameHandlingOptionsManualInstanceEnumeration& original);
  	  
  	  ~Linux_SambaGlobalFileNameHandlingOptionsManualInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaGlobalFileNameHandlingOptionsManualInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaGlobalFileNameHandlingOptionsManualInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaGlobalFileNameHandlingOptionsManualInstance& elementP);
  };
}
#endif


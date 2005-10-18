/**
 *  Linux_SambaShareFileNameHandlingOptionsManualInstance.h
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


#ifndef Linux_SambaShareFileNameHandlingOptionsManualInstance_h
#define Linux_SambaShareFileNameHandlingOptionsManualInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaShareFileNameHandlingOptionsInstanceName.h"

namespace genProvider {

  class Linux_SambaShareFileNameHandlingOptionsManualInstance {
  public:
       Linux_SambaShareFileNameHandlingOptionsManualInstance();
  	
       Linux_SambaShareFileNameHandlingOptionsManualInstance
  	    (const Linux_SambaShareFileNameHandlingOptionsManualInstance& original);
  	   
       Linux_SambaShareFileNameHandlingOptionsManualInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaShareFileNameHandlingOptionsManualInstance();
       
       Linux_SambaShareFileNameHandlingOptionsManualInstance& operator=
  	    (const Linux_SambaShareFileNameHandlingOptionsManualInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaShareFileNameHandlingOptionsInstanceName& val);        
       const Linux_SambaShareFileNameHandlingOptionsInstanceName&
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
       void init(const Linux_SambaShareFileNameHandlingOptionsManualInstance& original);
       void reset();
       
       Linux_SambaShareFileNameHandlingOptionsInstanceName m_instanceName;
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
  
  
  struct Linux_SambaShareFileNameHandlingOptionsManualInstanceEnumerationElement{
  	Linux_SambaShareFileNameHandlingOptionsManualInstance* m_elementP;
  	Linux_SambaShareFileNameHandlingOptionsManualInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaShareFileNameHandlingOptionsManualInstanceEnumerationElement();
  	~Linux_SambaShareFileNameHandlingOptionsManualInstanceEnumerationElement();  	
  };
  

  class Linux_SambaShareFileNameHandlingOptionsManualInstanceEnumeration {
  	private:
  	  Linux_SambaShareFileNameHandlingOptionsManualInstanceEnumerationElement* firstElementP;
  	  Linux_SambaShareFileNameHandlingOptionsManualInstanceEnumerationElement* currentElementP;
  	  Linux_SambaShareFileNameHandlingOptionsManualInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaShareFileNameHandlingOptionsManualInstanceEnumeration();
  	  
  	  Linux_SambaShareFileNameHandlingOptionsManualInstanceEnumeration(
  	   const Linux_SambaShareFileNameHandlingOptionsManualInstanceEnumeration& original);
  	  
  	  ~Linux_SambaShareFileNameHandlingOptionsManualInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaShareFileNameHandlingOptionsManualInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaShareFileNameHandlingOptionsManualInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaShareFileNameHandlingOptionsManualInstance& elementP);
  };
}
#endif


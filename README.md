# A class to download files from the net

A simple class to ease the task of downloading files from the net


- [Download source files - 5.6 Kb](https://raw.githubusercontent.com/ChrisMaunder/webgrab/master/docs/assets/WebGrab_src.zip)

![Sample Image - WebGrab.gif](https://raw.githubusercontent.com/ChrisMaunder/webgrab/master/docs/assets/WebGrab.gif)

`CWebGrab` is a simple class that allows you to quickly and easily download files from the net. The class is merely a light wrapper for the MFC internet classes, and as such supports any protocol that the MFC classes support. 

The class is extremely simple to use and has only one main function that you need to call: `CWebGrab::GetFile`. The syntax is: 

```cpp
BOOL GetFile(LPCTSTR szURL, CString& strBuffer, 
             LPCTSTR szAgentName = NULL, CWnd* pWnd = NULL);
```

> 
> 
> Downloads a file from the given URL 

- `szURL` is the URL
- `strBuffer` is a `CString` buffer that will hold the contents of the downloaded file
- `szAgentName` is the agent name you want to send to the website (may be NULL)
- `pWnd` is a status window. Status updates will be sent to this window using `SetWindowText()`

```cpp
BOOL GetFileInfo(LPCTSTR  szURL, CString& strLastModified, DWORD& dwSize,
                 DWORD& dwServerError, LPCTSTR szAgentName = NULL, 
                 CWnd* pWnd = NULL);
```

> 
> 
> (Added by Ravi Bhavnani) Retrieves the information about a file from the given URL 

- `szURL` is the URL
- `strLastModified` is a `CString` buffer that will hold the last modified date of the file
- `dwServerError` will return any error codes that were raised.
- `szAgentName` is the agent name you want to send to the website (may be NULL)
- `pWnd` is a status window. Status updates will be sent to this window using `SetWindowText()`

Bryce Burrows kindly updated the code to include the following functions:

```cpp
void SetUseProxy(bool use);
```

> 
> 
> Sets whether or not to use a proxy

```cpp
void SetProxyServer(LPCSTR server);
```

> 
> 
> Sets the proxy server

```cpp
void SetProxyPort(UINT port);
```

> 
> 
> Sets the proxy port

```cpp
void SetProxy(LPCSTR proxy, WORD port, bool use=true);
```

> 
> 
> Sets the proxy information in one call

```cpp
void SetForceReload (bool bForceReload)
```

> 
> 
> Sets whether or not to force a reload when downloading a document. If a force reload is set the the document will not be a cached version.

```cpp
void GetForceReload()
```

> 
> 
> Gets whether or not to force a reload when downloading a document.

```cpp
void SetTimeOut(DWORD timeOut);
```

> 
> 
> Sets the timeout for the operation

```cpp
double GetRate();
```

> 
> 
> Retrieves the download rate in Kb/sec

```cpp
SHORT GetErrorCode();
CString GetErrorMessage();
```

> 
> 
> Get the error code and message (if any)

## Example of use

```cpp
#include "webgrab.h"

void CWebGrabberDlg::OnDownload() 
{
    CString strBuffer;
    CWebGrab grab;
    if (grab.GetFile("http://www.mysite.com/index.htm", // the url
                     strBuffer,                         // buffer for data
                     _T("WebGrab demo"),                // agent name
                     GetDlgItem(IDC_STATUS)))           // Plain ol' CStatic window
    {
        TRACE0("everything went OK\n")
    }
}
```

## History

26 Jan 2002 - Bryce Burrows kindly added the proxy code.

16 Feb 2002 - Bryce Burrows source code update.

2 Mar 2002 - Ravi Bhavnani added a "force reload" option to ensure that the downloaded data is not read from the cache, plus `Get/SetForceReload()` functions. 

17 Apr 2002 - Ravi Bhavnani added a `GetFileInfo`

Imports Microsoft.Azure.WebJobs

' To learn more about Microsoft Azure WebJobs SDK, please see http://go.microsoft.com/fwlink/?LinkID=320976
Module Module1

    ' Please set the following connection strings in app.config for this WebJob to run:
    ' AzureWebJobsDashboard and AzureWebJobsStorage
    Sub Main()
        Dim host As New JobHost()
        ' The following code ensures that the WebJob will be running continuously            
        host.RunAndBlock()
    End Sub

End Module

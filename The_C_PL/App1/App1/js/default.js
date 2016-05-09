// 有关“空白”模板的简介，请参阅以下文档:
// http://go.microsoft.com/fwlink/?LinkId=232509
(function () {
	"use strict";

	var app = WinJS.Application;
	var activation = Windows.ApplicationModel.Activation;

	app.onactivated = function (args) {
		if (args.detail.kind === activation.ActivationKind.launch) {
			if (args.detail.previousExecutionState !== activation.ApplicationExecutionState.terminated) {
				//TODO: 已经新启动此应用程序。请在此初始化你的应用程序。
			} else {
				// TODO: 此应用程序已挂起，然后终止。
				// 若要创造顺畅的用户体验，请在此处还原应用程序状态，使应用似乎永不停止运行。
			}
			args.setPromise(WinJS.UI.processAll());
		}
	};

	app.oncheckpoint = function (args) {
		// TODO: 此应用程序将被挂起。请在此保存需要挂起中需要保存的任何状态。
		//你可以使用 WinJS.Application.sessionState 对象，该对象在挂起中会自动保存和还原。
		//如果需要在应用程序被挂起之前完成异步操作，请调用 args.setPromise()。
	};

	app.start();
})();

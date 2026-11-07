.class Lnet/gree/unitywebview/CWebViewPlugin$4$1;
.super Landroid/webkit/WebChromeClient;
.source "CWebViewPlugin.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lnet/gree/unitywebview/CWebViewPlugin$4;->run()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$1:Lnet/gree/unitywebview/CWebViewPlugin$4;


# direct methods
.method constructor <init>(Lnet/gree/unitywebview/CWebViewPlugin$4;)V
    .locals 0

    .line 445
    iput-object p1, p0, Lnet/gree/unitywebview/CWebViewPlugin$4$1;->this$1:Lnet/gree/unitywebview/CWebViewPlugin$4;

    invoke-direct {p0}, Landroid/webkit/WebChromeClient;-><init>()V

    return-void
.end method


# virtual methods
.method public onGeolocationPermissionsShowPrompt(Ljava/lang/String;Landroid/webkit/GeolocationPermissions$Callback;)V
    .locals 2

    const/4 v0, 0x1

    const/4 v1, 0x0

    .line 524
    invoke-interface {p2, p1, v0, v1}, Landroid/webkit/GeolocationPermissions$Callback;->invoke(Ljava/lang/String;ZZ)V

    return-void
.end method

.method public onHideCustomView()V
    .locals 2

    .line 487
    invoke-super {p0}, Landroid/webkit/WebChromeClient;->onHideCustomView()V

    .line 488
    invoke-static {}, Lnet/gree/unitywebview/CWebViewPlugin;->access$1100()Landroid/widget/FrameLayout;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 489
    invoke-static {}, Lnet/gree/unitywebview/CWebViewPlugin;->access$1100()Landroid/widget/FrameLayout;

    move-result-object v0

    iget-object v1, p0, Lnet/gree/unitywebview/CWebViewPlugin$4$1;->this$1:Lnet/gree/unitywebview/CWebViewPlugin$4;

    iget-object v1, v1, Lnet/gree/unitywebview/CWebViewPlugin$4;->this$0:Lnet/gree/unitywebview/CWebViewPlugin;

    invoke-static {v1}, Lnet/gree/unitywebview/CWebViewPlugin;->access$1200(Lnet/gree/unitywebview/CWebViewPlugin;)Landroid/view/View;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/FrameLayout;->removeView(Landroid/view/View;)V

    .line 490
    invoke-static {}, Lnet/gree/unitywebview/CWebViewPlugin;->access$1100()Landroid/widget/FrameLayout;

    move-result-object v0

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/widget/FrameLayout;->setBackgroundColor(I)V

    .line 491
    iget-object v0, p0, Lnet/gree/unitywebview/CWebViewPlugin$4$1;->this$1:Lnet/gree/unitywebview/CWebViewPlugin$4;

    iget-object v0, v0, Lnet/gree/unitywebview/CWebViewPlugin$4;->this$0:Lnet/gree/unitywebview/CWebViewPlugin;

    const/4 v1, 0x0

    invoke-static {v0, v1}, Lnet/gree/unitywebview/CWebViewPlugin;->access$1202(Lnet/gree/unitywebview/CWebViewPlugin;Landroid/view/View;)Landroid/view/View;

    :cond_0
    return-void
.end method

.method public onJsAlert(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;Landroid/webkit/JsResult;)Z
    .locals 1

    .line 497
    iget-object v0, p0, Lnet/gree/unitywebview/CWebViewPlugin$4$1;->this$1:Lnet/gree/unitywebview/CWebViewPlugin$4;

    iget-object v0, v0, Lnet/gree/unitywebview/CWebViewPlugin$4;->this$0:Lnet/gree/unitywebview/CWebViewPlugin;

    invoke-static {v0}, Lnet/gree/unitywebview/CWebViewPlugin;->access$600(Lnet/gree/unitywebview/CWebViewPlugin;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 498
    invoke-virtual {p4}, Landroid/webkit/JsResult;->cancel()V

    const/4 p1, 0x1

    return p1

    .line 501
    :cond_0
    invoke-super {p0, p1, p2, p3, p4}, Landroid/webkit/WebChromeClient;->onJsAlert(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;Landroid/webkit/JsResult;)Z

    move-result p1

    return p1
.end method

.method public onJsConfirm(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;Landroid/webkit/JsResult;)Z
    .locals 1

    .line 506
    iget-object v0, p0, Lnet/gree/unitywebview/CWebViewPlugin$4$1;->this$1:Lnet/gree/unitywebview/CWebViewPlugin$4;

    iget-object v0, v0, Lnet/gree/unitywebview/CWebViewPlugin$4;->this$0:Lnet/gree/unitywebview/CWebViewPlugin;

    invoke-static {v0}, Lnet/gree/unitywebview/CWebViewPlugin;->access$600(Lnet/gree/unitywebview/CWebViewPlugin;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 507
    invoke-virtual {p4}, Landroid/webkit/JsResult;->cancel()V

    const/4 p1, 0x1

    return p1

    .line 510
    :cond_0
    invoke-super {p0, p1, p2, p3, p4}, Landroid/webkit/WebChromeClient;->onJsConfirm(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;Landroid/webkit/JsResult;)Z

    move-result p1

    return p1
.end method

.method public onJsPrompt(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Landroid/webkit/JsPromptResult;)Z
    .locals 6

    .line 515
    iget-object v0, p0, Lnet/gree/unitywebview/CWebViewPlugin$4$1;->this$1:Lnet/gree/unitywebview/CWebViewPlugin$4;

    iget-object v0, v0, Lnet/gree/unitywebview/CWebViewPlugin$4;->this$0:Lnet/gree/unitywebview/CWebViewPlugin;

    invoke-static {v0}, Lnet/gree/unitywebview/CWebViewPlugin;->access$600(Lnet/gree/unitywebview/CWebViewPlugin;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 516
    invoke-virtual {p5}, Landroid/webkit/JsPromptResult;->cancel()V

    const/4 p1, 0x1

    return p1

    :cond_0
    move-object v0, p0

    move-object v1, p1

    move-object v2, p2

    move-object v3, p3

    move-object v4, p4

    move-object v5, p5

    .line 519
    invoke-super/range {v0 .. v5}, Landroid/webkit/WebChromeClient;->onJsPrompt(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Landroid/webkit/JsPromptResult;)Z

    move-result p1

    return p1
.end method

.method public onPermissionRequest(Landroid/webkit/PermissionRequest;)V
    .locals 5

    .line 450
    invoke-virtual {p1}, Landroid/webkit/PermissionRequest;->getResources()[Ljava/lang/String;

    move-result-object v0

    .line 451
    array-length v1, v0

    const/4 v2, 0x0

    :goto_0
    if-ge v2, v1, :cond_4

    aget-object v3, v0, v2

    .line 452
    const-string v4, "android.webkit.resource.VIDEO_CAPTURE"

    invoke-virtual {v3, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v4

    if-eqz v4, :cond_0

    iget-object v4, p0, Lnet/gree/unitywebview/CWebViewPlugin$4$1;->this$1:Lnet/gree/unitywebview/CWebViewPlugin$4;

    iget-object v4, v4, Lnet/gree/unitywebview/CWebViewPlugin$4;->this$0:Lnet/gree/unitywebview/CWebViewPlugin;

    invoke-static {v4}, Lnet/gree/unitywebview/CWebViewPlugin;->access$700(Lnet/gree/unitywebview/CWebViewPlugin;)Z

    move-result v4

    if-nez v4, :cond_2

    :cond_0
    const-string v4, "android.webkit.resource.AUDIO_CAPTURE"

    .line 453
    invoke-virtual {v3, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v4

    if-eqz v4, :cond_1

    iget-object v4, p0, Lnet/gree/unitywebview/CWebViewPlugin$4$1;->this$1:Lnet/gree/unitywebview/CWebViewPlugin$4;

    iget-object v4, v4, Lnet/gree/unitywebview/CWebViewPlugin$4;->this$0:Lnet/gree/unitywebview/CWebViewPlugin;

    invoke-static {v4}, Lnet/gree/unitywebview/CWebViewPlugin;->access$800(Lnet/gree/unitywebview/CWebViewPlugin;)Z

    move-result v4

    if-nez v4, :cond_2

    :cond_1
    const-string v4, "android.webkit.resource.PROTECTED_MEDIA_ID"

    .line 454
    invoke-virtual {v3, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_3

    .line 455
    :cond_2
    invoke-virtual {p1, v0}, Landroid/webkit/PermissionRequest;->grant([Ljava/lang/String;)V

    return-void

    :cond_3
    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    :cond_4
    return-void
.end method

.method public onProgressChanged(Landroid/webkit/WebView;I)V
    .locals 0

    .line 472
    iget-object p1, p0, Lnet/gree/unitywebview/CWebViewPlugin$4$1;->this$1:Lnet/gree/unitywebview/CWebViewPlugin$4;

    iget-object p1, p1, Lnet/gree/unitywebview/CWebViewPlugin$4;->this$0:Lnet/gree/unitywebview/CWebViewPlugin;

    invoke-static {p1, p2}, Lnet/gree/unitywebview/CWebViewPlugin;->access$1002(Lnet/gree/unitywebview/CWebViewPlugin;I)I

    return-void
.end method

.method public onShowCustomView(Landroid/view/View;Landroid/webkit/WebChromeClient$CustomViewCallback;)V
    .locals 0

    .line 477
    invoke-super {p0, p1, p2}, Landroid/webkit/WebChromeClient;->onShowCustomView(Landroid/view/View;Landroid/webkit/WebChromeClient$CustomViewCallback;)V

    .line 478
    invoke-static {}, Lnet/gree/unitywebview/CWebViewPlugin;->access$1100()Landroid/widget/FrameLayout;

    move-result-object p2

    if-eqz p2, :cond_0

    .line 479
    iget-object p2, p0, Lnet/gree/unitywebview/CWebViewPlugin$4$1;->this$1:Lnet/gree/unitywebview/CWebViewPlugin$4;

    iget-object p2, p2, Lnet/gree/unitywebview/CWebViewPlugin$4;->this$0:Lnet/gree/unitywebview/CWebViewPlugin;

    invoke-static {p2, p1}, Lnet/gree/unitywebview/CWebViewPlugin;->access$1202(Lnet/gree/unitywebview/CWebViewPlugin;Landroid/view/View;)Landroid/view/View;

    .line 480
    invoke-static {}, Lnet/gree/unitywebview/CWebViewPlugin;->access$1100()Landroid/widget/FrameLayout;

    move-result-object p1

    const/high16 p2, -0x1000000

    invoke-virtual {p1, p2}, Landroid/widget/FrameLayout;->setBackgroundColor(I)V

    .line 481
    invoke-static {}, Lnet/gree/unitywebview/CWebViewPlugin;->access$1100()Landroid/widget/FrameLayout;

    move-result-object p1

    iget-object p2, p0, Lnet/gree/unitywebview/CWebViewPlugin$4$1;->this$1:Lnet/gree/unitywebview/CWebViewPlugin$4;

    iget-object p2, p2, Lnet/gree/unitywebview/CWebViewPlugin$4;->this$0:Lnet/gree/unitywebview/CWebViewPlugin;

    invoke-static {p2}, Lnet/gree/unitywebview/CWebViewPlugin;->access$1200(Lnet/gree/unitywebview/CWebViewPlugin;)Landroid/view/View;

    move-result-object p2

    invoke-virtual {p1, p2}, Landroid/widget/FrameLayout;->addView(Landroid/view/View;)V

    :cond_0
    return-void
.end method

.method public onShowFileChooser(Landroid/webkit/WebView;Landroid/webkit/ValueCallback;Landroid/webkit/WebChromeClient$FileChooserParams;)Z
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/webkit/WebView;",
            "Landroid/webkit/ValueCallback<",
            "[",
            "Landroid/net/Uri;",
            ">;",
            "Landroid/webkit/WebChromeClient$FileChooserParams;",
            ")Z"
        }
    .end annotation

    .line 554
    iget-object p1, p0, Lnet/gree/unitywebview/CWebViewPlugin$4$1;->this$1:Lnet/gree/unitywebview/CWebViewPlugin$4;

    iget-object p1, p1, Lnet/gree/unitywebview/CWebViewPlugin$4;->this$0:Lnet/gree/unitywebview/CWebViewPlugin;

    invoke-static {p1, p2}, Lnet/gree/unitywebview/CWebViewPlugin;->access$202(Lnet/gree/unitywebview/CWebViewPlugin;Landroid/webkit/ValueCallback;)Landroid/webkit/ValueCallback;

    .line 555
    iget-object p1, p0, Lnet/gree/unitywebview/CWebViewPlugin$4$1;->this$1:Lnet/gree/unitywebview/CWebViewPlugin$4;

    iget-object p1, p1, Lnet/gree/unitywebview/CWebViewPlugin$4;->this$0:Lnet/gree/unitywebview/CWebViewPlugin;

    iget-object p2, p0, Lnet/gree/unitywebview/CWebViewPlugin$4$1;->this$1:Lnet/gree/unitywebview/CWebViewPlugin$4;

    iget-object p2, p2, Lnet/gree/unitywebview/CWebViewPlugin$4;->val$gameObject:Ljava/lang/String;

    const-string p3, "RequestFileChooserPermissions"

    const-string v0, ""

    invoke-virtual {p1, p2, p3, v0}, Lnet/gree/unitywebview/CWebViewPlugin;->MyUnitySendMessage(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    const/4 p1, 0x1

    return p1
.end method

.method public openFileChooser(Landroid/webkit/ValueCallback;Ljava/lang/String;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/webkit/ValueCallback<",
            "Landroid/net/Uri;",
            ">;",
            "Ljava/lang/String;",
            ")V"
        }
    .end annotation

    .line 534
    const-string v0, ""

    invoke-virtual {p0, p1, p2, v0}, Lnet/gree/unitywebview/CWebViewPlugin$4$1;->openFileChooser(Landroid/webkit/ValueCallback;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public openFileChooser(Landroid/webkit/ValueCallback;Ljava/lang/String;Ljava/lang/String;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/webkit/ValueCallback<",
            "Landroid/net/Uri;",
            ">;",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ")V"
        }
    .end annotation

    .line 539
    iget-object p2, p0, Lnet/gree/unitywebview/CWebViewPlugin$4$1;->this$1:Lnet/gree/unitywebview/CWebViewPlugin$4;

    iget-object p2, p2, Lnet/gree/unitywebview/CWebViewPlugin$4;->this$0:Lnet/gree/unitywebview/CWebViewPlugin;

    invoke-static {p2}, Lnet/gree/unitywebview/CWebViewPlugin;->access$1300(Lnet/gree/unitywebview/CWebViewPlugin;)Landroid/webkit/ValueCallback;

    move-result-object p2

    if-eqz p2, :cond_0

    .line 540
    iget-object p2, p0, Lnet/gree/unitywebview/CWebViewPlugin$4$1;->this$1:Lnet/gree/unitywebview/CWebViewPlugin$4;

    iget-object p2, p2, Lnet/gree/unitywebview/CWebViewPlugin$4;->this$0:Lnet/gree/unitywebview/CWebViewPlugin;

    invoke-static {p2}, Lnet/gree/unitywebview/CWebViewPlugin;->access$1300(Lnet/gree/unitywebview/CWebViewPlugin;)Landroid/webkit/ValueCallback;

    move-result-object p2

    const/4 p3, 0x0

    invoke-interface {p2, p3}, Landroid/webkit/ValueCallback;->onReceiveValue(Ljava/lang/Object;)V

    .line 542
    :cond_0
    iget-object p2, p0, Lnet/gree/unitywebview/CWebViewPlugin$4$1;->this$1:Lnet/gree/unitywebview/CWebViewPlugin$4;

    iget-object p2, p2, Lnet/gree/unitywebview/CWebViewPlugin$4;->this$0:Lnet/gree/unitywebview/CWebViewPlugin;

    invoke-static {p2, p1}, Lnet/gree/unitywebview/CWebViewPlugin;->access$1302(Lnet/gree/unitywebview/CWebViewPlugin;Landroid/webkit/ValueCallback;)Landroid/webkit/ValueCallback;

    .line 543
    new-instance p1, Landroid/content/Intent;

    const-string p2, "android.intent.action.GET_CONTENT"

    invoke-direct {p1, p2}, Landroid/content/Intent;-><init>(Ljava/lang/String;)V

    .line 544
    const-string p2, "android.intent.category.OPENABLE"

    invoke-virtual {p1, p2}, Landroid/content/Intent;->addCategory(Ljava/lang/String;)Landroid/content/Intent;

    .line 545
    const-string p2, "*/*"

    invoke-virtual {p1, p2}, Landroid/content/Intent;->setType(Ljava/lang/String;)Landroid/content/Intent;

    .line 546
    iget-object p2, p0, Lnet/gree/unitywebview/CWebViewPlugin$4$1;->this$1:Lnet/gree/unitywebview/CWebViewPlugin$4;

    iget-object p2, p2, Lnet/gree/unitywebview/CWebViewPlugin$4;->this$0:Lnet/gree/unitywebview/CWebViewPlugin;

    const/4 p3, 0x1

    invoke-virtual {p2, p1, p3}, Lnet/gree/unitywebview/CWebViewPlugin;->startActivityForResult(Landroid/content/Intent;I)V

    return-void
.end method

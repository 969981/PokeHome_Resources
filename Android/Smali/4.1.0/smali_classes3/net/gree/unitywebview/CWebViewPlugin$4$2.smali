.class Lnet/gree/unitywebview/CWebViewPlugin$4$2;
.super Landroid/webkit/WebViewClient;
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

.field final synthetic val$webView:Landroid/webkit/WebView;


# direct methods
.method constructor <init>(Lnet/gree/unitywebview/CWebViewPlugin$4;Landroid/webkit/WebView;)V
    .locals 0

    .line 562
    iput-object p1, p0, Lnet/gree/unitywebview/CWebViewPlugin$4$2;->this$1:Lnet/gree/unitywebview/CWebViewPlugin$4;

    iput-object p2, p0, Lnet/gree/unitywebview/CWebViewPlugin$4$2;->val$webView:Landroid/webkit/WebView;

    invoke-direct {p0}, Landroid/webkit/WebViewClient;-><init>()V

    return-void
.end method


# virtual methods
.method public onLoadResource(Landroid/webkit/WebView;Ljava/lang/String;)V
    .locals 0

    .line 594
    iget-object p1, p0, Lnet/gree/unitywebview/CWebViewPlugin$4$2;->this$1:Lnet/gree/unitywebview/CWebViewPlugin$4;

    iget-object p1, p1, Lnet/gree/unitywebview/CWebViewPlugin$4;->this$0:Lnet/gree/unitywebview/CWebViewPlugin;

    iget-object p2, p0, Lnet/gree/unitywebview/CWebViewPlugin$4$2;->val$webView:Landroid/webkit/WebView;

    invoke-virtual {p2}, Landroid/webkit/WebView;->canGoBack()Z

    move-result p2

    invoke-static {p1, p2}, Lnet/gree/unitywebview/CWebViewPlugin;->access$1502(Lnet/gree/unitywebview/CWebViewPlugin;Z)Z

    .line 595
    iget-object p1, p0, Lnet/gree/unitywebview/CWebViewPlugin$4$2;->this$1:Lnet/gree/unitywebview/CWebViewPlugin$4;

    iget-object p1, p1, Lnet/gree/unitywebview/CWebViewPlugin$4;->this$0:Lnet/gree/unitywebview/CWebViewPlugin;

    iget-object p2, p0, Lnet/gree/unitywebview/CWebViewPlugin$4$2;->val$webView:Landroid/webkit/WebView;

    invoke-virtual {p2}, Landroid/webkit/WebView;->canGoForward()Z

    move-result p2

    invoke-static {p1, p2}, Lnet/gree/unitywebview/CWebViewPlugin;->access$1602(Lnet/gree/unitywebview/CWebViewPlugin;Z)Z

    return-void
.end method

.method public onPageFinished(Landroid/webkit/WebView;Ljava/lang/String;)V
    .locals 1

    .line 587
    iget-object p1, p0, Lnet/gree/unitywebview/CWebViewPlugin$4$2;->this$1:Lnet/gree/unitywebview/CWebViewPlugin$4;

    iget-object p1, p1, Lnet/gree/unitywebview/CWebViewPlugin$4;->this$0:Lnet/gree/unitywebview/CWebViewPlugin;

    iget-object v0, p0, Lnet/gree/unitywebview/CWebViewPlugin$4$2;->val$webView:Landroid/webkit/WebView;

    invoke-virtual {v0}, Landroid/webkit/WebView;->canGoBack()Z

    move-result v0

    invoke-static {p1, v0}, Lnet/gree/unitywebview/CWebViewPlugin;->access$1502(Lnet/gree/unitywebview/CWebViewPlugin;Z)Z

    .line 588
    iget-object p1, p0, Lnet/gree/unitywebview/CWebViewPlugin$4$2;->this$1:Lnet/gree/unitywebview/CWebViewPlugin$4;

    iget-object p1, p1, Lnet/gree/unitywebview/CWebViewPlugin$4;->this$0:Lnet/gree/unitywebview/CWebViewPlugin;

    iget-object v0, p0, Lnet/gree/unitywebview/CWebViewPlugin$4$2;->val$webView:Landroid/webkit/WebView;

    invoke-virtual {v0}, Landroid/webkit/WebView;->canGoForward()Z

    move-result v0

    invoke-static {p1, v0}, Lnet/gree/unitywebview/CWebViewPlugin;->access$1602(Lnet/gree/unitywebview/CWebViewPlugin;Z)Z

    .line 589
    iget-object p1, p0, Lnet/gree/unitywebview/CWebViewPlugin$4$2;->this$1:Lnet/gree/unitywebview/CWebViewPlugin$4;

    iget-object p1, p1, Lnet/gree/unitywebview/CWebViewPlugin$4;->this$0:Lnet/gree/unitywebview/CWebViewPlugin;

    invoke-static {p1}, Lnet/gree/unitywebview/CWebViewPlugin;->access$1400(Lnet/gree/unitywebview/CWebViewPlugin;)Lnet/gree/unitywebview/CWebViewPluginInterface;

    move-result-object p1

    const-string v0, "CallOnLoaded"

    invoke-virtual {p1, v0, p2}, Lnet/gree/unitywebview/CWebViewPluginInterface;->call(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public onPageStarted(Landroid/webkit/WebView;Ljava/lang/String;Landroid/graphics/Bitmap;)V
    .locals 0

    .line 580
    iget-object p1, p0, Lnet/gree/unitywebview/CWebViewPlugin$4$2;->this$1:Lnet/gree/unitywebview/CWebViewPlugin$4;

    iget-object p1, p1, Lnet/gree/unitywebview/CWebViewPlugin$4;->this$0:Lnet/gree/unitywebview/CWebViewPlugin;

    iget-object p3, p0, Lnet/gree/unitywebview/CWebViewPlugin$4$2;->val$webView:Landroid/webkit/WebView;

    invoke-virtual {p3}, Landroid/webkit/WebView;->canGoBack()Z

    move-result p3

    invoke-static {p1, p3}, Lnet/gree/unitywebview/CWebViewPlugin;->access$1502(Lnet/gree/unitywebview/CWebViewPlugin;Z)Z

    .line 581
    iget-object p1, p0, Lnet/gree/unitywebview/CWebViewPlugin$4$2;->this$1:Lnet/gree/unitywebview/CWebViewPlugin$4;

    iget-object p1, p1, Lnet/gree/unitywebview/CWebViewPlugin$4;->this$0:Lnet/gree/unitywebview/CWebViewPlugin;

    iget-object p3, p0, Lnet/gree/unitywebview/CWebViewPlugin$4$2;->val$webView:Landroid/webkit/WebView;

    invoke-virtual {p3}, Landroid/webkit/WebView;->canGoForward()Z

    move-result p3

    invoke-static {p1, p3}, Lnet/gree/unitywebview/CWebViewPlugin;->access$1602(Lnet/gree/unitywebview/CWebViewPlugin;Z)Z

    .line 582
    iget-object p1, p0, Lnet/gree/unitywebview/CWebViewPlugin$4$2;->this$1:Lnet/gree/unitywebview/CWebViewPlugin$4;

    iget-object p1, p1, Lnet/gree/unitywebview/CWebViewPlugin$4;->this$0:Lnet/gree/unitywebview/CWebViewPlugin;

    invoke-static {p1}, Lnet/gree/unitywebview/CWebViewPlugin;->access$1400(Lnet/gree/unitywebview/CWebViewPlugin;)Lnet/gree/unitywebview/CWebViewPluginInterface;

    move-result-object p1

    const-string p3, "CallOnStarted"

    invoke-virtual {p1, p3, p2}, Lnet/gree/unitywebview/CWebViewPluginInterface;->call(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public onReceivedError(Landroid/webkit/WebView;ILjava/lang/String;Ljava/lang/String;)V
    .locals 1

    .line 565
    iget-object p1, p0, Lnet/gree/unitywebview/CWebViewPlugin$4$2;->val$webView:Landroid/webkit/WebView;

    const-string v0, "about:blank"

    invoke-virtual {p1, v0}, Landroid/webkit/WebView;->loadUrl(Ljava/lang/String;)V

    .line 566
    iget-object p1, p0, Lnet/gree/unitywebview/CWebViewPlugin$4$2;->this$1:Lnet/gree/unitywebview/CWebViewPlugin$4;

    iget-object p1, p1, Lnet/gree/unitywebview/CWebViewPlugin$4;->this$0:Lnet/gree/unitywebview/CWebViewPlugin;

    iget-object v0, p0, Lnet/gree/unitywebview/CWebViewPlugin$4$2;->val$webView:Landroid/webkit/WebView;

    invoke-virtual {v0}, Landroid/webkit/WebView;->canGoBack()Z

    move-result v0

    invoke-static {p1, v0}, Lnet/gree/unitywebview/CWebViewPlugin;->access$1502(Lnet/gree/unitywebview/CWebViewPlugin;Z)Z

    .line 567
    iget-object p1, p0, Lnet/gree/unitywebview/CWebViewPlugin$4$2;->this$1:Lnet/gree/unitywebview/CWebViewPlugin$4;

    iget-object p1, p1, Lnet/gree/unitywebview/CWebViewPlugin$4;->this$0:Lnet/gree/unitywebview/CWebViewPlugin;

    iget-object v0, p0, Lnet/gree/unitywebview/CWebViewPlugin$4$2;->val$webView:Landroid/webkit/WebView;

    invoke-virtual {v0}, Landroid/webkit/WebView;->canGoForward()Z

    move-result v0

    invoke-static {p1, v0}, Lnet/gree/unitywebview/CWebViewPlugin;->access$1602(Lnet/gree/unitywebview/CWebViewPlugin;Z)Z

    .line 568
    iget-object p1, p0, Lnet/gree/unitywebview/CWebViewPlugin$4$2;->this$1:Lnet/gree/unitywebview/CWebViewPlugin$4;

    iget-object p1, p1, Lnet/gree/unitywebview/CWebViewPlugin$4;->this$0:Lnet/gree/unitywebview/CWebViewPlugin;

    invoke-static {p1}, Lnet/gree/unitywebview/CWebViewPlugin;->access$1400(Lnet/gree/unitywebview/CWebViewPlugin;)Lnet/gree/unitywebview/CWebViewPluginInterface;

    move-result-object p1

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p2, "\t"

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    const-string p3, "CallOnError"

    invoke-virtual {p1, p3, p2}, Lnet/gree/unitywebview/CWebViewPluginInterface;->call(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public onReceivedHttpAuthRequest(Landroid/webkit/WebView;Landroid/webkit/HttpAuthHandler;Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    .line 600
    iget-object p1, p0, Lnet/gree/unitywebview/CWebViewPlugin$4$2;->this$1:Lnet/gree/unitywebview/CWebViewPlugin$4;

    iget-object p1, p1, Lnet/gree/unitywebview/CWebViewPlugin$4;->this$0:Lnet/gree/unitywebview/CWebViewPlugin;

    invoke-static {p1}, Lnet/gree/unitywebview/CWebViewPlugin;->access$1700(Lnet/gree/unitywebview/CWebViewPlugin;)Ljava/lang/String;

    move-result-object p1

    if-eqz p1, :cond_0

    iget-object p1, p0, Lnet/gree/unitywebview/CWebViewPlugin$4$2;->this$1:Lnet/gree/unitywebview/CWebViewPlugin$4;

    iget-object p1, p1, Lnet/gree/unitywebview/CWebViewPlugin$4;->this$0:Lnet/gree/unitywebview/CWebViewPlugin;

    invoke-static {p1}, Lnet/gree/unitywebview/CWebViewPlugin;->access$1800(Lnet/gree/unitywebview/CWebViewPlugin;)Ljava/lang/String;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 601
    iget-object p1, p0, Lnet/gree/unitywebview/CWebViewPlugin$4$2;->this$1:Lnet/gree/unitywebview/CWebViewPlugin$4;

    iget-object p1, p1, Lnet/gree/unitywebview/CWebViewPlugin$4;->this$0:Lnet/gree/unitywebview/CWebViewPlugin;

    invoke-static {p1}, Lnet/gree/unitywebview/CWebViewPlugin;->access$1700(Lnet/gree/unitywebview/CWebViewPlugin;)Ljava/lang/String;

    move-result-object p1

    iget-object p3, p0, Lnet/gree/unitywebview/CWebViewPlugin$4$2;->this$1:Lnet/gree/unitywebview/CWebViewPlugin$4;

    iget-object p3, p3, Lnet/gree/unitywebview/CWebViewPlugin$4;->this$0:Lnet/gree/unitywebview/CWebViewPlugin;

    invoke-static {p3}, Lnet/gree/unitywebview/CWebViewPlugin;->access$1800(Lnet/gree/unitywebview/CWebViewPlugin;)Ljava/lang/String;

    move-result-object p3

    invoke-virtual {p2, p1, p3}, Landroid/webkit/HttpAuthHandler;->proceed(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    .line 603
    :cond_0
    invoke-virtual {p2}, Landroid/webkit/HttpAuthHandler;->cancel()V

    return-void
.end method

.method public onReceivedHttpError(Landroid/webkit/WebView;Landroid/webkit/WebResourceRequest;Landroid/webkit/WebResourceResponse;)V
    .locals 0

    .line 573
    iget-object p1, p0, Lnet/gree/unitywebview/CWebViewPlugin$4$2;->this$1:Lnet/gree/unitywebview/CWebViewPlugin$4;

    iget-object p1, p1, Lnet/gree/unitywebview/CWebViewPlugin$4;->this$0:Lnet/gree/unitywebview/CWebViewPlugin;

    iget-object p2, p0, Lnet/gree/unitywebview/CWebViewPlugin$4$2;->val$webView:Landroid/webkit/WebView;

    invoke-virtual {p2}, Landroid/webkit/WebView;->canGoBack()Z

    move-result p2

    invoke-static {p1, p2}, Lnet/gree/unitywebview/CWebViewPlugin;->access$1502(Lnet/gree/unitywebview/CWebViewPlugin;Z)Z

    .line 574
    iget-object p1, p0, Lnet/gree/unitywebview/CWebViewPlugin$4$2;->this$1:Lnet/gree/unitywebview/CWebViewPlugin$4;

    iget-object p1, p1, Lnet/gree/unitywebview/CWebViewPlugin$4;->this$0:Lnet/gree/unitywebview/CWebViewPlugin;

    iget-object p2, p0, Lnet/gree/unitywebview/CWebViewPlugin$4$2;->val$webView:Landroid/webkit/WebView;

    invoke-virtual {p2}, Landroid/webkit/WebView;->canGoForward()Z

    move-result p2

    invoke-static {p1, p2}, Lnet/gree/unitywebview/CWebViewPlugin;->access$1602(Lnet/gree/unitywebview/CWebViewPlugin;Z)Z

    .line 575
    iget-object p1, p0, Lnet/gree/unitywebview/CWebViewPlugin$4$2;->this$1:Lnet/gree/unitywebview/CWebViewPlugin$4;

    iget-object p1, p1, Lnet/gree/unitywebview/CWebViewPlugin$4;->this$0:Lnet/gree/unitywebview/CWebViewPlugin;

    invoke-static {p1}, Lnet/gree/unitywebview/CWebViewPlugin;->access$1400(Lnet/gree/unitywebview/CWebViewPlugin;)Lnet/gree/unitywebview/CWebViewPluginInterface;

    move-result-object p1

    invoke-virtual {p3}, Landroid/webkit/WebResourceResponse;->getStatusCode()I

    move-result p2

    invoke-static {p2}, Ljava/lang/Integer;->toString(I)Ljava/lang/String;

    move-result-object p2

    const-string p3, "CallOnHttpError"

    invoke-virtual {p1, p3, p2}, Lnet/gree/unitywebview/CWebViewPluginInterface;->call(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public shouldInterceptRequest(Landroid/webkit/WebView;Landroid/webkit/WebResourceRequest;)Landroid/webkit/WebResourceResponse;
    .locals 1

    .line 617
    iget-object v0, p0, Lnet/gree/unitywebview/CWebViewPlugin$4$2;->this$1:Lnet/gree/unitywebview/CWebViewPlugin$4;

    iget-object v0, v0, Lnet/gree/unitywebview/CWebViewPlugin$4;->this$0:Lnet/gree/unitywebview/CWebViewPlugin;

    invoke-static {v0}, Lnet/gree/unitywebview/CWebViewPlugin;->access$900(Lnet/gree/unitywebview/CWebViewPlugin;)Ljava/util/Hashtable;

    move-result-object v0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lnet/gree/unitywebview/CWebViewPlugin$4$2;->this$1:Lnet/gree/unitywebview/CWebViewPlugin$4;

    iget-object v0, v0, Lnet/gree/unitywebview/CWebViewPlugin$4;->this$0:Lnet/gree/unitywebview/CWebViewPlugin;

    invoke-static {v0}, Lnet/gree/unitywebview/CWebViewPlugin;->access$900(Lnet/gree/unitywebview/CWebViewPlugin;)Ljava/util/Hashtable;

    move-result-object v0

    invoke-virtual {v0}, Ljava/util/Hashtable;->isEmpty()Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    .line 620
    :cond_0
    invoke-interface {p2}, Landroid/webkit/WebResourceRequest;->getUrl()Landroid/net/Uri;

    move-result-object v0

    invoke-virtual {v0}, Landroid/net/Uri;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-interface {p2}, Landroid/webkit/WebResourceRequest;->getRequestHeaders()Ljava/util/Map;

    move-result-object p2

    invoke-virtual {p0, p1, v0, p2}, Lnet/gree/unitywebview/CWebViewPlugin$4$2;->shouldInterceptRequest(Landroid/webkit/WebView;Ljava/lang/String;Ljava/util/Map;)Landroid/webkit/WebResourceResponse;

    move-result-object p1

    return-object p1

    .line 618
    :cond_1
    :goto_0
    invoke-super {p0, p1, p2}, Landroid/webkit/WebViewClient;->shouldInterceptRequest(Landroid/webkit/WebView;Landroid/webkit/WebResourceRequest;)Landroid/webkit/WebResourceResponse;

    move-result-object p1

    return-object p1
.end method

.method public shouldInterceptRequest(Landroid/webkit/WebView;Ljava/lang/String;)Landroid/webkit/WebResourceResponse;
    .locals 1

    .line 609
    iget-object v0, p0, Lnet/gree/unitywebview/CWebViewPlugin$4$2;->this$1:Lnet/gree/unitywebview/CWebViewPlugin$4;

    iget-object v0, v0, Lnet/gree/unitywebview/CWebViewPlugin$4;->this$0:Lnet/gree/unitywebview/CWebViewPlugin;

    invoke-static {v0}, Lnet/gree/unitywebview/CWebViewPlugin;->access$900(Lnet/gree/unitywebview/CWebViewPlugin;)Ljava/util/Hashtable;

    move-result-object v0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lnet/gree/unitywebview/CWebViewPlugin$4$2;->this$1:Lnet/gree/unitywebview/CWebViewPlugin$4;

    iget-object v0, v0, Lnet/gree/unitywebview/CWebViewPlugin$4;->this$0:Lnet/gree/unitywebview/CWebViewPlugin;

    invoke-static {v0}, Lnet/gree/unitywebview/CWebViewPlugin;->access$900(Lnet/gree/unitywebview/CWebViewPlugin;)Ljava/util/Hashtable;

    move-result-object v0

    invoke-virtual {v0}, Ljava/util/Hashtable;->isEmpty()Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    .line 612
    invoke-virtual {p0, p1, p2, v0}, Lnet/gree/unitywebview/CWebViewPlugin$4$2;->shouldInterceptRequest(Landroid/webkit/WebView;Ljava/lang/String;Ljava/util/Map;)Landroid/webkit/WebResourceResponse;

    move-result-object p1

    return-object p1

    .line 610
    :cond_1
    :goto_0
    invoke-super {p0, p1, p2}, Landroid/webkit/WebViewClient;->shouldInterceptRequest(Landroid/webkit/WebView;Ljava/lang/String;)Landroid/webkit/WebResourceResponse;

    move-result-object p1

    return-object p1
.end method

.method public shouldInterceptRequest(Landroid/webkit/WebView;Ljava/lang/String;Ljava/util/Map;)Landroid/webkit/WebResourceResponse;
    .locals 7
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/webkit/WebView;",
            "Ljava/lang/String;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)",
            "Landroid/webkit/WebResourceResponse;"
        }
    .end annotation

    const-string v0, "Basic "

    .line 625
    :try_start_0
    new-instance v1, Ljava/net/URL;

    invoke-direct {v1, p2}, Ljava/net/URL;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1}, Ljava/net/URL;->openConnection()Ljava/net/URLConnection;

    move-result-object v1

    check-cast v1, Ljava/net/HttpURLConnection;

    const/4 v2, 0x0

    .line 626
    invoke-virtual {v1, v2}, Ljava/net/HttpURLConnection;->setInstanceFollowRedirects(Z)V

    .line 629
    const-string v3, "User-Agent"

    iget-object v4, p0, Lnet/gree/unitywebview/CWebViewPlugin$4$2;->this$1:Lnet/gree/unitywebview/CWebViewPlugin$4;

    iget-object v4, v4, Lnet/gree/unitywebview/CWebViewPlugin$4;->this$0:Lnet/gree/unitywebview/CWebViewPlugin;

    invoke-static {v4}, Lnet/gree/unitywebview/CWebViewPlugin;->access$1900(Lnet/gree/unitywebview/CWebViewPlugin;)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v1, v3, v4}, Ljava/net/HttpURLConnection;->setRequestProperty(Ljava/lang/String;Ljava/lang/String;)V

    .line 631
    iget-object v3, p0, Lnet/gree/unitywebview/CWebViewPlugin$4$2;->this$1:Lnet/gree/unitywebview/CWebViewPlugin$4;

    iget-object v3, v3, Lnet/gree/unitywebview/CWebViewPlugin$4;->this$0:Lnet/gree/unitywebview/CWebViewPlugin;

    invoke-static {v3}, Lnet/gree/unitywebview/CWebViewPlugin;->access$1700(Lnet/gree/unitywebview/CWebViewPlugin;)Ljava/lang/String;

    move-result-object v3

    const/4 v4, 0x2

    if-eqz v3, :cond_0

    iget-object v3, p0, Lnet/gree/unitywebview/CWebViewPlugin$4$2;->this$1:Lnet/gree/unitywebview/CWebViewPlugin$4;

    iget-object v3, v3, Lnet/gree/unitywebview/CWebViewPlugin$4;->this$0:Lnet/gree/unitywebview/CWebViewPlugin;

    invoke-static {v3}, Lnet/gree/unitywebview/CWebViewPlugin;->access$1800(Lnet/gree/unitywebview/CWebViewPlugin;)Ljava/lang/String;

    move-result-object v3

    if-eqz v3, :cond_0

    .line 632
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v5, p0, Lnet/gree/unitywebview/CWebViewPlugin$4$2;->this$1:Lnet/gree/unitywebview/CWebViewPlugin$4;

    iget-object v5, v5, Lnet/gree/unitywebview/CWebViewPlugin$4;->this$0:Lnet/gree/unitywebview/CWebViewPlugin;

    invoke-static {v5}, Lnet/gree/unitywebview/CWebViewPlugin;->access$1700(Lnet/gree/unitywebview/CWebViewPlugin;)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v5, ":"

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v5, p0, Lnet/gree/unitywebview/CWebViewPlugin$4$2;->this$1:Lnet/gree/unitywebview/CWebViewPlugin$4;

    iget-object v5, v5, Lnet/gree/unitywebview/CWebViewPlugin$4;->this$0:Lnet/gree/unitywebview/CWebViewPlugin;

    invoke-static {v5}, Lnet/gree/unitywebview/CWebViewPlugin;->access$1800(Lnet/gree/unitywebview/CWebViewPlugin;)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    .line 633
    const-string v5, "Authorization"

    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v3}, Ljava/lang/String;->getBytes()[B

    move-result-object v0

    invoke-static {v0, v4}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v6, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v1, v5, v0}, Ljava/net/HttpURLConnection;->setRequestProperty(Ljava/lang/String;Ljava/lang/String;)V

    .line 638
    :cond_0
    invoke-static {}, Landroid/webkit/CookieManager;->getInstance()Landroid/webkit/CookieManager;

    move-result-object v0

    invoke-virtual {v0, p2}, Landroid/webkit/CookieManager;->getCookie(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 639
    invoke-virtual {v0}, Ljava/lang/String;->isEmpty()Z

    move-result v3

    if-nez v3, :cond_1

    .line 640
    const-string v3, "Cookie"

    invoke-virtual {v1, v3, v0}, Ljava/net/HttpURLConnection;->addRequestProperty(Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    if-eqz p3, :cond_2

    .line 645
    invoke-interface {p3}, Ljava/util/Map;->entrySet()Ljava/util/Set;

    move-result-object p3

    invoke-interface {p3}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object p3

    :goto_0
    invoke-interface {p3}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_2

    invoke-interface {p3}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/Map$Entry;

    .line 646
    invoke-interface {v0}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    invoke-interface {v0}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    invoke-virtual {v1, v3, v0}, Ljava/net/HttpURLConnection;->setRequestProperty(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    .line 649
    :cond_2
    iget-object p3, p0, Lnet/gree/unitywebview/CWebViewPlugin$4$2;->this$1:Lnet/gree/unitywebview/CWebViewPlugin$4;

    iget-object p3, p3, Lnet/gree/unitywebview/CWebViewPlugin$4;->this$0:Lnet/gree/unitywebview/CWebViewPlugin;

    invoke-static {p3}, Lnet/gree/unitywebview/CWebViewPlugin;->access$900(Lnet/gree/unitywebview/CWebViewPlugin;)Ljava/util/Hashtable;

    move-result-object p3

    invoke-virtual {p3}, Ljava/util/Hashtable;->entrySet()Ljava/util/Set;

    move-result-object p3

    invoke-interface {p3}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object p3

    :goto_1
    invoke-interface {p3}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_3

    invoke-interface {p3}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/Map$Entry;

    .line 650
    invoke-interface {v0}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    invoke-interface {v0}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    invoke-virtual {v1, v3, v0}, Ljava/net/HttpURLConnection;->setRequestProperty(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_1

    .line 653
    :cond_3
    invoke-virtual {v1}, Ljava/net/HttpURLConnection;->connect()V

    .line 655
    invoke-virtual {v1}, Ljava/net/HttpURLConnection;->getResponseCode()I

    move-result p3

    const/16 v0, 0x12c

    if-lt p3, v0, :cond_4

    const/16 v0, 0x190

    if-ge p3, v0, :cond_4

    const/4 p1, 0x0

    return-object p1

    .line 662
    :cond_4
    invoke-virtual {v1}, Ljava/net/HttpURLConnection;->getHeaderFields()Ljava/util/Map;

    move-result-object p3

    const-string v0, "Set-Cookie"

    invoke-interface {p3, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p3

    check-cast p3, Ljava/util/List;

    if-eqz p3, :cond_5

    .line 675
    iget-object v0, p0, Lnet/gree/unitywebview/CWebViewPlugin$4$2;->this$1:Lnet/gree/unitywebview/CWebViewPlugin$4;

    iget-object v0, v0, Lnet/gree/unitywebview/CWebViewPlugin$4;->this$0:Lnet/gree/unitywebview/CWebViewPlugin;

    invoke-virtual {v0, p2, p3}, Lnet/gree/unitywebview/CWebViewPlugin;->SetCookies(Ljava/lang/String;Ljava/util/List;)V

    .line 679
    :cond_5
    new-instance p3, Landroid/webkit/WebResourceResponse;

    .line 680
    invoke-virtual {v1}, Ljava/net/HttpURLConnection;->getContentType()Ljava/lang/String;

    move-result-object v0

    const-string v3, ";"

    invoke-virtual {v0, v3, v4}, Ljava/lang/String;->split(Ljava/lang/String;I)[Ljava/lang/String;

    move-result-object v0

    aget-object v0, v0, v2

    .line 681
    invoke-virtual {v1}, Ljava/net/HttpURLConnection;->getContentEncoding()Ljava/lang/String;

    move-result-object v2

    .line 682
    invoke-virtual {v1}, Ljava/net/HttpURLConnection;->getInputStream()Ljava/io/InputStream;

    move-result-object v1

    invoke-direct {p3, v0, v2, v1}, Landroid/webkit/WebResourceResponse;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/io/InputStream;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object p3

    .line 686
    :catch_0
    invoke-super {p0, p1, p2}, Landroid/webkit/WebViewClient;->shouldInterceptRequest(Landroid/webkit/WebView;Ljava/lang/String;)Landroid/webkit/WebResourceResponse;

    move-result-object p1

    return-object p1
.end method

.method public shouldOverrideUrlLoading(Landroid/webkit/WebView;Ljava/lang/String;)Z
    .locals 3

    .line 692
    iget-object v0, p0, Lnet/gree/unitywebview/CWebViewPlugin$4$2;->this$1:Lnet/gree/unitywebview/CWebViewPlugin$4;

    iget-object v0, v0, Lnet/gree/unitywebview/CWebViewPlugin$4;->this$0:Lnet/gree/unitywebview/CWebViewPlugin;

    iget-object v1, p0, Lnet/gree/unitywebview/CWebViewPlugin$4$2;->val$webView:Landroid/webkit/WebView;

    invoke-virtual {v1}, Landroid/webkit/WebView;->canGoBack()Z

    move-result v1

    invoke-static {v0, v1}, Lnet/gree/unitywebview/CWebViewPlugin;->access$1502(Lnet/gree/unitywebview/CWebViewPlugin;Z)Z

    .line 693
    iget-object v0, p0, Lnet/gree/unitywebview/CWebViewPlugin$4$2;->this$1:Lnet/gree/unitywebview/CWebViewPlugin$4;

    iget-object v0, v0, Lnet/gree/unitywebview/CWebViewPlugin$4;->this$0:Lnet/gree/unitywebview/CWebViewPlugin;

    iget-object v1, p0, Lnet/gree/unitywebview/CWebViewPlugin$4$2;->val$webView:Landroid/webkit/WebView;

    invoke-virtual {v1}, Landroid/webkit/WebView;->canGoForward()Z

    move-result v1

    invoke-static {v0, v1}, Lnet/gree/unitywebview/CWebViewPlugin;->access$1602(Lnet/gree/unitywebview/CWebViewPlugin;Z)Z

    .line 695
    iget-object v0, p0, Lnet/gree/unitywebview/CWebViewPlugin$4$2;->this$1:Lnet/gree/unitywebview/CWebViewPlugin$4;

    iget-object v0, v0, Lnet/gree/unitywebview/CWebViewPlugin$4;->this$0:Lnet/gree/unitywebview/CWebViewPlugin;

    invoke-static {v0}, Lnet/gree/unitywebview/CWebViewPlugin;->access$2000(Lnet/gree/unitywebview/CWebViewPlugin;)Ljava/util/regex/Pattern;

    move-result-object v0

    const/4 v1, 0x1

    if-eqz v0, :cond_0

    iget-object v0, p0, Lnet/gree/unitywebview/CWebViewPlugin$4$2;->this$1:Lnet/gree/unitywebview/CWebViewPlugin$4;

    iget-object v0, v0, Lnet/gree/unitywebview/CWebViewPlugin$4;->this$0:Lnet/gree/unitywebview/CWebViewPlugin;

    invoke-static {v0}, Lnet/gree/unitywebview/CWebViewPlugin;->access$2000(Lnet/gree/unitywebview/CWebViewPlugin;)Ljava/util/regex/Pattern;

    move-result-object v0

    invoke-virtual {v0, p2}, Ljava/util/regex/Pattern;->matcher(Ljava/lang/CharSequence;)Ljava/util/regex/Matcher;

    move-result-object v0

    invoke-virtual {v0}, Ljava/util/regex/Matcher;->find()Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    .line 697
    :cond_0
    iget-object v0, p0, Lnet/gree/unitywebview/CWebViewPlugin$4$2;->this$1:Lnet/gree/unitywebview/CWebViewPlugin$4;

    iget-object v0, v0, Lnet/gree/unitywebview/CWebViewPlugin$4;->this$0:Lnet/gree/unitywebview/CWebViewPlugin;

    invoke-static {v0}, Lnet/gree/unitywebview/CWebViewPlugin;->access$2100(Lnet/gree/unitywebview/CWebViewPlugin;)Ljava/util/regex/Pattern;

    move-result-object v0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lnet/gree/unitywebview/CWebViewPlugin$4$2;->this$1:Lnet/gree/unitywebview/CWebViewPlugin$4;

    iget-object v0, v0, Lnet/gree/unitywebview/CWebViewPlugin$4;->this$0:Lnet/gree/unitywebview/CWebViewPlugin;

    invoke-static {v0}, Lnet/gree/unitywebview/CWebViewPlugin;->access$2100(Lnet/gree/unitywebview/CWebViewPlugin;)Ljava/util/regex/Pattern;

    move-result-object v0

    invoke-virtual {v0, p2}, Ljava/util/regex/Pattern;->matcher(Ljava/lang/CharSequence;)Ljava/util/regex/Matcher;

    move-result-object v0

    invoke-virtual {v0}, Ljava/util/regex/Matcher;->find()Z

    move-result v0

    if-eqz v0, :cond_1

    return v1

    .line 703
    :cond_1
    :goto_0
    const-string v0, "unity:"

    invoke-virtual {p2, v0}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_2

    const/4 p1, 0x6

    .line 704
    invoke-virtual {p2, p1}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object p1

    .line 705
    iget-object p2, p0, Lnet/gree/unitywebview/CWebViewPlugin$4$2;->this$1:Lnet/gree/unitywebview/CWebViewPlugin$4;

    iget-object p2, p2, Lnet/gree/unitywebview/CWebViewPlugin$4;->this$0:Lnet/gree/unitywebview/CWebViewPlugin;

    invoke-static {p2}, Lnet/gree/unitywebview/CWebViewPlugin;->access$1400(Lnet/gree/unitywebview/CWebViewPlugin;)Lnet/gree/unitywebview/CWebViewPluginInterface;

    move-result-object p2

    const-string v0, "CallFromJS"

    invoke-virtual {p2, v0, p1}, Lnet/gree/unitywebview/CWebViewPluginInterface;->call(Ljava/lang/String;Ljava/lang/String;)V

    return v1

    .line 707
    :cond_2
    iget-object v0, p0, Lnet/gree/unitywebview/CWebViewPlugin$4$2;->this$1:Lnet/gree/unitywebview/CWebViewPlugin$4;

    iget-object v0, v0, Lnet/gree/unitywebview/CWebViewPlugin$4;->this$0:Lnet/gree/unitywebview/CWebViewPlugin;

    invoke-static {v0}, Lnet/gree/unitywebview/CWebViewPlugin;->access$2200(Lnet/gree/unitywebview/CWebViewPlugin;)Ljava/util/regex/Pattern;

    move-result-object v0

    if-eqz v0, :cond_3

    iget-object v0, p0, Lnet/gree/unitywebview/CWebViewPlugin$4$2;->this$1:Lnet/gree/unitywebview/CWebViewPlugin$4;

    iget-object v0, v0, Lnet/gree/unitywebview/CWebViewPlugin$4;->this$0:Lnet/gree/unitywebview/CWebViewPlugin;

    invoke-static {v0}, Lnet/gree/unitywebview/CWebViewPlugin;->access$2200(Lnet/gree/unitywebview/CWebViewPlugin;)Ljava/util/regex/Pattern;

    move-result-object v0

    invoke-virtual {v0, p2}, Ljava/util/regex/Pattern;->matcher(Ljava/lang/CharSequence;)Ljava/util/regex/Matcher;

    move-result-object v0

    invoke-virtual {v0}, Ljava/util/regex/Matcher;->find()Z

    move-result v0

    if-eqz v0, :cond_3

    .line 708
    iget-object p1, p0, Lnet/gree/unitywebview/CWebViewPlugin$4$2;->this$1:Lnet/gree/unitywebview/CWebViewPlugin$4;

    iget-object p1, p1, Lnet/gree/unitywebview/CWebViewPlugin$4;->this$0:Lnet/gree/unitywebview/CWebViewPlugin;

    invoke-static {p1}, Lnet/gree/unitywebview/CWebViewPlugin;->access$1400(Lnet/gree/unitywebview/CWebViewPlugin;)Lnet/gree/unitywebview/CWebViewPluginInterface;

    move-result-object p1

    const-string v0, "CallOnHooked"

    invoke-virtual {p1, v0, p2}, Lnet/gree/unitywebview/CWebViewPluginInterface;->call(Ljava/lang/String;Ljava/lang/String;)V

    return v1

    .line 710
    :cond_3
    invoke-virtual {p2}, Ljava/lang/String;->toLowerCase()Ljava/lang/String;

    move-result-object v0

    const-string v2, ".pdf"

    invoke-virtual {v0, v2}, Ljava/lang/String;->endsWith(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_5

    const-string v0, "https://maps.app.goo.gl"

    .line 711
    invoke-virtual {p2, v0}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_5

    const-string v0, "http://"

    .line 712
    invoke-virtual {p2, v0}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_4

    const-string v0, "https://"

    .line 713
    invoke-virtual {p2, v0}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_4

    const-string v0, "file://"

    .line 714
    invoke-virtual {p2, v0}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_4

    const-string v0, "javascript:"

    .line 715
    invoke-virtual {p2, v0}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_5

    .line 716
    :cond_4
    iget-object p1, p0, Lnet/gree/unitywebview/CWebViewPlugin$4$2;->this$1:Lnet/gree/unitywebview/CWebViewPlugin$4;

    iget-object p1, p1, Lnet/gree/unitywebview/CWebViewPlugin$4;->this$0:Lnet/gree/unitywebview/CWebViewPlugin;

    invoke-static {p1}, Lnet/gree/unitywebview/CWebViewPlugin;->access$1400(Lnet/gree/unitywebview/CWebViewPlugin;)Lnet/gree/unitywebview/CWebViewPluginInterface;

    move-result-object p1

    const-string v0, "CallOnStarted"

    invoke-virtual {p1, v0, p2}, Lnet/gree/unitywebview/CWebViewPluginInterface;->call(Ljava/lang/String;Ljava/lang/String;)V

    const/4 p1, 0x0

    return p1

    .line 720
    :cond_5
    new-instance v0, Landroid/content/Intent;

    const-string v2, "android.intent.action.VIEW"

    invoke-static {p2}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object p2

    invoke-direct {v0, v2, p2}, Landroid/content/Intent;-><init>(Ljava/lang/String;Landroid/net/Uri;)V

    .line 727
    :try_start_0
    invoke-virtual {p1}, Landroid/webkit/WebView;->getContext()Landroid/content/Context;

    move-result-object p1

    invoke-virtual {p1, v0}, Landroid/content/Context;->startActivity(Landroid/content/Intent;)V
    :try_end_0
    .catch Landroid/content/ActivityNotFoundException; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    return v1
.end method

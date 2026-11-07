.class Lnet/gree/unitywebview/CWebViewPlugin$25;
.super Ljava/lang/Object;
.source "CWebViewPlugin.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lnet/gree/unitywebview/CWebViewPlugin;->AddCustomHeader(Ljava/lang/String;Ljava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lnet/gree/unitywebview/CWebViewPlugin;

.field final synthetic val$headerKey:Ljava/lang/String;

.field final synthetic val$headerValue:Ljava/lang/String;


# direct methods
.method constructor <init>(Lnet/gree/unitywebview/CWebViewPlugin;Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    .line 1278
    iput-object p1, p0, Lnet/gree/unitywebview/CWebViewPlugin$25;->this$0:Lnet/gree/unitywebview/CWebViewPlugin;

    iput-object p2, p0, Lnet/gree/unitywebview/CWebViewPlugin$25;->val$headerKey:Ljava/lang/String;

    iput-object p3, p0, Lnet/gree/unitywebview/CWebViewPlugin$25;->val$headerValue:Ljava/lang/String;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 3

    .line 1279
    iget-object v0, p0, Lnet/gree/unitywebview/CWebViewPlugin$25;->this$0:Lnet/gree/unitywebview/CWebViewPlugin;

    invoke-static {v0}, Lnet/gree/unitywebview/CWebViewPlugin;->access$900(Lnet/gree/unitywebview/CWebViewPlugin;)Ljava/util/Hashtable;

    move-result-object v0

    if-nez v0, :cond_0

    return-void

    .line 1282
    :cond_0
    iget-object v0, p0, Lnet/gree/unitywebview/CWebViewPlugin$25;->this$0:Lnet/gree/unitywebview/CWebViewPlugin;

    invoke-static {v0}, Lnet/gree/unitywebview/CWebViewPlugin;->access$900(Lnet/gree/unitywebview/CWebViewPlugin;)Ljava/util/Hashtable;

    move-result-object v0

    iget-object v1, p0, Lnet/gree/unitywebview/CWebViewPlugin$25;->val$headerKey:Ljava/lang/String;

    iget-object v2, p0, Lnet/gree/unitywebview/CWebViewPlugin$25;->val$headerValue:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Ljava/util/Hashtable;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-void
.end method

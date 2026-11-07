.class Lnet/gree/unitywebview/CWebViewPlugin$5;
.super Ljava/lang/Object;
.source "CWebViewPlugin.java"

# interfaces
.implements Landroid/view/ViewTreeObserver$OnGlobalLayoutListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lnet/gree/unitywebview/CWebViewPlugin;->Init(Ljava/lang/String;ZZILjava/lang/String;I)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lnet/gree/unitywebview/CWebViewPlugin;

.field final synthetic val$a:Landroid/app/Activity;

.field final synthetic val$activityRootView:Landroid/view/View;

.field final synthetic val$gameObject:Ljava/lang/String;


# direct methods
.method constructor <init>(Lnet/gree/unitywebview/CWebViewPlugin;Landroid/view/View;Landroid/app/Activity;Ljava/lang/String;)V
    .locals 0

    .line 824
    iput-object p1, p0, Lnet/gree/unitywebview/CWebViewPlugin$5;->this$0:Lnet/gree/unitywebview/CWebViewPlugin;

    iput-object p2, p0, Lnet/gree/unitywebview/CWebViewPlugin$5;->val$activityRootView:Landroid/view/View;

    iput-object p3, p0, Lnet/gree/unitywebview/CWebViewPlugin$5;->val$a:Landroid/app/Activity;

    iput-object p4, p0, Lnet/gree/unitywebview/CWebViewPlugin$5;->val$gameObject:Ljava/lang/String;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onGlobalLayout()V
    .locals 4

    .line 827
    new-instance v0, Landroid/graphics/Rect;

    invoke-direct {v0}, Landroid/graphics/Rect;-><init>()V

    .line 829
    iget-object v1, p0, Lnet/gree/unitywebview/CWebViewPlugin$5;->val$activityRootView:Landroid/view/View;

    invoke-virtual {v1, v0}, Landroid/view/View;->getWindowVisibleDisplayFrame(Landroid/graphics/Rect;)V

    .line 830
    iget-object v1, p0, Lnet/gree/unitywebview/CWebViewPlugin$5;->val$a:Landroid/app/Activity;

    invoke-virtual {v1}, Landroid/app/Activity;->getWindowManager()Landroid/view/WindowManager;

    move-result-object v1

    invoke-interface {v1}, Landroid/view/WindowManager;->getDefaultDisplay()Landroid/view/Display;

    move-result-object v1

    .line 834
    :try_start_0
    new-instance v2, Landroid/graphics/Point;

    invoke-direct {v2}, Landroid/graphics/Point;-><init>()V

    .line 835
    invoke-virtual {v1, v2}, Landroid/view/Display;->getSize(Landroid/graphics/Point;)V

    .line 836
    iget v1, v2, Landroid/graphics/Point;->y:I
    :try_end_0
    .catch Ljava/lang/NoSuchMethodError; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    .line 838
    :catch_0
    invoke-virtual {v1}, Landroid/view/Display;->getHeight()I

    .line 858
    :goto_0
    iget-object v1, p0, Lnet/gree/unitywebview/CWebViewPlugin$5;->val$activityRootView:Landroid/view/View;

    invoke-virtual {v1}, Landroid/view/View;->getRootView()Landroid/view/View;

    move-result-object v1

    invoke-virtual {v1}, Landroid/view/View;->getHeight()I

    move-result v1

    iget v2, v0, Landroid/graphics/Rect;->bottom:I

    iget v0, v0, Landroid/graphics/Rect;->top:I

    sub-int/2addr v2, v0

    sub-int/2addr v1, v2

    .line 859
    iget-object v0, p0, Lnet/gree/unitywebview/CWebViewPlugin$5;->this$0:Lnet/gree/unitywebview/CWebViewPlugin;

    invoke-virtual {v0}, Lnet/gree/unitywebview/CWebViewPlugin;->IsInitialized()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 860
    iget-object v0, p0, Lnet/gree/unitywebview/CWebViewPlugin$5;->this$0:Lnet/gree/unitywebview/CWebViewPlugin;

    iget-object v2, p0, Lnet/gree/unitywebview/CWebViewPlugin$5;->val$gameObject:Ljava/lang/String;

    const-string v3, "SetKeyboardVisible"

    invoke-static {v1}, Ljava/lang/Integer;->toString(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v2, v3, v1}, Lnet/gree/unitywebview/CWebViewPlugin;->MyUnitySendMessage(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

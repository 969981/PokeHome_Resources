.class Lnet/gree/unitywebview/CWebViewPlugin$6;
.super Ljava/lang/Object;
.source "CWebViewPlugin.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lnet/gree/unitywebview/CWebViewPlugin;->Destroy()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lnet/gree/unitywebview/CWebViewPlugin;

.field final synthetic val$a:Landroid/app/Activity;

.field final synthetic val$self:Lnet/gree/unitywebview/CWebViewPlugin;


# direct methods
.method constructor <init>(Lnet/gree/unitywebview/CWebViewPlugin;Landroid/app/Activity;Lnet/gree/unitywebview/CWebViewPlugin;)V
    .locals 0

    .line 936
    iput-object p1, p0, Lnet/gree/unitywebview/CWebViewPlugin$6;->this$0:Lnet/gree/unitywebview/CWebViewPlugin;

    iput-object p2, p0, Lnet/gree/unitywebview/CWebViewPlugin$6;->val$a:Landroid/app/Activity;

    iput-object p3, p0, Lnet/gree/unitywebview/CWebViewPlugin$6;->val$self:Lnet/gree/unitywebview/CWebViewPlugin;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 4

    .line 937
    iget-object v0, p0, Lnet/gree/unitywebview/CWebViewPlugin$6;->this$0:Lnet/gree/unitywebview/CWebViewPlugin;

    invoke-static {v0}, Lnet/gree/unitywebview/CWebViewPlugin;->access$000(Lnet/gree/unitywebview/CWebViewPlugin;)Landroid/webkit/WebView;

    move-result-object v0

    .line 938
    iget-object v1, p0, Lnet/gree/unitywebview/CWebViewPlugin$6;->this$0:Lnet/gree/unitywebview/CWebViewPlugin;

    const/4 v2, 0x0

    invoke-static {v1, v2}, Lnet/gree/unitywebview/CWebViewPlugin;->access$002(Lnet/gree/unitywebview/CWebViewPlugin;Landroid/webkit/WebView;)Landroid/webkit/WebView;

    if-nez v0, :cond_0

    return-void

    .line 942
    :cond_0
    iget-object v1, p0, Lnet/gree/unitywebview/CWebViewPlugin$6;->this$0:Lnet/gree/unitywebview/CWebViewPlugin;

    invoke-static {v1}, Lnet/gree/unitywebview/CWebViewPlugin;->access$2400(Lnet/gree/unitywebview/CWebViewPlugin;)Landroid/view/ViewTreeObserver$OnGlobalLayoutListener;

    move-result-object v1

    if-eqz v1, :cond_1

    .line 943
    iget-object v1, p0, Lnet/gree/unitywebview/CWebViewPlugin$6;->val$a:Landroid/app/Activity;

    invoke-virtual {v1}, Landroid/app/Activity;->getWindow()Landroid/view/Window;

    move-result-object v1

    invoke-virtual {v1}, Landroid/view/Window;->getDecorView()Landroid/view/View;

    move-result-object v1

    invoke-virtual {v1}, Landroid/view/View;->getRootView()Landroid/view/View;

    move-result-object v1

    .line 944
    invoke-virtual {v1}, Landroid/view/View;->getViewTreeObserver()Landroid/view/ViewTreeObserver;

    move-result-object v1

    iget-object v3, p0, Lnet/gree/unitywebview/CWebViewPlugin$6;->this$0:Lnet/gree/unitywebview/CWebViewPlugin;

    invoke-static {v3}, Lnet/gree/unitywebview/CWebViewPlugin;->access$2400(Lnet/gree/unitywebview/CWebViewPlugin;)Landroid/view/ViewTreeObserver$OnGlobalLayoutListener;

    move-result-object v3

    invoke-virtual {v1, v3}, Landroid/view/ViewTreeObserver;->removeOnGlobalLayoutListener(Landroid/view/ViewTreeObserver$OnGlobalLayoutListener;)V

    .line 945
    iget-object v1, p0, Lnet/gree/unitywebview/CWebViewPlugin$6;->this$0:Lnet/gree/unitywebview/CWebViewPlugin;

    invoke-static {v1, v2}, Lnet/gree/unitywebview/CWebViewPlugin;->access$2402(Lnet/gree/unitywebview/CWebViewPlugin;Landroid/view/ViewTreeObserver$OnGlobalLayoutListener;)Landroid/view/ViewTreeObserver$OnGlobalLayoutListener;

    .line 947
    :cond_1
    invoke-virtual {v0}, Landroid/webkit/WebView;->stopLoading()V

    .line 948
    iget-object v1, p0, Lnet/gree/unitywebview/CWebViewPlugin$6;->this$0:Lnet/gree/unitywebview/CWebViewPlugin;

    invoke-static {v1}, Lnet/gree/unitywebview/CWebViewPlugin;->access$1200(Lnet/gree/unitywebview/CWebViewPlugin;)Landroid/view/View;

    move-result-object v1

    if-eqz v1, :cond_2

    .line 949
    invoke-static {}, Lnet/gree/unitywebview/CWebViewPlugin;->access$1100()Landroid/widget/FrameLayout;

    move-result-object v1

    iget-object v3, p0, Lnet/gree/unitywebview/CWebViewPlugin$6;->this$0:Lnet/gree/unitywebview/CWebViewPlugin;

    invoke-static {v3}, Lnet/gree/unitywebview/CWebViewPlugin;->access$1200(Lnet/gree/unitywebview/CWebViewPlugin;)Landroid/view/View;

    move-result-object v3

    invoke-virtual {v1, v3}, Landroid/widget/FrameLayout;->removeView(Landroid/view/View;)V

    .line 950
    invoke-static {}, Lnet/gree/unitywebview/CWebViewPlugin;->access$1100()Landroid/widget/FrameLayout;

    move-result-object v1

    const/4 v3, 0x0

    invoke-virtual {v1, v3}, Landroid/widget/FrameLayout;->setBackgroundColor(I)V

    .line 951
    iget-object v1, p0, Lnet/gree/unitywebview/CWebViewPlugin$6;->this$0:Lnet/gree/unitywebview/CWebViewPlugin;

    invoke-static {v1, v2}, Lnet/gree/unitywebview/CWebViewPlugin;->access$1202(Lnet/gree/unitywebview/CWebViewPlugin;Landroid/view/View;)Landroid/view/View;

    .line 953
    :cond_2
    invoke-static {}, Lnet/gree/unitywebview/CWebViewPlugin;->access$1100()Landroid/widget/FrameLayout;

    move-result-object v1

    invoke-virtual {v1, v0}, Landroid/widget/FrameLayout;->removeView(Landroid/view/View;)V

    .line 954
    invoke-virtual {v0}, Landroid/webkit/WebView;->destroy()V

    .line 956
    iget-object v0, p0, Lnet/gree/unitywebview/CWebViewPlugin$6;->this$0:Lnet/gree/unitywebview/CWebViewPlugin;

    invoke-static {v0}, Lnet/gree/unitywebview/CWebViewPlugin;->access$300(Lnet/gree/unitywebview/CWebViewPlugin;)Z

    move-result v0

    if-eqz v0, :cond_4

    .line 957
    iget-object v0, p0, Lnet/gree/unitywebview/CWebViewPlugin$6;->this$0:Lnet/gree/unitywebview/CWebViewPlugin;

    invoke-static {v0}, Lnet/gree/unitywebview/CWebViewPlugin;->access$400(Lnet/gree/unitywebview/CWebViewPlugin;)Ljava/util/List;

    move-result-object v0

    if-nez v0, :cond_3

    .line 958
    iget-object v0, p0, Lnet/gree/unitywebview/CWebViewPlugin$6;->this$0:Lnet/gree/unitywebview/CWebViewPlugin;

    new-instance v1, Ljava/util/ArrayList;

    invoke-direct {v1}, Ljava/util/ArrayList;-><init>()V

    invoke-static {v0, v1}, Lnet/gree/unitywebview/CWebViewPlugin;->access$402(Lnet/gree/unitywebview/CWebViewPlugin;Ljava/util/List;)Ljava/util/List;

    .line 960
    :cond_3
    iget-object v0, p0, Lnet/gree/unitywebview/CWebViewPlugin$6;->this$0:Lnet/gree/unitywebview/CWebViewPlugin;

    invoke-static {v0}, Lnet/gree/unitywebview/CWebViewPlugin;->access$400(Lnet/gree/unitywebview/CWebViewPlugin;)Ljava/util/List;

    move-result-object v0

    const-string v1, "remove"

    iget-object v2, p0, Lnet/gree/unitywebview/CWebViewPlugin$6;->val$self:Lnet/gree/unitywebview/CWebViewPlugin;

    invoke-static {v1, v2}, Landroid/util/Pair;->create(Ljava/lang/Object;Ljava/lang/Object;)Landroid/util/Pair;

    move-result-object v1

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    return-void

    .line 962
    :cond_4
    iget-object v0, p0, Lnet/gree/unitywebview/CWebViewPlugin$6;->val$a:Landroid/app/Activity;

    .line 963
    invoke-virtual {v0}, Landroid/app/Activity;->getFragmentManager()Landroid/app/FragmentManager;

    move-result-object v0

    .line 964
    invoke-virtual {v0}, Landroid/app/FragmentManager;->beginTransaction()Landroid/app/FragmentTransaction;

    move-result-object v0

    iget-object v1, p0, Lnet/gree/unitywebview/CWebViewPlugin$6;->val$self:Lnet/gree/unitywebview/CWebViewPlugin;

    .line 965
    invoke-virtual {v0, v1}, Landroid/app/FragmentTransaction;->remove(Landroid/app/Fragment;)Landroid/app/FragmentTransaction;

    move-result-object v0

    .line 966
    invoke-virtual {v0}, Landroid/app/FragmentTransaction;->commitAllowingStateLoss()I

    return-void
.end method

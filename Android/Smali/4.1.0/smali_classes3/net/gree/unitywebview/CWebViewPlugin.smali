.class public Lnet/gree/unitywebview/CWebViewPlugin;
.super Landroid/app/Fragment;
.source "CWebViewPlugin.java"


# static fields
.field private static final INPUT_FILE_REQUEST_CODE:I = 0x1

.field private static forceBringToFront:Z

.field private static instanceCount:J

.field private static layout:Landroid/widget/FrameLayout;


# instance fields
.field private canGoBack:Z

.field private canGoForward:Z

.field private mAlertDialogEnabled:Z

.field private mAllowAudioCapture:Z

.field private mAllowRegex:Ljava/util/regex/Pattern;

.field private mAllowVideoCapture:Z

.field private mBasicAuthPassword:Ljava/lang/String;

.field private mBasicAuthUserName:Ljava/lang/String;

.field private mCameraPhotoUri:Landroid/net/Uri;

.field private mCustomHeaders:Ljava/util/Hashtable;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Hashtable<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private mDenyRegex:Ljava/util/regex/Pattern;

.field private mFilePathCallback:Landroid/webkit/ValueCallback;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Landroid/webkit/ValueCallback<",
            "[",
            "Landroid/net/Uri;",
            ">;"
        }
    .end annotation
.end field

.field private mGlobalLayoutListener:Landroid/view/ViewTreeObserver$OnGlobalLayoutListener;

.field private mHookRegex:Ljava/util/regex/Pattern;

.field private mInstanceId:J

.field private mInteractionEnabled:Z

.field private mMessages:Ljava/util/Queue;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Queue<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private mPaused:Z

.field private mTransactions:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Landroid/util/Pair<",
            "Ljava/lang/String;",
            "Lnet/gree/unitywebview/CWebViewPlugin;",
            ">;>;"
        }
    .end annotation
.end field

.field private mUploadMessage:Landroid/webkit/ValueCallback;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Landroid/webkit/ValueCallback<",
            "Landroid/net/Uri;",
            ">;"
        }
    .end annotation
.end field

.field private mVideoView:Landroid/view/View;

.field private mWebView:Landroid/webkit/WebView;

.field private mWebViewPlugin:Lnet/gree/unitywebview/CWebViewPluginInterface;

.field private mWebViewUA:Ljava/lang/String;

.field private progress:I


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>()V
    .locals 1

    .line 264
    invoke-direct {p0}, Landroid/app/Fragment;-><init>()V

    .line 138
    new-instance v0, Ljava/util/ArrayDeque;

    invoke-direct {v0}, Ljava/util/ArrayDeque;-><init>()V

    iput-object v0, p0, Lnet/gree/unitywebview/CWebViewPlugin;->mMessages:Ljava/util/Queue;

    const/4 v0, 0x1

    .line 146
    iput-boolean v0, p0, Lnet/gree/unitywebview/CWebViewPlugin;->mInteractionEnabled:Z

    return-void
.end method

.method public static IsWebViewAvailable()Z
    .locals 4

    .line 349
    sget-object v0, Lcom/unity3d/player/UnityPlayer;->currentActivity:Landroid/app/Activity;

    .line 350
    new-instance v1, Ljava/util/concurrent/FutureTask;

    new-instance v2, Lnet/gree/unitywebview/CWebViewPlugin$3;

    invoke-direct {v2, v0}, Lnet/gree/unitywebview/CWebViewPlugin$3;-><init>(Landroid/app/Activity;)V

    invoke-direct {v1, v2}, Ljava/util/concurrent/FutureTask;-><init>(Ljava/util/concurrent/Callable;)V

    .line 364
    invoke-static {v0}, Lnet/gree/unitywebview/CWebViewPlugin;->isDestroyed(Landroid/app/Activity;)Z

    move-result v2

    const/4 v3, 0x0

    if-eqz v2, :cond_0

    return v3

    .line 367
    :cond_0
    invoke-virtual {v0, v1}, Landroid/app/Activity;->runOnUiThread(Ljava/lang/Runnable;)V

    .line 369
    :try_start_0
    invoke-virtual {v1}, Ljava/util/concurrent/FutureTask;->get()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/Boolean;

    invoke-virtual {v0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return v0

    :catch_0
    return v3
.end method

.method private ProcessChooser()V
    .locals 5

    const/4 v0, 0x0

    .line 868
    iput-object v0, p0, Lnet/gree/unitywebview/CWebViewPlugin;->mCameraPhotoUri:Landroid/net/Uri;

    .line 869
    new-instance v1, Landroid/content/Intent;

    const-string v2, "android.media.action.IMAGE_CAPTURE"

    invoke-direct {v1, v2}, Landroid/content/Intent;-><init>(Ljava/lang/String;)V

    .line 870
    invoke-virtual {p0}, Lnet/gree/unitywebview/CWebViewPlugin;->getActivity()Landroid/app/Activity;

    move-result-object v2

    invoke-virtual {v2}, Landroid/app/Activity;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v2

    invoke-virtual {v1, v2}, Landroid/content/Intent;->resolveActivity(Landroid/content/pm/PackageManager;)Landroid/content/ComponentName;

    move-result-object v2

    if-eqz v2, :cond_1

    .line 874
    :try_start_0
    invoke-direct {p0}, Lnet/gree/unitywebview/CWebViewPlugin;->createImageFile()Ljava/io/File;

    move-result-object v2
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v2

    .line 877
    const-string v3, "CWebViewPlugin"

    const-string v4, "Unable to create Image File"

    invoke-static {v3, v4, v2}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I

    move-object v2, v0

    :goto_0
    if-eqz v2, :cond_2

    .line 881
    const-string v0, "PhotoPath"

    invoke-virtual {v1, v0, v2}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/io/Serializable;)Landroid/content/Intent;

    .line 882
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v3, 0x18

    if-lt v0, v3, :cond_0

    .line 883
    invoke-virtual {p0}, Lnet/gree/unitywebview/CWebViewPlugin;->getActivity()Landroid/app/Activity;

    move-result-object v0

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0}, Lnet/gree/unitywebview/CWebViewPlugin;->getActivity()Landroid/app/Activity;

    move-result-object v4

    invoke-virtual {v4}, Landroid/app/Activity;->getPackageName()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, ".unitywebview.fileprovider"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v0, v3, v2}, Landroidx/core/content/FileProvider;->getUriForFile(Landroid/content/Context;Ljava/lang/String;Ljava/io/File;)Landroid/net/Uri;

    move-result-object v0

    iput-object v0, p0, Lnet/gree/unitywebview/CWebViewPlugin;->mCameraPhotoUri:Landroid/net/Uri;

    goto :goto_1

    .line 885
    :cond_0
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v3, "file:"

    invoke-direct {v0, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v2}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object v0

    iput-object v0, p0, Lnet/gree/unitywebview/CWebViewPlugin;->mCameraPhotoUri:Landroid/net/Uri;

    .line 887
    :goto_1
    const-string v0, "output"

    iget-object v2, p0, Lnet/gree/unitywebview/CWebViewPlugin;->mCameraPhotoUri:Landroid/net/Uri;

    invoke-virtual {v1, v0, v2}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Landroid/os/Parcelable;)Landroid/content/Intent;

    :cond_1
    move-object v0, v1

    .line 894
    :cond_2
    new-instance v1, Landroid/content/Intent;

    const-string v2, "android.intent.action.GET_CONTENT"

    invoke-direct {v1, v2}, Landroid/content/Intent;-><init>(Ljava/lang/String;)V

    .line 895
    const-string v2, "android.intent.category.OPENABLE"

    invoke-virtual {v1, v2}, Landroid/content/Intent;->addCategory(Ljava/lang/String;)Landroid/content/Intent;

    .line 896
    const-string v2, "android.intent.extra.ALLOW_MULTIPLE"

    const/4 v3, 0x1

    invoke-virtual {v1, v2, v3}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Z)Landroid/content/Intent;

    .line 897
    const-string v2, "*/*"

    invoke-virtual {v1, v2}, Landroid/content/Intent;->setType(Ljava/lang/String;)Landroid/content/Intent;

    const/4 v2, 0x0

    if-eqz v0, :cond_3

    .line 901
    new-array v4, v3, [Landroid/content/Intent;

    aput-object v0, v4, v2

    goto :goto_2

    .line 903
    :cond_3
    new-array v4, v2, [Landroid/content/Intent;

    .line 906
    :goto_2
    new-instance v0, Landroid/content/Intent;

    const-string v2, "android.intent.action.CHOOSER"

    invoke-direct {v0, v2}, Landroid/content/Intent;-><init>(Ljava/lang/String;)V

    .line 907
    const-string v2, "android.intent.extra.INTENT"

    invoke-virtual {v0, v2, v1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Landroid/os/Parcelable;)Landroid/content/Intent;

    .line 909
    const-string v1, "android.intent.extra.INITIAL_INTENTS"

    invoke-virtual {v0, v1, v4}, Landroid/content/Intent;->putExtra(Ljava/lang/String;[Landroid/os/Parcelable;)Landroid/content/Intent;

    .line 911
    const-string v1, "Select images"

    invoke-static {v0, v1}, Landroid/content/Intent;->createChooser(Landroid/content/Intent;Ljava/lang/CharSequence;)Landroid/content/Intent;

    move-result-object v0

    invoke-virtual {p0, v0, v3}, Lnet/gree/unitywebview/CWebViewPlugin;->startActivityForResult(Landroid/content/Intent;I)V

    return-void
.end method

.method static synthetic access$000(Lnet/gree/unitywebview/CWebViewPlugin;)Landroid/webkit/WebView;
    .locals 0

    .line 135
    iget-object p0, p0, Lnet/gree/unitywebview/CWebViewPlugin;->mWebView:Landroid/webkit/WebView;

    return-object p0
.end method

.method static synthetic access$002(Lnet/gree/unitywebview/CWebViewPlugin;Landroid/webkit/WebView;)Landroid/webkit/WebView;
    .locals 0

    .line 135
    iput-object p1, p0, Lnet/gree/unitywebview/CWebViewPlugin;->mWebView:Landroid/webkit/WebView;

    return-object p1
.end method

.method static synthetic access$100(Lnet/gree/unitywebview/CWebViewPlugin;)V
    .locals 0

    .line 135
    invoke-direct {p0}, Lnet/gree/unitywebview/CWebViewPlugin;->ProcessChooser()V

    return-void
.end method

.method static synthetic access$1002(Lnet/gree/unitywebview/CWebViewPlugin;I)I
    .locals 0

    .line 135
    iput p1, p0, Lnet/gree/unitywebview/CWebViewPlugin;->progress:I

    return p1
.end method

.method static synthetic access$1100()Landroid/widget/FrameLayout;
    .locals 1

    .line 135
    sget-object v0, Lnet/gree/unitywebview/CWebViewPlugin;->layout:Landroid/widget/FrameLayout;

    return-object v0
.end method

.method static synthetic access$1102(Landroid/widget/FrameLayout;)Landroid/widget/FrameLayout;
    .locals 0

    .line 135
    sput-object p0, Lnet/gree/unitywebview/CWebViewPlugin;->layout:Landroid/widget/FrameLayout;

    return-object p0
.end method

.method static synthetic access$1200(Lnet/gree/unitywebview/CWebViewPlugin;)Landroid/view/View;
    .locals 0

    .line 135
    iget-object p0, p0, Lnet/gree/unitywebview/CWebViewPlugin;->mVideoView:Landroid/view/View;

    return-object p0
.end method

.method static synthetic access$1202(Lnet/gree/unitywebview/CWebViewPlugin;Landroid/view/View;)Landroid/view/View;
    .locals 0

    .line 135
    iput-object p1, p0, Lnet/gree/unitywebview/CWebViewPlugin;->mVideoView:Landroid/view/View;

    return-object p1
.end method

.method static synthetic access$1300(Lnet/gree/unitywebview/CWebViewPlugin;)Landroid/webkit/ValueCallback;
    .locals 0

    .line 135
    iget-object p0, p0, Lnet/gree/unitywebview/CWebViewPlugin;->mUploadMessage:Landroid/webkit/ValueCallback;

    return-object p0
.end method

.method static synthetic access$1302(Lnet/gree/unitywebview/CWebViewPlugin;Landroid/webkit/ValueCallback;)Landroid/webkit/ValueCallback;
    .locals 0

    .line 135
    iput-object p1, p0, Lnet/gree/unitywebview/CWebViewPlugin;->mUploadMessage:Landroid/webkit/ValueCallback;

    return-object p1
.end method

.method static synthetic access$1400(Lnet/gree/unitywebview/CWebViewPlugin;)Lnet/gree/unitywebview/CWebViewPluginInterface;
    .locals 0

    .line 135
    iget-object p0, p0, Lnet/gree/unitywebview/CWebViewPlugin;->mWebViewPlugin:Lnet/gree/unitywebview/CWebViewPluginInterface;

    return-object p0
.end method

.method static synthetic access$1402(Lnet/gree/unitywebview/CWebViewPlugin;Lnet/gree/unitywebview/CWebViewPluginInterface;)Lnet/gree/unitywebview/CWebViewPluginInterface;
    .locals 0

    .line 135
    iput-object p1, p0, Lnet/gree/unitywebview/CWebViewPlugin;->mWebViewPlugin:Lnet/gree/unitywebview/CWebViewPluginInterface;

    return-object p1
.end method

.method static synthetic access$1502(Lnet/gree/unitywebview/CWebViewPlugin;Z)Z
    .locals 0

    .line 135
    iput-boolean p1, p0, Lnet/gree/unitywebview/CWebViewPlugin;->canGoBack:Z

    return p1
.end method

.method static synthetic access$1602(Lnet/gree/unitywebview/CWebViewPlugin;Z)Z
    .locals 0

    .line 135
    iput-boolean p1, p0, Lnet/gree/unitywebview/CWebViewPlugin;->canGoForward:Z

    return p1
.end method

.method static synthetic access$1700(Lnet/gree/unitywebview/CWebViewPlugin;)Ljava/lang/String;
    .locals 0

    .line 135
    iget-object p0, p0, Lnet/gree/unitywebview/CWebViewPlugin;->mBasicAuthUserName:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic access$1800(Lnet/gree/unitywebview/CWebViewPlugin;)Ljava/lang/String;
    .locals 0

    .line 135
    iget-object p0, p0, Lnet/gree/unitywebview/CWebViewPlugin;->mBasicAuthPassword:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic access$1900(Lnet/gree/unitywebview/CWebViewPlugin;)Ljava/lang/String;
    .locals 0

    .line 135
    iget-object p0, p0, Lnet/gree/unitywebview/CWebViewPlugin;->mWebViewUA:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic access$1902(Lnet/gree/unitywebview/CWebViewPlugin;Ljava/lang/String;)Ljava/lang/String;
    .locals 0

    .line 135
    iput-object p1, p0, Lnet/gree/unitywebview/CWebViewPlugin;->mWebViewUA:Ljava/lang/String;

    return-object p1
.end method

.method static synthetic access$200(Lnet/gree/unitywebview/CWebViewPlugin;)Landroid/webkit/ValueCallback;
    .locals 0

    .line 135
    iget-object p0, p0, Lnet/gree/unitywebview/CWebViewPlugin;->mFilePathCallback:Landroid/webkit/ValueCallback;

    return-object p0
.end method

.method static synthetic access$2000(Lnet/gree/unitywebview/CWebViewPlugin;)Ljava/util/regex/Pattern;
    .locals 0

    .line 135
    iget-object p0, p0, Lnet/gree/unitywebview/CWebViewPlugin;->mAllowRegex:Ljava/util/regex/Pattern;

    return-object p0
.end method

.method static synthetic access$2002(Lnet/gree/unitywebview/CWebViewPlugin;Ljava/util/regex/Pattern;)Ljava/util/regex/Pattern;
    .locals 0

    .line 135
    iput-object p1, p0, Lnet/gree/unitywebview/CWebViewPlugin;->mAllowRegex:Ljava/util/regex/Pattern;

    return-object p1
.end method

.method static synthetic access$202(Lnet/gree/unitywebview/CWebViewPlugin;Landroid/webkit/ValueCallback;)Landroid/webkit/ValueCallback;
    .locals 0

    .line 135
    iput-object p1, p0, Lnet/gree/unitywebview/CWebViewPlugin;->mFilePathCallback:Landroid/webkit/ValueCallback;

    return-object p1
.end method

.method static synthetic access$2100(Lnet/gree/unitywebview/CWebViewPlugin;)Ljava/util/regex/Pattern;
    .locals 0

    .line 135
    iget-object p0, p0, Lnet/gree/unitywebview/CWebViewPlugin;->mDenyRegex:Ljava/util/regex/Pattern;

    return-object p0
.end method

.method static synthetic access$2102(Lnet/gree/unitywebview/CWebViewPlugin;Ljava/util/regex/Pattern;)Ljava/util/regex/Pattern;
    .locals 0

    .line 135
    iput-object p1, p0, Lnet/gree/unitywebview/CWebViewPlugin;->mDenyRegex:Ljava/util/regex/Pattern;

    return-object p1
.end method

.method static synthetic access$2200(Lnet/gree/unitywebview/CWebViewPlugin;)Ljava/util/regex/Pattern;
    .locals 0

    .line 135
    iget-object p0, p0, Lnet/gree/unitywebview/CWebViewPlugin;->mHookRegex:Ljava/util/regex/Pattern;

    return-object p0
.end method

.method static synthetic access$2202(Lnet/gree/unitywebview/CWebViewPlugin;Ljava/util/regex/Pattern;)Ljava/util/regex/Pattern;
    .locals 0

    .line 135
    iput-object p1, p0, Lnet/gree/unitywebview/CWebViewPlugin;->mHookRegex:Ljava/util/regex/Pattern;

    return-object p1
.end method

.method static synthetic access$2300(Lnet/gree/unitywebview/CWebViewPlugin;)Z
    .locals 0

    .line 135
    iget-boolean p0, p0, Lnet/gree/unitywebview/CWebViewPlugin;->mInteractionEnabled:Z

    return p0
.end method

.method static synthetic access$2302(Lnet/gree/unitywebview/CWebViewPlugin;Z)Z
    .locals 0

    .line 135
    iput-boolean p1, p0, Lnet/gree/unitywebview/CWebViewPlugin;->mInteractionEnabled:Z

    return p1
.end method

.method static synthetic access$2400(Lnet/gree/unitywebview/CWebViewPlugin;)Landroid/view/ViewTreeObserver$OnGlobalLayoutListener;
    .locals 0

    .line 135
    iget-object p0, p0, Lnet/gree/unitywebview/CWebViewPlugin;->mGlobalLayoutListener:Landroid/view/ViewTreeObserver$OnGlobalLayoutListener;

    return-object p0
.end method

.method static synthetic access$2402(Lnet/gree/unitywebview/CWebViewPlugin;Landroid/view/ViewTreeObserver$OnGlobalLayoutListener;)Landroid/view/ViewTreeObserver$OnGlobalLayoutListener;
    .locals 0

    .line 135
    iput-object p1, p0, Lnet/gree/unitywebview/CWebViewPlugin;->mGlobalLayoutListener:Landroid/view/ViewTreeObserver$OnGlobalLayoutListener;

    return-object p1
.end method

.method static synthetic access$2500()Z
    .locals 1

    .line 135
    sget-boolean v0, Lnet/gree/unitywebview/CWebViewPlugin;->forceBringToFront:Z

    return v0
.end method

.method static synthetic access$300(Lnet/gree/unitywebview/CWebViewPlugin;)Z
    .locals 0

    .line 135
    iget-boolean p0, p0, Lnet/gree/unitywebview/CWebViewPlugin;->mPaused:Z

    return p0
.end method

.method static synthetic access$400(Lnet/gree/unitywebview/CWebViewPlugin;)Ljava/util/List;
    .locals 0

    .line 135
    iget-object p0, p0, Lnet/gree/unitywebview/CWebViewPlugin;->mTransactions:Ljava/util/List;

    return-object p0
.end method

.method static synthetic access$402(Lnet/gree/unitywebview/CWebViewPlugin;Ljava/util/List;)Ljava/util/List;
    .locals 0

    .line 135
    iput-object p1, p0, Lnet/gree/unitywebview/CWebViewPlugin;->mTransactions:Ljava/util/List;

    return-object p1
.end method

.method static synthetic access$500(Lnet/gree/unitywebview/CWebViewPlugin;)J
    .locals 2

    .line 135
    iget-wide v0, p0, Lnet/gree/unitywebview/CWebViewPlugin;->mInstanceId:J

    return-wide v0
.end method

.method static synthetic access$600(Lnet/gree/unitywebview/CWebViewPlugin;)Z
    .locals 0

    .line 135
    iget-boolean p0, p0, Lnet/gree/unitywebview/CWebViewPlugin;->mAlertDialogEnabled:Z

    return p0
.end method

.method static synthetic access$602(Lnet/gree/unitywebview/CWebViewPlugin;Z)Z
    .locals 0

    .line 135
    iput-boolean p1, p0, Lnet/gree/unitywebview/CWebViewPlugin;->mAlertDialogEnabled:Z

    return p1
.end method

.method static synthetic access$700(Lnet/gree/unitywebview/CWebViewPlugin;)Z
    .locals 0

    .line 135
    iget-boolean p0, p0, Lnet/gree/unitywebview/CWebViewPlugin;->mAllowVideoCapture:Z

    return p0
.end method

.method static synthetic access$702(Lnet/gree/unitywebview/CWebViewPlugin;Z)Z
    .locals 0

    .line 135
    iput-boolean p1, p0, Lnet/gree/unitywebview/CWebViewPlugin;->mAllowVideoCapture:Z

    return p1
.end method

.method static synthetic access$800(Lnet/gree/unitywebview/CWebViewPlugin;)Z
    .locals 0

    .line 135
    iget-boolean p0, p0, Lnet/gree/unitywebview/CWebViewPlugin;->mAllowAudioCapture:Z

    return p0
.end method

.method static synthetic access$802(Lnet/gree/unitywebview/CWebViewPlugin;Z)Z
    .locals 0

    .line 135
    iput-boolean p1, p0, Lnet/gree/unitywebview/CWebViewPlugin;->mAllowAudioCapture:Z

    return p1
.end method

.method static synthetic access$900(Lnet/gree/unitywebview/CWebViewPlugin;)Ljava/util/Hashtable;
    .locals 0

    .line 135
    iget-object p0, p0, Lnet/gree/unitywebview/CWebViewPlugin;->mCustomHeaders:Ljava/util/Hashtable;

    return-object p0
.end method

.method static synthetic access$902(Lnet/gree/unitywebview/CWebViewPlugin;Ljava/util/Hashtable;)Ljava/util/Hashtable;
    .locals 0

    .line 135
    iput-object p1, p0, Lnet/gree/unitywebview/CWebViewPlugin;->mCustomHeaders:Ljava/util/Hashtable;

    return-object p1
.end method

.method private createImageFile()Ljava/io/File;
    .locals 3
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    .line 916
    new-instance v0, Ljava/text/SimpleDateFormat;

    const-string v1, "yyyyMMdd_HHmmss"

    invoke-direct {v0, v1}, Ljava/text/SimpleDateFormat;-><init>(Ljava/lang/String;)V

    new-instance v1, Ljava/util/Date;

    invoke-direct {v1}, Ljava/util/Date;-><init>()V

    invoke-virtual {v0, v1}, Ljava/text/SimpleDateFormat;->format(Ljava/util/Date;)Ljava/lang/String;

    move-result-object v0

    .line 917
    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "JPEG_"

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, "_"

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 918
    invoke-virtual {p0}, Lnet/gree/unitywebview/CWebViewPlugin;->getActivity()Landroid/app/Activity;

    move-result-object v1

    sget-object v2, Landroid/os/Environment;->DIRECTORY_DCIM:Ljava/lang/String;

    invoke-virtual {v1, v2}, Landroid/app/Activity;->getExternalFilesDir(Ljava/lang/String;)Ljava/io/File;

    move-result-object v1

    .line 919
    invoke-virtual {v1}, Ljava/io/File;->exists()Z

    move-result v2

    if-nez v2, :cond_0

    .line 920
    invoke-virtual {v1}, Ljava/io/File;->mkdirs()Z

    .line 922
    :cond_0
    const-string v2, ".jpg"

    invoke-static {v0, v2, v1}, Ljava/io/File;->createTempFile(Ljava/lang/String;Ljava/lang/String;Ljava/io/File;)Ljava/io/File;

    move-result-object v0

    return-object v0
.end method

.method public static isDestroyed(Landroid/app/Activity;)Z
    .locals 0

    if-nez p0, :cond_0

    const/4 p0, 0x1

    return p0

    .line 258
    :cond_0
    invoke-virtual {p0}, Landroid/app/Activity;->isDestroyed()Z

    move-result p0

    return p0
.end method


# virtual methods
.method public AddCustomHeader(Ljava/lang/String;Ljava/lang/String;)V
    .locals 2

    .line 1274
    sget-object v0, Lcom/unity3d/player/UnityPlayer;->currentActivity:Landroid/app/Activity;

    .line 1275
    invoke-static {v0}, Lnet/gree/unitywebview/CWebViewPlugin;->isDestroyed(Landroid/app/Activity;)Z

    move-result v1

    if-eqz v1, :cond_0

    return-void

    .line 1278
    :cond_0
    new-instance v1, Lnet/gree/unitywebview/CWebViewPlugin$25;

    invoke-direct {v1, p0, p1, p2}, Lnet/gree/unitywebview/CWebViewPlugin$25;-><init>(Lnet/gree/unitywebview/CWebViewPlugin;Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/app/Activity;->runOnUiThread(Ljava/lang/Runnable;)V

    return-void
.end method

.method public ClearCache(Z)V
    .locals 2

    .line 1400
    sget-object v0, Lcom/unity3d/player/UnityPlayer;->currentActivity:Landroid/app/Activity;

    .line 1401
    invoke-static {v0}, Lnet/gree/unitywebview/CWebViewPlugin;->isDestroyed(Landroid/app/Activity;)Z

    move-result v1

    if-eqz v1, :cond_0

    return-void

    .line 1404
    :cond_0
    new-instance v1, Lnet/gree/unitywebview/CWebViewPlugin$28;

    invoke-direct {v1, p0, p1}, Lnet/gree/unitywebview/CWebViewPlugin$28;-><init>(Lnet/gree/unitywebview/CWebViewPlugin;Z)V

    invoke-virtual {v0, v1}, Landroid/app/Activity;->runOnUiThread(Ljava/lang/Runnable;)V

    return-void
.end method

.method public ClearCookies()V
    .locals 2

    .line 1331
    invoke-static {}, Landroid/webkit/CookieManager;->getInstance()Landroid/webkit/CookieManager;

    move-result-object v0

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/webkit/CookieManager;->removeAllCookies(Landroid/webkit/ValueCallback;)V

    .line 1332
    invoke-static {}, Landroid/webkit/CookieManager;->getInstance()Landroid/webkit/CookieManager;

    move-result-object v0

    invoke-virtual {v0}, Landroid/webkit/CookieManager;->flush()V

    return-void
.end method

.method public ClearCustomHeader()V
    .locals 2

    .line 1315
    sget-object v0, Lcom/unity3d/player/UnityPlayer;->currentActivity:Landroid/app/Activity;

    .line 1316
    invoke-static {v0}, Lnet/gree/unitywebview/CWebViewPlugin;->isDestroyed(Landroid/app/Activity;)Z

    move-result v1

    if-eqz v1, :cond_0

    return-void

    .line 1319
    :cond_0
    new-instance v1, Lnet/gree/unitywebview/CWebViewPlugin$27;

    invoke-direct {v1, p0}, Lnet/gree/unitywebview/CWebViewPlugin$27;-><init>(Lnet/gree/unitywebview/CWebViewPlugin;)V

    invoke-virtual {v0, v1}, Landroid/app/Activity;->runOnUiThread(Ljava/lang/Runnable;)V

    return-void
.end method

.method public Destroy()V
    .locals 2

    .line 930
    sget-object v0, Lcom/unity3d/player/UnityPlayer;->currentActivity:Landroid/app/Activity;

    .line 932
    iget-object v1, p0, Lnet/gree/unitywebview/CWebViewPlugin;->mMessages:Ljava/util/Queue;

    invoke-interface {v1}, Ljava/util/Queue;->clear()V

    .line 933
    invoke-static {v0}, Lnet/gree/unitywebview/CWebViewPlugin;->isDestroyed(Landroid/app/Activity;)Z

    move-result v1

    if-eqz v1, :cond_0

    return-void

    .line 936
    :cond_0
    new-instance v1, Lnet/gree/unitywebview/CWebViewPlugin$6;

    invoke-direct {v1, p0, v0, p0}, Lnet/gree/unitywebview/CWebViewPlugin$6;-><init>(Lnet/gree/unitywebview/CWebViewPlugin;Landroid/app/Activity;Lnet/gree/unitywebview/CWebViewPlugin;)V

    invoke-virtual {v0, v1}, Landroid/app/Activity;->runOnUiThread(Ljava/lang/Runnable;)V

    return-void
.end method

.method public EvaluateJS(Ljava/lang/String;)V
    .locals 2

    .line 1025
    sget-object v0, Lcom/unity3d/player/UnityPlayer;->currentActivity:Landroid/app/Activity;

    .line 1026
    invoke-static {v0}, Lnet/gree/unitywebview/CWebViewPlugin;->isDestroyed(Landroid/app/Activity;)Z

    move-result v1

    if-eqz v1, :cond_0

    return-void

    .line 1029
    :cond_0
    new-instance v1, Lnet/gree/unitywebview/CWebViewPlugin$10;

    invoke-direct {v1, p0, p1}, Lnet/gree/unitywebview/CWebViewPlugin$10;-><init>(Lnet/gree/unitywebview/CWebViewPlugin;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/app/Activity;->runOnUiThread(Ljava/lang/Runnable;)V

    return-void
.end method

.method public GetCookies(Ljava/lang/String;)V
    .locals 3

    .line 1364
    invoke-static {}, Landroid/webkit/CookieManager;->getInstance()Landroid/webkit/CookieManager;

    move-result-object v0

    .line 1365
    iget-object v1, p0, Lnet/gree/unitywebview/CWebViewPlugin;->mWebViewPlugin:Lnet/gree/unitywebview/CWebViewPluginInterface;

    const-string v2, "CallOnCookies"

    invoke-virtual {v0, p1}, Landroid/webkit/CookieManager;->getCookie(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v1, v2, p1}, Lnet/gree/unitywebview/CWebViewPluginInterface;->call(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public GetCustomHeaderValue(Ljava/lang/String;)Ljava/lang/String;
    .locals 2

    .line 1288
    iget-object v0, p0, Lnet/gree/unitywebview/CWebViewPlugin;->mCustomHeaders:Ljava/util/Hashtable;

    const/4 v1, 0x0

    if-nez v0, :cond_0

    return-object v1

    .line 1291
    :cond_0
    invoke-virtual {v0, p1}, Ljava/util/Hashtable;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_1

    return-object v1

    .line 1294
    :cond_1
    iget-object v0, p0, Lnet/gree/unitywebview/CWebViewPlugin;->mCustomHeaders:Ljava/util/Hashtable;

    invoke-virtual {v0, p1}, Ljava/util/Hashtable;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/String;

    return-object p1
.end method

.method public GetMessage()Ljava/lang/String;
    .locals 2

    .line 376
    iget-object v0, p0, Lnet/gree/unitywebview/CWebViewPlugin;->mMessages:Ljava/util/Queue;

    monitor-enter v0

    .line 377
    :try_start_0
    iget-object v1, p0, Lnet/gree/unitywebview/CWebViewPlugin;->mMessages:Ljava/util/Queue;

    invoke-interface {v1}, Ljava/util/Queue;->size()I

    move-result v1

    if-lez v1, :cond_0

    iget-object v1, p0, Lnet/gree/unitywebview/CWebViewPlugin;->mMessages:Ljava/util/Queue;

    invoke-interface {v1}, Ljava/util/Queue;->poll()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    goto :goto_0

    :cond_0
    const/4 v1, 0x0

    :goto_0
    monitor-exit v0

    return-object v1

    :catchall_0
    move-exception v1

    .line 378
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1
.end method

.method public GoBack()V
    .locals 2

    .line 1042
    sget-object v0, Lcom/unity3d/player/UnityPlayer;->currentActivity:Landroid/app/Activity;

    .line 1043
    invoke-static {v0}, Lnet/gree/unitywebview/CWebViewPlugin;->isDestroyed(Landroid/app/Activity;)Z

    move-result v1

    if-eqz v1, :cond_0

    return-void

    .line 1046
    :cond_0
    new-instance v1, Lnet/gree/unitywebview/CWebViewPlugin$11;

    invoke-direct {v1, p0}, Lnet/gree/unitywebview/CWebViewPlugin$11;-><init>(Lnet/gree/unitywebview/CWebViewPlugin;)V

    invoke-virtual {v0, v1}, Landroid/app/Activity;->runOnUiThread(Ljava/lang/Runnable;)V

    return-void
.end method

.method public GoForward()V
    .locals 2

    .line 1055
    sget-object v0, Lcom/unity3d/player/UnityPlayer;->currentActivity:Landroid/app/Activity;

    .line 1056
    invoke-static {v0}, Lnet/gree/unitywebview/CWebViewPlugin;->isDestroyed(Landroid/app/Activity;)Z

    move-result v1

    if-eqz v1, :cond_0

    return-void

    .line 1059
    :cond_0
    new-instance v1, Lnet/gree/unitywebview/CWebViewPlugin$12;

    invoke-direct {v1, p0}, Lnet/gree/unitywebview/CWebViewPlugin$12;-><init>(Lnet/gree/unitywebview/CWebViewPlugin;)V

    invoke-virtual {v0, v1}, Landroid/app/Activity;->runOnUiThread(Ljava/lang/Runnable;)V

    return-void
.end method

.method public Init(Ljava/lang/String;ZZILjava/lang/String;I)V
    .locals 10

    .line 393
    sget-object v3, Lcom/unity3d/player/UnityPlayer;->currentActivity:Landroid/app/Activity;

    .line 394
    sget-wide v0, Lnet/gree/unitywebview/CWebViewPlugin;->instanceCount:J

    const-wide/16 v4, 0x1

    add-long/2addr v0, v4

    sput-wide v0, Lnet/gree/unitywebview/CWebViewPlugin;->instanceCount:J

    .line 395
    iput-wide v0, p0, Lnet/gree/unitywebview/CWebViewPlugin;->mInstanceId:J

    .line 396
    invoke-static {v3}, Lnet/gree/unitywebview/CWebViewPlugin;->isDestroyed(Landroid/app/Activity;)Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    .line 399
    :cond_0
    new-instance v0, Lnet/gree/unitywebview/CWebViewPlugin$4;

    move-object v2, p0

    move-object v1, p0

    move-object v5, p1

    move v9, p2

    move v7, p3

    move v8, p4

    move-object v6, p5

    move/from16 v4, p6

    invoke-direct/range {v0 .. v9}, Lnet/gree/unitywebview/CWebViewPlugin$4;-><init>(Lnet/gree/unitywebview/CWebViewPlugin;Lnet/gree/unitywebview/CWebViewPlugin;Landroid/app/Activity;ILjava/lang/String;Ljava/lang/String;ZIZ)V

    invoke-virtual {v3, v0}, Landroid/app/Activity;->runOnUiThread(Ljava/lang/Runnable;)V

    .line 823
    invoke-virtual {v3}, Landroid/app/Activity;->getWindow()Landroid/view/Window;

    move-result-object p2

    invoke-virtual {p2}, Landroid/view/Window;->getDecorView()Landroid/view/View;

    move-result-object p2

    invoke-virtual {p2}, Landroid/view/View;->getRootView()Landroid/view/View;

    move-result-object p2

    .line 824
    new-instance p3, Lnet/gree/unitywebview/CWebViewPlugin$5;

    invoke-direct {p3, p0, p2, v3, p1}, Lnet/gree/unitywebview/CWebViewPlugin$5;-><init>(Lnet/gree/unitywebview/CWebViewPlugin;Landroid/view/View;Landroid/app/Activity;Ljava/lang/String;)V

    iput-object p3, p0, Lnet/gree/unitywebview/CWebViewPlugin;->mGlobalLayoutListener:Landroid/view/ViewTreeObserver$OnGlobalLayoutListener;

    .line 864
    invoke-virtual {p2}, Landroid/view/View;->getViewTreeObserver()Landroid/view/ViewTreeObserver;

    move-result-object p1

    iget-object p2, p0, Lnet/gree/unitywebview/CWebViewPlugin;->mGlobalLayoutListener:Landroid/view/ViewTreeObserver$OnGlobalLayoutListener;

    invoke-virtual {p1, p2}, Landroid/view/ViewTreeObserver;->addOnGlobalLayoutListener(Landroid/view/ViewTreeObserver$OnGlobalLayoutListener;)V

    return-void
.end method

.method public IsInitialized()Z
    .locals 1

    .line 388
    iget-object v0, p0, Lnet/gree/unitywebview/CWebViewPlugin;->mWebView:Landroid/webkit/WebView;

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public LoadHTML(Ljava/lang/String;Ljava/lang/String;)V
    .locals 2

    .line 1012
    sget-object v0, Lcom/unity3d/player/UnityPlayer;->currentActivity:Landroid/app/Activity;

    .line 1013
    invoke-static {v0}, Lnet/gree/unitywebview/CWebViewPlugin;->isDestroyed(Landroid/app/Activity;)Z

    move-result v1

    if-eqz v1, :cond_0

    return-void

    .line 1016
    :cond_0
    new-instance v1, Lnet/gree/unitywebview/CWebViewPlugin$9;

    invoke-direct {v1, p0, p2, p1}, Lnet/gree/unitywebview/CWebViewPlugin$9;-><init>(Lnet/gree/unitywebview/CWebViewPlugin;Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/app/Activity;->runOnUiThread(Ljava/lang/Runnable;)V

    return-void
.end method

.method public LoadURL(Ljava/lang/String;)V
    .locals 2

    .line 994
    sget-object v0, Lcom/unity3d/player/UnityPlayer;->currentActivity:Landroid/app/Activity;

    .line 995
    invoke-static {v0}, Lnet/gree/unitywebview/CWebViewPlugin;->isDestroyed(Landroid/app/Activity;)Z

    move-result v1

    if-eqz v1, :cond_0

    return-void

    .line 998
    :cond_0
    new-instance v1, Lnet/gree/unitywebview/CWebViewPlugin$8;

    invoke-direct {v1, p0, p1}, Lnet/gree/unitywebview/CWebViewPlugin$8;-><init>(Lnet/gree/unitywebview/CWebViewPlugin;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/app/Activity;->runOnUiThread(Ljava/lang/Runnable;)V

    return-void
.end method

.method public MyUnitySendMessage(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 2

    .line 382
    iget-object p1, p0, Lnet/gree/unitywebview/CWebViewPlugin;->mMessages:Ljava/util/Queue;

    monitor-enter p1

    .line 383
    :try_start_0
    iget-object v0, p0, Lnet/gree/unitywebview/CWebViewPlugin;->mMessages:Ljava/util/Queue;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p2, ":"

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-interface {v0, p2}, Ljava/util/Queue;->add(Ljava/lang/Object;)Z

    .line 384
    monitor-exit p1

    return-void

    :catchall_0
    move-exception p2

    monitor-exit p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p2
.end method

.method public OnApplicationPause(Z)V
    .locals 1

    .line 1223
    iput-boolean p1, p0, Lnet/gree/unitywebview/CWebViewPlugin;->mPaused:Z

    .line 1224
    sget-object p1, Lcom/unity3d/player/UnityPlayer;->currentActivity:Landroid/app/Activity;

    .line 1225
    invoke-static {p1}, Lnet/gree/unitywebview/CWebViewPlugin;->isDestroyed(Landroid/app/Activity;)Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    .line 1228
    :cond_0
    new-instance v0, Lnet/gree/unitywebview/CWebViewPlugin$24;

    invoke-direct {v0, p0, p1}, Lnet/gree/unitywebview/CWebViewPlugin$24;-><init>(Lnet/gree/unitywebview/CWebViewPlugin;Landroid/app/Activity;)V

    invoke-virtual {p1, v0}, Landroid/app/Activity;->runOnUiThread(Ljava/lang/Runnable;)V

    return-void
.end method

.method public OnRequestFileChooserPermissionsResult(Z)V
    .locals 2

    .line 268
    sget-object v0, Lcom/unity3d/player/UnityPlayer;->currentActivity:Landroid/app/Activity;

    .line 269
    new-instance v1, Lnet/gree/unitywebview/CWebViewPlugin$2;

    invoke-direct {v1, p0, p1}, Lnet/gree/unitywebview/CWebViewPlugin$2;-><init>(Lnet/gree/unitywebview/CWebViewPlugin;Z)V

    invoke-virtual {v0, v1}, Landroid/app/Activity;->runOnUiThread(Ljava/lang/Runnable;)V

    return-void
.end method

.method public Pause()V
    .locals 2

    .line 1194
    sget-object v0, Lcom/unity3d/player/UnityPlayer;->currentActivity:Landroid/app/Activity;

    .line 1195
    invoke-static {v0}, Lnet/gree/unitywebview/CWebViewPlugin;->isDestroyed(Landroid/app/Activity;)Z

    move-result v1

    if-eqz v1, :cond_0

    return-void

    .line 1198
    :cond_0
    new-instance v1, Lnet/gree/unitywebview/CWebViewPlugin$22;

    invoke-direct {v1, p0}, Lnet/gree/unitywebview/CWebViewPlugin$22;-><init>(Lnet/gree/unitywebview/CWebViewPlugin;)V

    invoke-virtual {v0, v1}, Landroid/app/Activity;->runOnUiThread(Ljava/lang/Runnable;)V

    return-void
.end method

.method public Reload()V
    .locals 2

    .line 1068
    sget-object v0, Lcom/unity3d/player/UnityPlayer;->currentActivity:Landroid/app/Activity;

    .line 1069
    invoke-static {v0}, Lnet/gree/unitywebview/CWebViewPlugin;->isDestroyed(Landroid/app/Activity;)Z

    move-result v1

    if-eqz v1, :cond_0

    return-void

    .line 1072
    :cond_0
    new-instance v1, Lnet/gree/unitywebview/CWebViewPlugin$13;

    invoke-direct {v1, p0}, Lnet/gree/unitywebview/CWebViewPlugin$13;-><init>(Lnet/gree/unitywebview/CWebViewPlugin;)V

    invoke-virtual {v0, v1}, Landroid/app/Activity;->runOnUiThread(Ljava/lang/Runnable;)V

    return-void
.end method

.method public RemoveCustomHeader(Ljava/lang/String;)V
    .locals 2

    .line 1299
    sget-object v0, Lcom/unity3d/player/UnityPlayer;->currentActivity:Landroid/app/Activity;

    .line 1300
    invoke-static {v0}, Lnet/gree/unitywebview/CWebViewPlugin;->isDestroyed(Landroid/app/Activity;)Z

    move-result v1

    if-eqz v1, :cond_0

    return-void

    .line 1303
    :cond_0
    new-instance v1, Lnet/gree/unitywebview/CWebViewPlugin$26;

    invoke-direct {v1, p0, p1}, Lnet/gree/unitywebview/CWebViewPlugin$26;-><init>(Lnet/gree/unitywebview/CWebViewPlugin;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/app/Activity;->runOnUiThread(Ljava/lang/Runnable;)V

    return-void
.end method

.method public Resume()V
    .locals 2

    .line 1208
    sget-object v0, Lcom/unity3d/player/UnityPlayer;->currentActivity:Landroid/app/Activity;

    .line 1209
    invoke-static {v0}, Lnet/gree/unitywebview/CWebViewPlugin;->isDestroyed(Landroid/app/Activity;)Z

    move-result v1

    if-eqz v1, :cond_0

    return-void

    .line 1212
    :cond_0
    new-instance v1, Lnet/gree/unitywebview/CWebViewPlugin$23;

    invoke-direct {v1, p0}, Lnet/gree/unitywebview/CWebViewPlugin$23;-><init>(Lnet/gree/unitywebview/CWebViewPlugin;)V

    invoke-virtual {v0, v1}, Landroid/app/Activity;->runOnUiThread(Ljava/lang/Runnable;)V

    return-void
.end method

.method public SaveCookies()V
    .locals 1

    .line 1352
    invoke-static {}, Landroid/webkit/CookieManager;->getInstance()Landroid/webkit/CookieManager;

    move-result-object v0

    invoke-virtual {v0}, Landroid/webkit/CookieManager;->flush()V

    return-void
.end method

.method public SaveDataURL(Ljava/lang/String;Ljava/lang/String;)V
    .locals 8

    .line 172
    const-string v0, "data:"

    invoke-virtual {p2, v0}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_0

    goto :goto_0

    :cond_0
    const/4 v0, 0x5

    .line 175
    invoke-virtual {p2, v0}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object p2

    .line 176
    const-string v0, ";"

    invoke-virtual {p2, v0}, Ljava/lang/String;->indexOf(Ljava/lang/String;)I

    move-result v0

    if-gez v0, :cond_1

    :goto_0
    return-void

    :cond_1
    add-int/lit8 v1, v0, 0x8

    .line 180
    invoke-virtual {p2, v1}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object v7

    const/4 v1, 0x0

    .line 181
    invoke-virtual {p2, v1, v0}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v5

    .line 182
    sget-object v6, Lcom/unity3d/player/UnityPlayer;->currentActivity:Landroid/app/Activity;

    .line 183
    new-instance v2, Lnet/gree/unitywebview/CWebViewPlugin$1;

    move-object v3, p0

    move-object v4, p1

    invoke-direct/range {v2 .. v7}, Lnet/gree/unitywebview/CWebViewPlugin$1;-><init>(Lnet/gree/unitywebview/CWebViewPlugin;Ljava/lang/String;Ljava/lang/String;Landroid/app/Activity;Ljava/lang/String;)V

    invoke-virtual {v6, v2}, Landroid/app/Activity;->runOnUiThread(Ljava/lang/Runnable;)V

    return-void
.end method

.method public SetAlertDialogEnabled(Z)V
    .locals 2

    .line 1149
    sget-object v0, Lcom/unity3d/player/UnityPlayer;->currentActivity:Landroid/app/Activity;

    .line 1150
    invoke-static {v0}, Lnet/gree/unitywebview/CWebViewPlugin;->isDestroyed(Landroid/app/Activity;)Z

    move-result v1

    if-eqz v1, :cond_0

    return-void

    .line 1153
    :cond_0
    new-instance v1, Lnet/gree/unitywebview/CWebViewPlugin$18;

    invoke-direct {v1, p0, p1}, Lnet/gree/unitywebview/CWebViewPlugin$18;-><init>(Lnet/gree/unitywebview/CWebViewPlugin;Z)V

    invoke-virtual {v0, v1}, Landroid/app/Activity;->runOnUiThread(Ljava/lang/Runnable;)V

    return-void
.end method

.method public SetBasicAuthInfo(Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    .line 1394
    iput-object p1, p0, Lnet/gree/unitywebview/CWebViewPlugin;->mBasicAuthUserName:Ljava/lang/String;

    .line 1395
    iput-object p2, p0, Lnet/gree/unitywebview/CWebViewPlugin;->mBasicAuthPassword:Ljava/lang/String;

    return-void
.end method

.method public SetCameraAccess(Z)V
    .locals 2

    .line 1159
    sget-object v0, Lcom/unity3d/player/UnityPlayer;->currentActivity:Landroid/app/Activity;

    .line 1160
    invoke-static {v0}, Lnet/gree/unitywebview/CWebViewPlugin;->isDestroyed(Landroid/app/Activity;)Z

    move-result v1

    if-eqz v1, :cond_0

    return-void

    .line 1163
    :cond_0
    new-instance v1, Lnet/gree/unitywebview/CWebViewPlugin$19;

    invoke-direct {v1, p0, p1}, Lnet/gree/unitywebview/CWebViewPlugin$19;-><init>(Lnet/gree/unitywebview/CWebViewPlugin;Z)V

    invoke-virtual {v0, v1}, Landroid/app/Activity;->runOnUiThread(Ljava/lang/Runnable;)V

    return-void
.end method

.method public SetCookies(Ljava/lang/String;Ljava/util/List;)V
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    .line 1372
    invoke-static {}, Landroid/webkit/CookieManager;->getInstance()Landroid/webkit/CookieManager;

    move-result-object v0

    .line 1373
    invoke-interface {p2}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p2

    :goto_0
    invoke-interface {p2}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {p2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    .line 1375
    invoke-virtual {v0, p1, v1}, Landroid/webkit/CookieManager;->setCookie(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    .line 1377
    :cond_0
    invoke-virtual {v0}, Landroid/webkit/CookieManager;->flush()V

    return-void
.end method

.method public SetInteractionEnabled(Z)V
    .locals 2

    .line 1125
    sget-object v0, Lcom/unity3d/player/UnityPlayer;->currentActivity:Landroid/app/Activity;

    .line 1126
    invoke-static {v0}, Lnet/gree/unitywebview/CWebViewPlugin;->isDestroyed(Landroid/app/Activity;)Z

    move-result v1

    if-eqz v1, :cond_0

    return-void

    .line 1129
    :cond_0
    new-instance v1, Lnet/gree/unitywebview/CWebViewPlugin$16;

    invoke-direct {v1, p0, p1}, Lnet/gree/unitywebview/CWebViewPlugin$16;-><init>(Lnet/gree/unitywebview/CWebViewPlugin;Z)V

    invoke-virtual {v0, v1}, Landroid/app/Activity;->runOnUiThread(Ljava/lang/Runnable;)V

    return-void
.end method

.method public SetMargins(IIII)V
    .locals 3

    .line 1081
    new-instance v0, Landroid/widget/FrameLayout$LayoutParams;

    const/4 v1, -0x1

    const/4 v2, 0x0

    invoke-direct {v0, v1, v1, v2}, Landroid/widget/FrameLayout$LayoutParams;-><init>(III)V

    .line 1086
    invoke-virtual {v0, p1, p2, p3, p4}, Landroid/widget/FrameLayout$LayoutParams;->setMargins(IIII)V

    .line 1087
    sget-object p1, Lcom/unity3d/player/UnityPlayer;->currentActivity:Landroid/app/Activity;

    .line 1088
    invoke-static {p1}, Lnet/gree/unitywebview/CWebViewPlugin;->isDestroyed(Landroid/app/Activity;)Z

    move-result p2

    if-eqz p2, :cond_0

    return-void

    .line 1091
    :cond_0
    new-instance p2, Lnet/gree/unitywebview/CWebViewPlugin$14;

    invoke-direct {p2, p0, v0}, Lnet/gree/unitywebview/CWebViewPlugin$14;-><init>(Lnet/gree/unitywebview/CWebViewPlugin;Landroid/widget/FrameLayout$LayoutParams;)V

    invoke-virtual {p1, p2}, Landroid/app/Activity;->runOnUiThread(Ljava/lang/Runnable;)V

    return-void
.end method

.method public SetMicrophoneAccess(Z)V
    .locals 2

    .line 1169
    sget-object v0, Lcom/unity3d/player/UnityPlayer;->currentActivity:Landroid/app/Activity;

    .line 1170
    invoke-static {v0}, Lnet/gree/unitywebview/CWebViewPlugin;->isDestroyed(Landroid/app/Activity;)Z

    move-result v1

    if-eqz v1, :cond_0

    return-void

    .line 1173
    :cond_0
    new-instance v1, Lnet/gree/unitywebview/CWebViewPlugin$20;

    invoke-direct {v1, p0, p1}, Lnet/gree/unitywebview/CWebViewPlugin$20;-><init>(Lnet/gree/unitywebview/CWebViewPlugin;Z)V

    invoke-virtual {v0, v1}, Landroid/app/Activity;->runOnUiThread(Ljava/lang/Runnable;)V

    return-void
.end method

.method public SetNetworkAvailable(Z)V
    .locals 2

    .line 1179
    sget-object v0, Lcom/unity3d/player/UnityPlayer;->currentActivity:Landroid/app/Activity;

    .line 1180
    invoke-static {v0}, Lnet/gree/unitywebview/CWebViewPlugin;->isDestroyed(Landroid/app/Activity;)Z

    move-result v1

    if-eqz v1, :cond_0

    return-void

    .line 1183
    :cond_0
    new-instance v1, Lnet/gree/unitywebview/CWebViewPlugin$21;

    invoke-direct {v1, p0, p1}, Lnet/gree/unitywebview/CWebViewPlugin$21;-><init>(Lnet/gree/unitywebview/CWebViewPlugin;Z)V

    invoke-virtual {v0, v1}, Landroid/app/Activity;->runOnUiThread(Ljava/lang/Runnable;)V

    return-void
.end method

.method public SetScrollbarsVisibility(Z)V
    .locals 2

    .line 1135
    sget-object v0, Lcom/unity3d/player/UnityPlayer;->currentActivity:Landroid/app/Activity;

    .line 1136
    invoke-static {v0}, Lnet/gree/unitywebview/CWebViewPlugin;->isDestroyed(Landroid/app/Activity;)Z

    move-result v1

    if-eqz v1, :cond_0

    return-void

    .line 1139
    :cond_0
    new-instance v1, Lnet/gree/unitywebview/CWebViewPlugin$17;

    invoke-direct {v1, p0, p1}, Lnet/gree/unitywebview/CWebViewPlugin$17;-><init>(Lnet/gree/unitywebview/CWebViewPlugin;Z)V

    invoke-virtual {v0, v1}, Landroid/app/Activity;->runOnUiThread(Ljava/lang/Runnable;)V

    return-void
.end method

.method public SetTextZoom(I)V
    .locals 2

    .line 1414
    sget-object v0, Lcom/unity3d/player/UnityPlayer;->currentActivity:Landroid/app/Activity;

    .line 1415
    invoke-static {v0}, Lnet/gree/unitywebview/CWebViewPlugin;->isDestroyed(Landroid/app/Activity;)Z

    move-result v1

    if-eqz v1, :cond_0

    return-void

    .line 1418
    :cond_0
    new-instance v1, Lnet/gree/unitywebview/CWebViewPlugin$29;

    invoke-direct {v1, p0, p1}, Lnet/gree/unitywebview/CWebViewPlugin$29;-><init>(Lnet/gree/unitywebview/CWebViewPlugin;I)V

    invoke-virtual {v0, v1}, Landroid/app/Activity;->runOnUiThread(Ljava/lang/Runnable;)V

    return-void
.end method

.method public SetURLPattern(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Z
    .locals 3

    const/4 v0, 0x0

    const/4 v1, 0x0

    if-eqz p1, :cond_1

    .line 975
    :try_start_0
    invoke-virtual {p1}, Ljava/lang/String;->length()I

    move-result v2

    if-nez v2, :cond_0

    goto :goto_0

    :cond_0
    invoke-static {p1}, Ljava/util/regex/Pattern;->compile(Ljava/lang/String;)Ljava/util/regex/Pattern;

    move-result-object p1

    goto :goto_1

    :cond_1
    :goto_0
    move-object p1, v1

    :goto_1
    if-eqz p2, :cond_3

    .line 976
    invoke-virtual {p2}, Ljava/lang/String;->length()I

    move-result v2

    if-nez v2, :cond_2

    goto :goto_2

    :cond_2
    invoke-static {p2}, Ljava/util/regex/Pattern;->compile(Ljava/lang/String;)Ljava/util/regex/Pattern;

    move-result-object p2

    goto :goto_3

    :cond_3
    :goto_2
    move-object p2, v1

    :goto_3
    if-eqz p3, :cond_5

    .line 977
    invoke-virtual {p3}, Ljava/lang/String;->length()I

    move-result v2

    if-nez v2, :cond_4

    goto :goto_4

    :cond_4
    invoke-static {p3}, Ljava/util/regex/Pattern;->compile(Ljava/lang/String;)Ljava/util/regex/Pattern;

    move-result-object v1

    .line 978
    :cond_5
    :goto_4
    sget-object p3, Lcom/unity3d/player/UnityPlayer;->currentActivity:Landroid/app/Activity;

    .line 979
    invoke-static {p3}, Lnet/gree/unitywebview/CWebViewPlugin;->isDestroyed(Landroid/app/Activity;)Z

    move-result v2

    if-eqz v2, :cond_6

    return v0

    .line 982
    :cond_6
    new-instance v2, Lnet/gree/unitywebview/CWebViewPlugin$7;

    invoke-direct {v2, p0, p1, p2, v1}, Lnet/gree/unitywebview/CWebViewPlugin$7;-><init>(Lnet/gree/unitywebview/CWebViewPlugin;Ljava/util/regex/Pattern;Ljava/util/regex/Pattern;Ljava/util/regex/Pattern;)V

    invoke-virtual {p3, v2}, Landroid/app/Activity;->runOnUiThread(Ljava/lang/Runnable;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    const/4 p1, 0x1

    return p1

    :catch_0
    return v0
.end method

.method public SetVisibility(Z)V
    .locals 2

    .line 1100
    sget-object v0, Lcom/unity3d/player/UnityPlayer;->currentActivity:Landroid/app/Activity;

    .line 1101
    invoke-static {v0}, Lnet/gree/unitywebview/CWebViewPlugin;->isDestroyed(Landroid/app/Activity;)Z

    move-result v1

    if-eqz v1, :cond_0

    return-void

    .line 1104
    :cond_0
    new-instance v1, Lnet/gree/unitywebview/CWebViewPlugin$15;

    invoke-direct {v1, p0, p1}, Lnet/gree/unitywebview/CWebViewPlugin$15;-><init>(Lnet/gree/unitywebview/CWebViewPlugin;Z)V

    invoke-virtual {v0, v1}, Landroid/app/Activity;->runOnUiThread(Ljava/lang/Runnable;)V

    return-void
.end method

.method public onActivityResult(IILandroid/content/Intent;)V
    .locals 2

    const/4 v0, 0x1

    if-eq p1, v0, :cond_0

    .line 303
    invoke-super {p0, p1, p2, p3}, Landroid/app/Fragment;->onActivityResult(IILandroid/content/Intent;)V

    return-void

    .line 307
    :cond_0
    iget-object v1, p0, Lnet/gree/unitywebview/CWebViewPlugin;->mFilePathCallback:Landroid/webkit/ValueCallback;

    if-nez v1, :cond_1

    .line 308
    invoke-super {p0, p1, p2, p3}, Landroid/app/Fragment;->onActivityResult(IILandroid/content/Intent;)V

    return-void

    :cond_1
    const/4 p1, -0x1

    const/4 v1, 0x0

    if-ne p2, p1, :cond_4

    const/4 p1, 0x0

    if-nez p3, :cond_2

    .line 315
    iget-object p2, p0, Lnet/gree/unitywebview/CWebViewPlugin;->mCameraPhotoUri:Landroid/net/Uri;

    if-eqz p2, :cond_4

    .line 316
    new-array p3, v0, [Landroid/net/Uri;

    aput-object p2, p3, p1

    goto :goto_0

    .line 319
    :cond_2
    invoke-virtual {p3}, Landroid/content/Intent;->getDataString()Ljava/lang/String;

    move-result-object p2

    if-nez p2, :cond_3

    .line 322
    iget-object p2, p0, Lnet/gree/unitywebview/CWebViewPlugin;->mCameraPhotoUri:Landroid/net/Uri;

    if-eqz p2, :cond_4

    .line 323
    new-array p3, v0, [Landroid/net/Uri;

    aput-object p2, p3, p1

    goto :goto_0

    .line 326
    :cond_3
    new-array p3, v0, [Landroid/net/Uri;

    invoke-static {p2}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object p2

    aput-object p2, p3, p1

    goto :goto_0

    :cond_4
    move-object p3, v1

    .line 330
    :goto_0
    iget-object p1, p0, Lnet/gree/unitywebview/CWebViewPlugin;->mFilePathCallback:Landroid/webkit/ValueCallback;

    invoke-interface {p1, p3}, Landroid/webkit/ValueCallback;->onReceiveValue(Ljava/lang/Object;)V

    .line 331
    iput-object v1, p0, Lnet/gree/unitywebview/CWebViewPlugin;->mFilePathCallback:Landroid/webkit/ValueCallback;

    return-void
.end method

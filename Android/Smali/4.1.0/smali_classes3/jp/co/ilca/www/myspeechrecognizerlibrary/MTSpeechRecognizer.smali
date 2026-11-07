.class public Ljp/co/ilca/www/myspeechrecognizerlibrary/MTSpeechRecognizer;
.super Ljava/lang/Object;
.source "MTSpeechRecognizer.java"


# static fields
.field static final LOG_HEADER:Ljava/lang/String; = "[MTSpeech.java]"

.field static final LOG_TAG:Ljava/lang/String; = "MTSpeechNative"

.field static final UNITY_MESSAGE_METHOD_NAME:Ljava/lang/String; = "OnNativeMessage"

.field static final UNITY_OBJECT_NAME:Ljava/lang/String; = "Manager"

.field static recognizer:Landroid/speech/SpeechRecognizer;

.field static recognizerIntent:Landroid/content/Intent;


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 19
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static CancelRecognizer()V
    .locals 2

    .line 245
    const-string v0, "MTSpeechNative"

    const-string v1, "[MTSpeech.java]EndRecognizer()"

    invoke-static {v0, v1}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 246
    sget-object v0, Ljp/co/ilca/www/myspeechrecognizerlibrary/MTSpeechRecognizer;->recognizer:Landroid/speech/SpeechRecognizer;

    if-nez v0, :cond_0

    return-void

    .line 247
    :cond_0
    invoke-virtual {v0}, Landroid/speech/SpeechRecognizer;->cancel()V

    return-void
.end method

.method public static EndRecognizer()V
    .locals 2

    .line 251
    const-string v0, "MTSpeechNative"

    const-string v1, "[MTSpeech.java]EndRecognizer()"

    invoke-static {v0, v1}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 252
    sget-object v0, Ljp/co/ilca/www/myspeechrecognizerlibrary/MTSpeechRecognizer;->recognizer:Landroid/speech/SpeechRecognizer;

    if-nez v0, :cond_0

    return-void

    .line 253
    :cond_0
    invoke-virtual {v0}, Landroid/speech/SpeechRecognizer;->destroy()V

    const/4 v0, 0x0

    .line 254
    sput-object v0, Ljp/co/ilca/www/myspeechrecognizerlibrary/MTSpeechRecognizer;->recognizer:Landroid/speech/SpeechRecognizer;

    .line 255
    sput-object v0, Ljp/co/ilca/www/myspeechrecognizerlibrary/MTSpeechRecognizer;->recognizerIntent:Landroid/content/Intent;

    return-void
.end method

.method public static StartRecognizer(Landroid/content/Context;ZI)V
    .locals 4

    .line 67
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "[MTSpeech.java]StartRecognizer( isOffline="

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v1, " , languageCode="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, " )"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "MTSpeechNative"

    invoke-static {v1, v0}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 70
    sget-object v0, Ljp/co/ilca/www/myspeechrecognizerlibrary/MTSpeechRecognizer;->recognizer:Landroid/speech/SpeechRecognizer;

    const-string v2, "OnNativeMessage"

    const-string v3, "Manager"

    if-eqz v0, :cond_1

    .line 72
    sget-object p0, Ljp/co/ilca/www/myspeechrecognizerlibrary/MTSpeechRecognizer;->recognizerIntent:Landroid/content/Intent;

    if-eqz p0, :cond_0

    .line 74
    invoke-virtual {v0, p0}, Landroid/speech/SpeechRecognizer;->startListening(Landroid/content/Intent;)V

    return-void

    .line 78
    :cond_0
    const-string p0, "[MTSpeech.java]recognizerIntent is null!"

    invoke-static {v1, p0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 79
    const-string p0, "onError:-1"

    invoke-static {v3, v2, p0}, Lcom/unity3d/player/UnityPlayer;->UnitySendMessage(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    return-void

    .line 84
    :cond_1
    invoke-static {p0}, Landroid/speech/SpeechRecognizer;->isRecognitionAvailable(Landroid/content/Context;)Z

    move-result v0

    if-nez v0, :cond_2

    .line 86
    const-string p0, "onError:-2"

    invoke-static {v3, v2, p0}, Lcom/unity3d/player/UnityPlayer;->UnitySendMessage(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    return-void

    .line 92
    :cond_2
    const-string v0, "ja-JP"

    packed-switch p2, :pswitch_data_0

    :pswitch_0
    goto :goto_0

    .line 103
    :pswitch_1
    const-string v0, "es-419"

    goto :goto_0

    .line 102
    :pswitch_2
    const-string v0, "zh-TW"

    goto :goto_0

    .line 101
    :pswitch_3
    const-string v0, "zh-CN"

    goto :goto_0

    .line 100
    :pswitch_4
    const-string v0, "ko-KR"

    goto :goto_0

    .line 99
    :pswitch_5
    const-string v0, "es-ES"

    goto :goto_0

    .line 98
    :pswitch_6
    const-string v0, "de-DE"

    goto :goto_0

    .line 97
    :pswitch_7
    const-string v0, "it-IT"

    goto :goto_0

    .line 96
    :pswitch_8
    const-string v0, "fr-FR"

    goto :goto_0

    .line 95
    :pswitch_9
    const-string v0, "en-US"

    .line 112
    :goto_0
    :pswitch_a
    new-instance p2, Ljava/lang/StringBuilder;

    const-string v2, "[MTSpeech.java]language="

    invoke-direct {p2, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, " , Locale.getDefault="

    invoke-virtual {p2, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Ljava/util/Locale;->getDefault()Ljava/util/Locale;

    move-result-object v2

    invoke-virtual {p2, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-static {v1, p2}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 114
    new-instance p2, Landroid/content/Intent;

    const-string v1, "android.speech.action.RECOGNIZE_SPEECH"

    invoke-direct {p2, v1}, Landroid/content/Intent;-><init>(Ljava/lang/String;)V

    sput-object p2, Ljp/co/ilca/www/myspeechrecognizerlibrary/MTSpeechRecognizer;->recognizerIntent:Landroid/content/Intent;

    .line 116
    const-string v1, "android.speech.extra.LANGUAGE"

    invoke-virtual {p2, v1, v0}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    .line 117
    sget-object p2, Ljp/co/ilca/www/myspeechrecognizerlibrary/MTSpeechRecognizer;->recognizerIntent:Landroid/content/Intent;

    const-string v1, "android.speech.extra.LANGUAGE_PREFERENCE"

    invoke-virtual {p2, v1, v0}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    .line 118
    sget-object p2, Ljp/co/ilca/www/myspeechrecognizerlibrary/MTSpeechRecognizer;->recognizerIntent:Landroid/content/Intent;

    const-string v0, "calling_package"

    invoke-virtual {p0}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p2, v0, v1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    .line 121
    sget-object p2, Ljp/co/ilca/www/myspeechrecognizerlibrary/MTSpeechRecognizer;->recognizerIntent:Landroid/content/Intent;

    const-string v0, "android.speech.extra.PREFER_OFFLINE"

    invoke-virtual {p2, v0, p1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Z)Landroid/content/Intent;

    .line 123
    sget p1, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 p2, 0x1f

    if-lt p1, p2, :cond_3

    .line 127
    :try_start_0
    invoke-static {p0}, Lcom/unity/androidnotifications/UnityNotificationManager$$ExternalSyntheticApiModelOutline0;->m(Landroid/content/Context;)Landroid/speech/SpeechRecognizer;

    move-result-object p1

    sput-object p1, Ljp/co/ilca/www/myspeechrecognizerlibrary/MTSpeechRecognizer;->recognizer:Landroid/speech/SpeechRecognizer;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_1

    .line 130
    :catch_0
    invoke-static {p0}, Landroid/speech/SpeechRecognizer;->createSpeechRecognizer(Landroid/content/Context;)Landroid/speech/SpeechRecognizer;

    move-result-object p0

    sput-object p0, Ljp/co/ilca/www/myspeechrecognizerlibrary/MTSpeechRecognizer;->recognizer:Landroid/speech/SpeechRecognizer;

    goto :goto_1

    .line 136
    :cond_3
    invoke-static {p0}, Landroid/speech/SpeechRecognizer;->createSpeechRecognizer(Landroid/content/Context;)Landroid/speech/SpeechRecognizer;

    move-result-object p0

    sput-object p0, Ljp/co/ilca/www/myspeechrecognizerlibrary/MTSpeechRecognizer;->recognizer:Landroid/speech/SpeechRecognizer;

    .line 139
    :goto_1
    sget-object p0, Ljp/co/ilca/www/myspeechrecognizerlibrary/MTSpeechRecognizer;->recognizer:Landroid/speech/SpeechRecognizer;

    new-instance p1, Ljp/co/ilca/www/myspeechrecognizerlibrary/MTSpeechRecognizer$1;

    invoke-direct {p1}, Ljp/co/ilca/www/myspeechrecognizerlibrary/MTSpeechRecognizer$1;-><init>()V

    invoke-virtual {p0, p1}, Landroid/speech/SpeechRecognizer;->setRecognitionListener(Landroid/speech/RecognitionListener;)V

    .line 241
    sget-object p0, Ljp/co/ilca/www/myspeechrecognizerlibrary/MTSpeechRecognizer;->recognizer:Landroid/speech/SpeechRecognizer;

    sget-object p1, Ljp/co/ilca/www/myspeechrecognizerlibrary/MTSpeechRecognizer;->recognizerIntent:Landroid/content/Intent;

    invoke-virtual {p0, p1}, Landroid/speech/SpeechRecognizer;->startListening(Landroid/content/Intent;)V

    return-void

    nop

    :pswitch_data_0
    .packed-switch 0x1
        :pswitch_a
        :pswitch_9
        :pswitch_8
        :pswitch_7
        :pswitch_6
        :pswitch_0
        :pswitch_5
        :pswitch_4
        :pswitch_3
        :pswitch_2
        :pswitch_1
    .end packed-switch
.end method

.method public static TestMessage(Ljava/lang/String;)V
    .locals 2

    .line 260
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "[MTSpeech.java]TestMessage("

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, ")"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "MTSpeechNative"

    invoke-static {v1, v0}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 261
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "onOther:"

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    const-string v0, "Manager"

    const-string v1, "OnNativeMessage"

    invoke-static {v0, v1, p0}, Lcom/unity3d/player/UnityPlayer;->UnitySendMessage(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

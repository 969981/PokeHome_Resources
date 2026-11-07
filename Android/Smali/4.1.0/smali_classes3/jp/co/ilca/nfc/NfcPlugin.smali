.class public Ljp/co/ilca/nfc/NfcPlugin;
.super Ljava/lang/Object;
.source "NfcPlugin.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Ljp/co/ilca/nfc/NfcPlugin$MyReaderCallback;
    }
.end annotation


# static fields
.field private static final NDEF_APP_AID:[B

.field private static final NDEF_FILE_ID:[B

.field private static final TAG:Ljava/lang/String; = "NfcPlugin"

.field private static _isError:Z

.field private static _payload:[B

.field private static _sharedInstance:Ljp/co/ilca/nfc/NfcPlugin;

.field private static _tagId:[B


# instance fields
.field private _activity:Landroid/app/Activity;

.field private _nfcAdapter:Landroid/nfc/NfcAdapter;


# direct methods
.method static bridge synthetic -$$Nest$sfgetNDEF_APP_AID()[B
    .locals 1

    sget-object v0, Ljp/co/ilca/nfc/NfcPlugin;->NDEF_APP_AID:[B

    return-object v0
.end method

.method static bridge synthetic -$$Nest$sfgetNDEF_FILE_ID()[B
    .locals 1

    sget-object v0, Ljp/co/ilca/nfc/NfcPlugin;->NDEF_FILE_ID:[B

    return-object v0
.end method

.method static bridge synthetic -$$Nest$sfget_tagId()[B
    .locals 1

    sget-object v0, Ljp/co/ilca/nfc/NfcPlugin;->_tagId:[B

    return-object v0
.end method

.method static bridge synthetic -$$Nest$sfput_isError(Z)V
    .locals 0

    sput-boolean p0, Ljp/co/ilca/nfc/NfcPlugin;->_isError:Z

    return-void
.end method

.method static bridge synthetic -$$Nest$sfput_payload([B)V
    .locals 0

    sput-object p0, Ljp/co/ilca/nfc/NfcPlugin;->_payload:[B

    return-void
.end method

.method static bridge synthetic -$$Nest$sfput_tagId([B)V
    .locals 0

    sput-object p0, Ljp/co/ilca/nfc/NfcPlugin;->_tagId:[B

    return-void
.end method

.method static constructor <clinit>()V
    .locals 1

    .line 23
    const-string v0, "D2760000850101"

    invoke-static {v0}, Ljp/co/ilca/nfc/NfcPlugin;->hexStringToByteArray(Ljava/lang/String;)[B

    move-result-object v0

    sput-object v0, Ljp/co/ilca/nfc/NfcPlugin;->NDEF_APP_AID:[B

    .line 24
    const-string v0, "E104"

    invoke-static {v0}, Ljp/co/ilca/nfc/NfcPlugin;->hexStringToByteArray(Ljava/lang/String;)[B

    move-result-object v0

    sput-object v0, Ljp/co/ilca/nfc/NfcPlugin;->NDEF_FILE_ID:[B

    return-void
.end method

.method constructor <init>(Landroid/app/Activity;)V
    .locals 2

    .line 43
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 44
    const-string v0, "Constructor."

    const-string v1, "NfcPlugin"

    invoke-static {v1, v0}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 45
    iput-object p1, p0, Ljp/co/ilca/nfc/NfcPlugin;->_activity:Landroid/app/Activity;

    .line 46
    invoke-static {p1}, Landroid/nfc/NfcAdapter;->getDefaultAdapter(Landroid/content/Context;)Landroid/nfc/NfcAdapter;

    move-result-object p1

    iput-object p1, p0, Ljp/co/ilca/nfc/NfcPlugin;->_nfcAdapter:Landroid/nfc/NfcAdapter;

    if-nez p1, :cond_0

    .line 49
    const-string p1, "This device doesn\'t support NFC."

    invoke-static {v1, p1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    .line 53
    :cond_0
    invoke-virtual {p1}, Landroid/nfc/NfcAdapter;->isEnabled()Z

    move-result p1

    if-nez p1, :cond_1

    .line 55
    const-string p1, "NFC is disabled."

    invoke-static {v1, p1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    .line 59
    :cond_1
    const-string p1, "NFC reader initialized."

    invoke-static {v1, p1}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    return-void
.end method

.method public static Create(Landroid/app/Activity;)V
    .locals 1

    .line 85
    sget-object v0, Ljp/co/ilca/nfc/NfcPlugin;->_sharedInstance:Ljp/co/ilca/nfc/NfcPlugin;

    if-nez v0, :cond_0

    .line 87
    new-instance v0, Ljp/co/ilca/nfc/NfcPlugin;

    invoke-direct {v0, p0}, Ljp/co/ilca/nfc/NfcPlugin;-><init>(Landroid/app/Activity;)V

    sput-object v0, Ljp/co/ilca/nfc/NfcPlugin;->_sharedInstance:Ljp/co/ilca/nfc/NfcPlugin;

    :cond_0
    return-void
.end method

.method public static EndScanning()V
    .locals 1

    .line 107
    sget-object v0, Ljp/co/ilca/nfc/NfcPlugin;->_sharedInstance:Ljp/co/ilca/nfc/NfcPlugin;

    if-nez v0, :cond_0

    return-void

    .line 109
    :cond_0
    invoke-direct {v0}, Ljp/co/ilca/nfc/NfcPlugin;->endScanning()V

    return-void
.end method

.method public static GetPayload()[B
    .locals 1

    .line 75
    sget-object v0, Ljp/co/ilca/nfc/NfcPlugin;->_payload:[B

    return-object v0
.end method

.method public static GetTagId()[B
    .locals 1

    .line 70
    sget-object v0, Ljp/co/ilca/nfc/NfcPlugin;->_tagId:[B

    return-object v0
.end method

.method public static IsAvailable()Z
    .locals 2

    .line 93
    sget-object v0, Ljp/co/ilca/nfc/NfcPlugin;->_sharedInstance:Ljp/co/ilca/nfc/NfcPlugin;

    const/4 v1, 0x0

    if-nez v0, :cond_0

    return v1

    .line 95
    :cond_0
    iget-object v0, v0, Ljp/co/ilca/nfc/NfcPlugin;->_nfcAdapter:Landroid/nfc/NfcAdapter;

    if-eqz v0, :cond_1

    const/4 v0, 0x1

    return v0

    :cond_1
    return v1
.end method

.method public static IsError()Z
    .locals 1

    .line 80
    sget-boolean v0, Ljp/co/ilca/nfc/NfcPlugin;->_isError:Z

    return v0
.end method

.method public static StartScanning()V
    .locals 1

    .line 100
    sget-object v0, Ljp/co/ilca/nfc/NfcPlugin;->_sharedInstance:Ljp/co/ilca/nfc/NfcPlugin;

    if-nez v0, :cond_0

    return-void

    .line 102
    :cond_0
    invoke-direct {v0}, Ljp/co/ilca/nfc/NfcPlugin;->startScanning()V

    return-void
.end method

.method private endScanning()V
    .locals 2

    .line 130
    iget-object v0, p0, Ljp/co/ilca/nfc/NfcPlugin;->_activity:Landroid/app/Activity;

    if-nez v0, :cond_0

    goto :goto_0

    .line 131
    :cond_0
    iget-object v1, p0, Ljp/co/ilca/nfc/NfcPlugin;->_nfcAdapter:Landroid/nfc/NfcAdapter;

    if-nez v1, :cond_1

    :goto_0
    return-void

    .line 133
    :cond_1
    invoke-virtual {v1, v0}, Landroid/nfc/NfcAdapter;->disableReaderMode(Landroid/app/Activity;)V

    return-void
.end method

.method private static hexStringToByteArray(Ljava/lang/String;)[B
    .locals 7

    .line 31
    invoke-virtual {p0}, Ljava/lang/String;->length()I

    move-result v0

    .line 32
    div-int/lit8 v1, v0, 0x2

    new-array v1, v1, [B

    const/4 v2, 0x0

    :goto_0
    if-ge v2, v0, :cond_0

    .line 35
    div-int/lit8 v3, v2, 0x2

    invoke-virtual {p0, v2}, Ljava/lang/String;->charAt(I)C

    move-result v4

    const/16 v5, 0x10

    invoke-static {v4, v5}, Ljava/lang/Character;->digit(CI)I

    move-result v4

    shl-int/lit8 v4, v4, 0x4

    add-int/lit8 v6, v2, 0x1

    .line 36
    invoke-virtual {p0, v6}, Ljava/lang/String;->charAt(I)C

    move-result v6

    invoke-static {v6, v5}, Ljava/lang/Character;->digit(CI)I

    move-result v5

    add-int/2addr v4, v5

    int-to-byte v4, v4

    aput-byte v4, v1, v3

    add-int/lit8 v2, v2, 0x2

    goto :goto_0

    :cond_0
    return-object v1
.end method

.method private startScanning()V
    .locals 5

    .line 114
    iget-object v0, p0, Ljp/co/ilca/nfc/NfcPlugin;->_activity:Landroid/app/Activity;

    if-nez v0, :cond_0

    goto :goto_0

    .line 115
    :cond_0
    iget-object v1, p0, Ljp/co/ilca/nfc/NfcPlugin;->_nfcAdapter:Landroid/nfc/NfcAdapter;

    if-nez v1, :cond_1

    :goto_0
    return-void

    :cond_1
    const/4 v2, 0x0

    .line 117
    sput-object v2, Ljp/co/ilca/nfc/NfcPlugin;->_tagId:[B

    .line 118
    sput-object v2, Ljp/co/ilca/nfc/NfcPlugin;->_payload:[B

    const/4 v3, 0x0

    .line 119
    sput-boolean v3, Ljp/co/ilca/nfc/NfcPlugin;->_isError:Z

    .line 120
    new-instance v3, Ljp/co/ilca/nfc/NfcPlugin$MyReaderCallback;

    invoke-direct {v3, p0, v2}, Ljp/co/ilca/nfc/NfcPlugin$MyReaderCallback;-><init>(Ljp/co/ilca/nfc/NfcPlugin;Ljp/co/ilca/nfc/NfcPlugin-IA;)V

    const/16 v4, 0x81

    invoke-virtual {v1, v0, v3, v4, v2}, Landroid/nfc/NfcAdapter;->enableReaderMode(Landroid/app/Activity;Landroid/nfc/NfcAdapter$ReaderCallback;ILandroid/os/Bundle;)V

    return-void
.end method

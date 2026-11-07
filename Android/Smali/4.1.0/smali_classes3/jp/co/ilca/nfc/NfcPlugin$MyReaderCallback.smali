.class Ljp/co/ilca/nfc/NfcPlugin$MyReaderCallback;
.super Ljava/lang/Object;
.source "NfcPlugin.java"

# interfaces
.implements Landroid/nfc/NfcAdapter$ReaderCallback;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Ljp/co/ilca/nfc/NfcPlugin;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x2
    name = "MyReaderCallback"
.end annotation


# instance fields
.field final synthetic this$0:Ljp/co/ilca/nfc/NfcPlugin;


# direct methods
.method private constructor <init>(Ljp/co/ilca/nfc/NfcPlugin;)V
    .locals 0

    .line 136
    iput-object p1, p0, Ljp/co/ilca/nfc/NfcPlugin$MyReaderCallback;->this$0:Ljp/co/ilca/nfc/NfcPlugin;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method synthetic constructor <init>(Ljp/co/ilca/nfc/NfcPlugin;Ljp/co/ilca/nfc/NfcPlugin-IA;)V
    .locals 0

    invoke-direct {p0, p1}, Ljp/co/ilca/nfc/NfcPlugin$MyReaderCallback;-><init>(Ljp/co/ilca/nfc/NfcPlugin;)V

    return-void
.end method

.method private varargs combine([[B)[B
    .locals 7

    .line 318
    array-length v0, p1

    const/4 v1, 0x0

    move v2, v1

    move v3, v2

    :goto_0
    if-ge v2, v0, :cond_0

    aget-object v4, p1, v2

    .line 320
    array-length v4, v4

    add-int/2addr v3, v4

    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    .line 323
    :cond_0
    new-array v0, v3, [B

    .line 325
    array-length v2, p1

    move v3, v1

    move v4, v3

    :goto_1
    if-ge v3, v2, :cond_1

    aget-object v5, p1, v3

    .line 327
    array-length v6, v5

    invoke-static {v5, v1, v0, v4, v6}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    .line 328
    array-length v5, v5

    add-int/2addr v4, v5

    add-int/lit8 v3, v3, 0x1

    goto :goto_1

    :cond_1
    return-object v0
.end method

.method private processNdef(Landroid/nfc/NdefMessage;)V
    .locals 5

    .line 336
    invoke-virtual {p1}, Landroid/nfc/NdefMessage;->getRecords()[Landroid/nfc/NdefRecord;

    move-result-object p1

    array-length v0, p1

    const/4 v1, 0x0

    :goto_0
    if-ge v1, v0, :cond_2

    aget-object v2, p1, v1

    .line 338
    invoke-virtual {v2}, Landroid/nfc/NdefRecord;->getPayload()[B

    move-result-object v3

    .line 340
    invoke-virtual {v2}, Landroid/nfc/NdefRecord;->getTnf()S

    .line 358
    invoke-virtual {v2}, Landroid/nfc/NdefRecord;->getType()[B

    move-result-object v2

    .line 359
    sget-object v4, Landroid/nfc/NdefRecord;->RTD_TEXT:[B

    invoke-static {v2, v4}, Ljava/util/Arrays;->equals([B[B)Z

    move-result v4

    if-eqz v4, :cond_0

    .line 361
    invoke-static {v3}, Ljp/co/ilca/nfc/NfcPlugin;->-$$Nest$sfput_payload([B)V

    goto :goto_1

    .line 363
    :cond_0
    sget-object v4, Landroid/nfc/NdefRecord;->RTD_URI:[B

    invoke-static {v2, v4}, Ljava/util/Arrays;->equals([B[B)Z

    move-result v2

    if-eqz v2, :cond_1

    .line 365
    invoke-static {v3}, Ljp/co/ilca/nfc/NfcPlugin;->-$$Nest$sfput_payload([B)V

    goto :goto_1

    :cond_1
    const/4 v2, 0x1

    .line 369
    invoke-static {v2}, Ljp/co/ilca/nfc/NfcPlugin;->-$$Nest$sfput_isError(Z)V

    :goto_1
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :cond_2
    return-void
.end method

.method private processTag(Landroid/nfc/Tag;)V
    .locals 4

    .line 151
    const-string v0, "NfcPlugin"

    .line 0
    const-string v1, "TagId = "

    const/4 v2, 0x1

    .line 151
    :try_start_0
    const-string v3, "Tag discovered"

    invoke-static {v0, v3}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 153
    invoke-virtual {p1}, Landroid/nfc/Tag;->getId()[B

    move-result-object v3

    invoke-static {v3}, Ljp/co/ilca/nfc/NfcPlugin;->-$$Nest$sfput_tagId([B)V

    .line 154
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-static {}, Ljp/co/ilca/nfc/NfcPlugin;->-$$Nest$sfget_tagId()[B

    move-result-object v1

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 156
    invoke-direct {p0, p1}, Ljp/co/ilca/nfc/NfcPlugin$MyReaderCallback;->readNdefMessageOverIsoDep(Landroid/nfc/Tag;)Landroid/nfc/NdefMessage;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 160
    const-string v1, "NdefMessage read"

    invoke-static {v0, v1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 161
    invoke-direct {p0, p1}, Ljp/co/ilca/nfc/NfcPlugin$MyReaderCallback;->processNdef(Landroid/nfc/NdefMessage;)V

    return-void

    .line 165
    :cond_0
    const-string p1, "NdefMessage is not found"

    invoke-static {v0, p1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 166
    invoke-static {v2}, Ljp/co/ilca/nfc/NfcPlugin;->-$$Nest$sfput_isError(Z)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception p1

    .line 171
    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 172
    invoke-static {v2}, Ljp/co/ilca/nfc/NfcPlugin;->-$$Nest$sfput_isError(Z)V

    return-void
.end method

.method private readBinary(Landroid/nfc/tech/IsoDep;II)[B
    .locals 6
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    .line 254
    new-instance v0, Ljava/io/ByteArrayOutputStream;

    invoke-direct {v0, p3}, Ljava/io/ByteArrayOutputStream;-><init>(I)V

    .line 257
    invoke-direct {p0, p1}, Ljp/co/ilca/nfc/NfcPlugin$MyReaderCallback;->singleReadLimit(Landroid/nfc/tech/IsoDep;)I

    move-result v1

    :goto_0
    if-lez p3, :cond_2

    .line 261
    invoke-static {p3, v1}, Ljava/lang/Math;->min(II)I

    move-result v2

    .line 264
    invoke-direct {p0, p2, v2}, Ljp/co/ilca/nfc/NfcPlugin$MyReaderCallback;->readBinaryApdu(II)[B

    move-result-object v3

    new-instance v4, Ljava/lang/StringBuilder;

    const-string v5, "read NDEF binary at offset "

    invoke-direct {v4, v5}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v4, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    .line 262
    invoke-direct {p0, p1, v3, v4}, Ljp/co/ilca/nfc/NfcPlugin$MyReaderCallback;->transceiveIsoCommand(Landroid/nfc/tech/IsoDep;[BLjava/lang/String;)[B

    move-result-object v3

    .line 268
    array-length v4, v3

    if-eqz v4, :cond_1

    .line 275
    array-length v4, v3

    if-ne v4, v2, :cond_0

    const/4 v2, 0x0

    .line 280
    array-length v4, v3

    invoke-virtual {v0, v3, v2, v4}, Ljava/io/ByteArrayOutputStream;->write([BII)V

    .line 281
    array-length v2, v3

    add-int/2addr p2, v2

    .line 282
    array-length v2, v3

    sub-int/2addr p3, v2

    goto :goto_0

    .line 277
    :cond_0
    new-instance p1, Ljava/io/IOException;

    new-instance p3, Ljava/lang/StringBuilder;

    invoke-direct {p3, v5}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p3, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p2, " returned "

    invoke-virtual {p3, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    array-length p2, v3

    invoke-virtual {p3, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p2, " bytes, expected "

    invoke-virtual {p3, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p3, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-direct {p1, p2}, Ljava/io/IOException;-><init>(Ljava/lang/String;)V

    throw p1

    .line 272
    :cond_1
    new-instance p1, Ljava/io/IOException;

    new-instance p3, Ljava/lang/StringBuilder;

    invoke-direct {p3, v5}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p3, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p2, " returned no data"

    invoke-virtual {p3, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-direct {p1, p2}, Ljava/io/IOException;-><init>(Ljava/lang/String;)V

    throw p1

    .line 285
    :cond_2
    invoke-virtual {v0}, Ljava/io/ByteArrayOutputStream;->toByteArray()[B

    move-result-object p1

    return-object p1
.end method

.method private readBinaryApdu(II)[B
    .locals 4

    shr-int/lit8 v0, p1, 0x8

    and-int/lit16 v0, v0, 0xff

    int-to-byte v0, v0

    and-int/lit16 p1, p1, 0xff

    int-to-byte p1, p1

    int-to-byte p2, p2

    const/4 v1, 0x5

    .line 290
    new-array v1, v1, [B

    const/4 v2, 0x0

    aput-byte v2, v1, v2

    const/16 v2, -0x50

    const/4 v3, 0x1

    aput-byte v2, v1, v3

    const/4 v2, 0x2

    aput-byte v0, v1, v2

    const/4 v0, 0x3

    aput-byte p1, v1, v0

    const/4 p1, 0x4

    aput-byte p2, v1, p1

    return-object v1
.end method

.method private readNdefMessageOverIsoDep(Landroid/nfc/Tag;)Landroid/nfc/NdefMessage;
    .locals 5

    .line 178
    invoke-static {p1}, Landroid/nfc/tech/IsoDep;->get(Landroid/nfc/Tag;)Landroid/nfc/tech/IsoDep;

    move-result-object p1

    .line 179
    const-string v0, "NfcPlugin"

    const/4 v1, 0x0

    if-nez p1, :cond_0

    .line 181
    const-string p1, "IsoDep is null"

    invoke-static {v0, p1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    return-object v1

    .line 187
    :cond_0
    :try_start_0
    invoke-virtual {p1}, Landroid/nfc/tech/IsoDep;->isConnected()Z

    move-result v2

    if-nez v2, :cond_1

    .line 189
    invoke-virtual {p1}, Landroid/nfc/tech/IsoDep;->connect()V

    .line 191
    :cond_1
    const-string v2, "IsoDep is connected"

    invoke-static {v0, v2}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 193
    invoke-static {}, Ljp/co/ilca/nfc/NfcPlugin;->-$$Nest$sfgetNDEF_APP_AID()[B

    move-result-object v0

    invoke-direct {p0, v0}, Ljp/co/ilca/nfc/NfcPlugin$MyReaderCallback;->selectByNameApdu([B)[B

    move-result-object v0

    const-string v2, "select NDEF application"

    invoke-direct {p0, p1, v0, v2}, Ljp/co/ilca/nfc/NfcPlugin$MyReaderCallback;->transceiveIsoCommand(Landroid/nfc/tech/IsoDep;[BLjava/lang/String;)[B

    .line 194
    invoke-static {}, Ljp/co/ilca/nfc/NfcPlugin;->-$$Nest$sfgetNDEF_FILE_ID()[B

    move-result-object v0

    invoke-direct {p0, v0}, Ljp/co/ilca/nfc/NfcPlugin$MyReaderCallback;->selectByFileIdApdu([B)[B

    move-result-object v0

    const-string v2, "select NDEF file"

    invoke-direct {p0, p1, v0, v2}, Ljp/co/ilca/nfc/NfcPlugin$MyReaderCallback;->transceiveIsoCommand(Landroid/nfc/tech/IsoDep;[BLjava/lang/String;)[B

    const/4 v0, 0x2

    const/4 v2, 0x0

    .line 196
    invoke-direct {p0, p1, v2, v0}, Ljp/co/ilca/nfc/NfcPlugin$MyReaderCallback;->readBinary(Landroid/nfc/tech/IsoDep;II)[B

    move-result-object v3

    .line 197
    aget-byte v2, v3, v2

    and-int/lit16 v2, v2, 0xff

    shl-int/lit8 v2, v2, 0x8

    const/4 v4, 0x1

    aget-byte v3, v3, v4
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_6
    .catch Landroid/nfc/FormatException; {:try_start_0 .. :try_end_0} :catch_4
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    and-int/lit16 v3, v3, 0xff

    or-int/2addr v2, v3

    if-gtz v2, :cond_2

    .line 228
    :try_start_1
    invoke-virtual {p1}, Landroid/nfc/tech/IsoDep;->close()V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    :catch_0
    return-object v1

    .line 207
    :cond_2
    :try_start_2
    invoke-direct {p0, p1}, Ljp/co/ilca/nfc/NfcPlugin$MyReaderCallback;->singleReadLimit(Landroid/nfc/tech/IsoDep;)I

    move-result v3
    :try_end_2
    .catch Ljava/io/IOException; {:try_start_2 .. :try_end_2} :catch_6
    .catch Landroid/nfc/FormatException; {:try_start_2 .. :try_end_2} :catch_4
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    if-le v2, v3, :cond_3

    .line 228
    :try_start_3
    invoke-virtual {p1}, Landroid/nfc/tech/IsoDep;->close()V
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_1

    :catch_1
    return-object v1

    .line 213
    :cond_3
    :try_start_4
    invoke-direct {p0, p1, v0, v2}, Ljp/co/ilca/nfc/NfcPlugin$MyReaderCallback;->readBinary(Landroid/nfc/tech/IsoDep;II)[B

    move-result-object v0

    .line 214
    new-instance v2, Landroid/nfc/NdefMessage;

    invoke-direct {v2, v0}, Landroid/nfc/NdefMessage;-><init>([B)V
    :try_end_4
    .catch Ljava/io/IOException; {:try_start_4 .. :try_end_4} :catch_6
    .catch Landroid/nfc/FormatException; {:try_start_4 .. :try_end_4} :catch_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_0

    .line 228
    :try_start_5
    invoke-virtual {p1}, Landroid/nfc/tech/IsoDep;->close()V
    :try_end_5
    .catch Ljava/lang/Exception; {:try_start_5 .. :try_end_5} :catch_2

    :catch_2
    return-object v2

    :catchall_0
    move-exception v0

    :try_start_6
    invoke-virtual {p1}, Landroid/nfc/tech/IsoDep;->close()V
    :try_end_6
    .catch Ljava/lang/Exception; {:try_start_6 .. :try_end_6} :catch_3

    .line 233
    :catch_3
    throw v0

    .line 228
    :catch_4
    :try_start_7
    invoke-virtual {p1}, Landroid/nfc/tech/IsoDep;->close()V
    :try_end_7
    .catch Ljava/lang/Exception; {:try_start_7 .. :try_end_7} :catch_5

    :catch_5
    return-object v1

    :catch_6
    :try_start_8
    invoke-virtual {p1}, Landroid/nfc/tech/IsoDep;->close()V
    :try_end_8
    .catch Ljava/lang/Exception; {:try_start_8 .. :try_end_8} :catch_7

    :catch_7
    return-object v1
.end method

.method private selectByFileIdApdu([B)[B
    .locals 7

    .line 312
    array-length v0, p1

    int-to-byte v0, v0

    const/4 v1, 0x5

    new-array v1, v1, [B

    const/4 v2, 0x0

    aput-byte v2, v1, v2

    const/4 v3, 0x1

    const/16 v4, -0x5c

    aput-byte v4, v1, v3

    const/4 v4, 0x2

    aput-byte v2, v1, v4

    const/4 v5, 0x3

    const/16 v6, 0xc

    aput-byte v6, v1, v5

    const/4 v6, 0x4

    aput-byte v0, v1, v6

    new-array v0, v5, [[B

    aput-object v1, v0, v2

    aput-object p1, v0, v3

    new-array p1, v3, [B

    aput-byte v2, p1, v2

    aput-object p1, v0, v4

    invoke-direct {p0, v0}, Ljp/co/ilca/nfc/NfcPlugin$MyReaderCallback;->combine([[B)[B

    move-result-object p1

    return-object p1
.end method

.method private selectByNameApdu([B)[B
    .locals 8

    .line 307
    array-length v0, p1

    int-to-byte v0, v0

    const/4 v1, 0x5

    new-array v1, v1, [B

    const/4 v2, 0x0

    aput-byte v2, v1, v2

    const/4 v3, 0x1

    const/16 v4, -0x5c

    aput-byte v4, v1, v3

    const/4 v4, 0x2

    const/4 v5, 0x4

    aput-byte v5, v1, v4

    const/4 v6, 0x3

    const/16 v7, 0xc

    aput-byte v7, v1, v6

    aput-byte v0, v1, v5

    new-array v0, v6, [[B

    aput-object v1, v0, v2

    aput-object p1, v0, v3

    new-array p1, v3, [B

    aput-byte v2, p1, v2

    aput-object p1, v0, v4

    invoke-direct {p0, v0}, Ljp/co/ilca/nfc/NfcPlugin$MyReaderCallback;->combine([[B)[B

    move-result-object p1

    return-object p1
.end method

.method private singleReadLimit(Landroid/nfc/tech/IsoDep;)I
    .locals 1

    .line 302
    invoke-virtual {p1}, Landroid/nfc/tech/IsoDep;->getMaxTransceiveLength()I

    move-result p1

    add-int/lit8 p1, p1, -0x5

    const/16 v0, 0xf0

    invoke-static {v0, p1}, Ljava/lang/Math;->min(II)I

    move-result p1

    const/4 v0, 0x1

    invoke-static {v0, p1}, Ljava/lang/Math;->max(II)I

    move-result p1

    return p1
.end method

.method private transceiveIsoCommand(Landroid/nfc/tech/IsoDep;[BLjava/lang/String;)[B
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    .line 238
    invoke-virtual {p1, p2}, Landroid/nfc/tech/IsoDep;->transceive([B)[B

    move-result-object p1

    .line 239
    array-length p2, p1

    const/4 v0, 0x2

    if-lt p2, v0, :cond_1

    .line 243
    array-length p2, p1

    sub-int/2addr p2, v0

    aget-byte p2, p1, p2

    and-int/lit16 p2, p2, 0xff

    .line 244
    array-length v1, p1

    const/4 v2, 0x1

    sub-int/2addr v1, v2

    aget-byte v1, p1, v1

    and-int/lit16 v1, v1, 0xff

    const/16 v3, 0x90

    if-ne p2, v3, :cond_0

    if-nez v1, :cond_0

    .line 249
    array-length p2, p1

    sub-int/2addr p2, v0

    invoke-static {p1, p2}, Ljava/util/Arrays;->copyOf([BI)[B

    move-result-object p1

    return-object p1

    .line 247
    :cond_0
    new-instance p1, Ljava/io/IOException;

    invoke-static {p2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p2

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    const/4 v3, 0x3

    new-array v3, v3, [Ljava/lang/Object;

    const/4 v4, 0x0

    aput-object p3, v3, v4

    aput-object p2, v3, v2

    aput-object v1, v3, v0

    const-string p2, "%s failed: %02X%02X"

    invoke-static {p2, v3}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p2

    invoke-direct {p1, p2}, Ljava/io/IOException;-><init>(Ljava/lang/String;)V

    throw p1

    .line 241
    :cond_1
    new-instance p1, Ljava/io/IOException;

    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p2, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p3, " returned a short ISO response"

    invoke-virtual {p2, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-direct {p1, p2}, Ljava/io/IOException;-><init>(Ljava/lang/String;)V

    throw p1
.end method


# virtual methods
.method public onTagDiscovered(Landroid/nfc/Tag;)V
    .locals 0

    if-eqz p1, :cond_0

    .line 143
    invoke-direct {p0, p1}, Ljp/co/ilca/nfc/NfcPlugin$MyReaderCallback;->processTag(Landroid/nfc/Tag;)V

    :cond_0
    return-void
.end method

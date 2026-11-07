.class public final Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData$Builder;
.super Lcom/google/protobuf/GeneratedMessageLite$Builder;
.source "TransactionEventRequestOuterClass.java"

# interfaces
.implements Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionDataOrBuilder;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x19
    name = "Builder"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/google/protobuf/GeneratedMessageLite$Builder<",
        "Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;",
        "Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData$Builder;",
        ">;",
        "Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionDataOrBuilder;"
    }
.end annotation


# direct methods
.method private constructor <init>()V
    .locals 1

    .line 1356
    invoke-static {}, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;->access$000()Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;

    move-result-object v0

    invoke-direct {p0, v0}, Lcom/google/protobuf/GeneratedMessageLite$Builder;-><init>(Lcom/google/protobuf/GeneratedMessageLite;)V

    return-void
.end method

.method synthetic constructor <init>(Lgatewayprotocol/v1/TransactionEventRequestOuterClass$1;)V
    .locals 0

    .line 1349
    invoke-direct {p0}, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData$Builder;-><init>()V

    return-void
.end method


# virtual methods
.method public clearEventId()Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData$Builder;
    .locals 1

    .line 1491
    invoke-virtual {p0}, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData$Builder;->copyOnWrite()V

    .line 1492
    iget-object v0, p0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;

    invoke-static {v0}, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;->access$800(Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;)V

    return-object p0
.end method

.method public clearJwsRepresentation()Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData$Builder;
    .locals 1

    .line 1871
    invoke-virtual {p0}, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData$Builder;->copyOnWrite()V

    .line 1872
    iget-object v0, p0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;

    invoke-static {v0}, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;->access$2500(Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;)V

    return-object p0
.end method

.method public clearProduct()Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData$Builder;
    .locals 1

    .line 1594
    invoke-virtual {p0}, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData$Builder;->copyOnWrite()V

    .line 1595
    iget-object v0, p0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;

    invoke-static {v0}, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;->access$1300(Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;)V

    return-object p0
.end method

.method public clearProductId()Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData$Builder;
    .locals 1

    .line 1440
    invoke-virtual {p0}, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData$Builder;->copyOnWrite()V

    .line 1441
    iget-object v0, p0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;

    invoke-static {v0}, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;->access$500(Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;)V

    return-object p0
.end method

.method public clearReceipt()Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData$Builder;
    .locals 1

    .line 1744
    invoke-virtual {p0}, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData$Builder;->copyOnWrite()V

    .line 1745
    iget-object v0, p0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;

    invoke-static {v0}, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;->access$1900(Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;)V

    return-object p0
.end method

.method public clearSignature()Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData$Builder;
    .locals 1

    .line 1952
    invoke-virtual {p0}, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData$Builder;->copyOnWrite()V

    .line 1953
    iget-object v0, p0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;

    invoke-static {v0}, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;->access$2800(Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;)V

    return-object p0
.end method

.method public clearTimestamp()Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData$Builder;
    .locals 1

    .line 1402
    invoke-virtual {p0}, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData$Builder;->copyOnWrite()V

    .line 1403
    iget-object v0, p0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;

    invoke-static {v0}, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;->access$300(Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;)V

    return-object p0
.end method

.method public clearTransaction()Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData$Builder;
    .locals 1

    .line 1663
    invoke-virtual {p0}, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData$Builder;->copyOnWrite()V

    .line 1664
    iget-object v0, p0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;

    invoke-static {v0}, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;->access$1600(Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;)V

    return-object p0
.end method

.method public clearTransactionId()Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData$Builder;
    .locals 1

    .line 1529
    invoke-virtual {p0}, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData$Builder;->copyOnWrite()V

    .line 1530
    iget-object v0, p0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;

    invoke-static {v0}, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;->access$1000(Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;)V

    return-object p0
.end method

.method public clearTransactionState()Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData$Builder;
    .locals 1

    .line 1805
    invoke-virtual {p0}, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData$Builder;->copyOnWrite()V

    .line 1806
    iget-object v0, p0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;

    invoke-static {v0}, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;->access$2300(Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;)V

    return-object p0
.end method

.method public getEventId()Lcom/google/protobuf/ByteString;
    .locals 1

    .line 1466
    iget-object v0, p0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;

    invoke-virtual {v0}, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;->getEventId()Lcom/google/protobuf/ByteString;

    move-result-object v0

    return-object v0
.end method

.method public getJwsRepresentation()Ljava/lang/String;
    .locals 1

    .line 1832
    iget-object v0, p0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;

    invoke-virtual {v0}, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;->getJwsRepresentation()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getJwsRepresentationBytes()Lcom/google/protobuf/ByteString;
    .locals 1

    .line 1845
    iget-object v0, p0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;

    invoke-virtual {v0}, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;->getJwsRepresentationBytes()Lcom/google/protobuf/ByteString;

    move-result-object v0

    return-object v0
.end method

.method public getProduct()Ljava/lang/String;
    .locals 1

    .line 1555
    iget-object v0, p0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;

    invoke-virtual {v0}, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;->getProduct()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getProductBytes()Lcom/google/protobuf/ByteString;
    .locals 1

    .line 1568
    iget-object v0, p0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;

    invoke-virtual {v0}, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;->getProductBytes()Lcom/google/protobuf/ByteString;

    move-result-object v0

    return-object v0
.end method

.method public getProductId()Ljava/lang/String;
    .locals 1

    .line 1413
    iget-object v0, p0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;

    invoke-virtual {v0}, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;->getProductId()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getProductIdBytes()Lcom/google/protobuf/ByteString;
    .locals 1

    .line 1422
    iget-object v0, p0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;

    invoke-virtual {v0}, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;->getProductIdBytes()Lcom/google/protobuf/ByteString;

    move-result-object v0

    return-object v0
.end method

.method public getReceipt()Ljava/lang/String;
    .locals 1

    .line 1705
    iget-object v0, p0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;

    invoke-virtual {v0}, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;->getReceipt()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getReceiptBytes()Lcom/google/protobuf/ByteString;
    .locals 1

    .line 1718
    iget-object v0, p0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;

    invoke-virtual {v0}, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;->getReceiptBytes()Lcom/google/protobuf/ByteString;

    move-result-object v0

    return-object v0
.end method

.method public getSignature()Ljava/lang/String;
    .locals 1

    .line 1913
    iget-object v0, p0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;

    invoke-virtual {v0}, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;->getSignature()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getSignatureBytes()Lcom/google/protobuf/ByteString;
    .locals 1

    .line 1926
    iget-object v0, p0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;

    invoke-virtual {v0}, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;->getSignatureBytes()Lcom/google/protobuf/ByteString;

    move-result-object v0

    return-object v0
.end method

.method public getTimestamp()Lcom/google/protobuf/Timestamp;
    .locals 1

    .line 1372
    iget-object v0, p0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;

    invoke-virtual {v0}, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;->getTimestamp()Lcom/google/protobuf/Timestamp;

    move-result-object v0

    return-object v0
.end method

.method public getTransaction()Ljava/lang/String;
    .locals 1

    .line 1624
    iget-object v0, p0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;

    invoke-virtual {v0}, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;->getTransaction()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getTransactionBytes()Lcom/google/protobuf/ByteString;
    .locals 1

    .line 1637
    iget-object v0, p0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;

    invoke-virtual {v0}, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;->getTransactionBytes()Lcom/google/protobuf/ByteString;

    move-result-object v0

    return-object v0
.end method

.method public getTransactionId()Ljava/lang/String;
    .locals 1

    .line 1502
    iget-object v0, p0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;

    invoke-virtual {v0}, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;->getTransactionId()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getTransactionIdBytes()Lcom/google/protobuf/ByteString;
    .locals 1

    .line 1511
    iget-object v0, p0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;

    invoke-virtual {v0}, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;->getTransactionIdBytes()Lcom/google/protobuf/ByteString;

    move-result-object v0

    return-object v0
.end method

.method public getTransactionState()Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionState;
    .locals 1

    .line 1788
    iget-object v0, p0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;

    invoke-virtual {v0}, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;->getTransactionState()Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionState;

    move-result-object v0

    return-object v0
.end method

.method public getTransactionStateValue()I
    .locals 1

    .line 1770
    iget-object v0, p0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;

    invoke-virtual {v0}, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;->getTransactionStateValue()I

    move-result v0

    return v0
.end method

.method public hasJwsRepresentation()Z
    .locals 1

    .line 1820
    iget-object v0, p0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;

    invoke-virtual {v0}, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;->hasJwsRepresentation()Z

    move-result v0

    return v0
.end method

.method public hasReceipt()Z
    .locals 1

    .line 1693
    iget-object v0, p0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;

    invoke-virtual {v0}, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;->hasReceipt()Z

    move-result v0

    return v0
.end method

.method public hasSignature()Z
    .locals 1

    .line 1901
    iget-object v0, p0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;

    invoke-virtual {v0}, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;->hasSignature()Z

    move-result v0

    return v0
.end method

.method public hasTimestamp()Z
    .locals 1

    .line 1365
    iget-object v0, p0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;

    invoke-virtual {v0}, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;->hasTimestamp()Z

    move-result v0

    return v0
.end method

.method public mergeTimestamp(Lcom/google/protobuf/Timestamp;)Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData$Builder;
    .locals 1

    .line 1395
    invoke-virtual {p0}, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData$Builder;->copyOnWrite()V

    .line 1396
    iget-object v0, p0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;

    invoke-static {v0, p1}, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;->access$200(Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;Lcom/google/protobuf/Timestamp;)V

    return-object p0
.end method

.method public setEventId(Lcom/google/protobuf/ByteString;)Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData$Builder;
    .locals 1

    .line 1478
    invoke-virtual {p0}, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData$Builder;->copyOnWrite()V

    .line 1479
    iget-object v0, p0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;

    invoke-static {v0, p1}, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;->access$700(Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;Lcom/google/protobuf/ByteString;)V

    return-object p0
.end method

.method public setJwsRepresentation(Ljava/lang/String;)Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData$Builder;
    .locals 1

    .line 1858
    invoke-virtual {p0}, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData$Builder;->copyOnWrite()V

    .line 1859
    iget-object v0, p0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;

    invoke-static {v0, p1}, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;->access$2400(Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;Ljava/lang/String;)V

    return-object p0
.end method

.method public setJwsRepresentationBytes(Lcom/google/protobuf/ByteString;)Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData$Builder;
    .locals 1

    .line 1886
    invoke-virtual {p0}, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData$Builder;->copyOnWrite()V

    .line 1887
    iget-object v0, p0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;

    invoke-static {v0, p1}, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;->access$2600(Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;Lcom/google/protobuf/ByteString;)V

    return-object p0
.end method

.method public setProduct(Ljava/lang/String;)Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData$Builder;
    .locals 1

    .line 1581
    invoke-virtual {p0}, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData$Builder;->copyOnWrite()V

    .line 1582
    iget-object v0, p0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;

    invoke-static {v0, p1}, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;->access$1200(Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;Ljava/lang/String;)V

    return-object p0
.end method

.method public setProductBytes(Lcom/google/protobuf/ByteString;)Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData$Builder;
    .locals 1

    .line 1609
    invoke-virtual {p0}, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData$Builder;->copyOnWrite()V

    .line 1610
    iget-object v0, p0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;

    invoke-static {v0, p1}, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;->access$1400(Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;Lcom/google/protobuf/ByteString;)V

    return-object p0
.end method

.method public setProductId(Ljava/lang/String;)Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData$Builder;
    .locals 1

    .line 1431
    invoke-virtual {p0}, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData$Builder;->copyOnWrite()V

    .line 1432
    iget-object v0, p0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;

    invoke-static {v0, p1}, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;->access$400(Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;Ljava/lang/String;)V

    return-object p0
.end method

.method public setProductIdBytes(Lcom/google/protobuf/ByteString;)Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData$Builder;
    .locals 1

    .line 1451
    invoke-virtual {p0}, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData$Builder;->copyOnWrite()V

    .line 1452
    iget-object v0, p0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;

    invoke-static {v0, p1}, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;->access$600(Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;Lcom/google/protobuf/ByteString;)V

    return-object p0
.end method

.method public setReceipt(Ljava/lang/String;)Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData$Builder;
    .locals 1

    .line 1731
    invoke-virtual {p0}, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData$Builder;->copyOnWrite()V

    .line 1732
    iget-object v0, p0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;

    invoke-static {v0, p1}, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;->access$1800(Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;Ljava/lang/String;)V

    return-object p0
.end method

.method public setReceiptBytes(Lcom/google/protobuf/ByteString;)Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData$Builder;
    .locals 1

    .line 1759
    invoke-virtual {p0}, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData$Builder;->copyOnWrite()V

    .line 1760
    iget-object v0, p0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;

    invoke-static {v0, p1}, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;->access$2000(Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;Lcom/google/protobuf/ByteString;)V

    return-object p0
.end method

.method public setSignature(Ljava/lang/String;)Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData$Builder;
    .locals 1

    .line 1939
    invoke-virtual {p0}, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData$Builder;->copyOnWrite()V

    .line 1940
    iget-object v0, p0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;

    invoke-static {v0, p1}, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;->access$2700(Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;Ljava/lang/String;)V

    return-object p0
.end method

.method public setSignatureBytes(Lcom/google/protobuf/ByteString;)Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData$Builder;
    .locals 1

    .line 1967
    invoke-virtual {p0}, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData$Builder;->copyOnWrite()V

    .line 1968
    iget-object v0, p0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;

    invoke-static {v0, p1}, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;->access$2900(Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;Lcom/google/protobuf/ByteString;)V

    return-object p0
.end method

.method public setTimestamp(Lcom/google/protobuf/Timestamp$Builder;)Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData$Builder;
    .locals 1

    .line 1387
    invoke-virtual {p0}, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData$Builder;->copyOnWrite()V

    .line 1388
    iget-object v0, p0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;

    invoke-virtual {p1}, Lcom/google/protobuf/Timestamp$Builder;->build()Lcom/google/protobuf/GeneratedMessageLite;

    move-result-object p1

    check-cast p1, Lcom/google/protobuf/Timestamp;

    invoke-static {v0, p1}, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;->access$100(Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;Lcom/google/protobuf/Timestamp;)V

    return-object p0
.end method

.method public setTimestamp(Lcom/google/protobuf/Timestamp;)Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData$Builder;
    .locals 1

    .line 1378
    invoke-virtual {p0}, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData$Builder;->copyOnWrite()V

    .line 1379
    iget-object v0, p0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;

    invoke-static {v0, p1}, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;->access$100(Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;Lcom/google/protobuf/Timestamp;)V

    return-object p0
.end method

.method public setTransaction(Ljava/lang/String;)Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData$Builder;
    .locals 1

    .line 1650
    invoke-virtual {p0}, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData$Builder;->copyOnWrite()V

    .line 1651
    iget-object v0, p0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;

    invoke-static {v0, p1}, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;->access$1500(Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;Ljava/lang/String;)V

    return-object p0
.end method

.method public setTransactionBytes(Lcom/google/protobuf/ByteString;)Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData$Builder;
    .locals 1

    .line 1678
    invoke-virtual {p0}, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData$Builder;->copyOnWrite()V

    .line 1679
    iget-object v0, p0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;

    invoke-static {v0, p1}, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;->access$1700(Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;Lcom/google/protobuf/ByteString;)V

    return-object p0
.end method

.method public setTransactionId(Ljava/lang/String;)Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData$Builder;
    .locals 1

    .line 1520
    invoke-virtual {p0}, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData$Builder;->copyOnWrite()V

    .line 1521
    iget-object v0, p0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;

    invoke-static {v0, p1}, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;->access$900(Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;Ljava/lang/String;)V

    return-object p0
.end method

.method public setTransactionIdBytes(Lcom/google/protobuf/ByteString;)Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData$Builder;
    .locals 1

    .line 1540
    invoke-virtual {p0}, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData$Builder;->copyOnWrite()V

    .line 1541
    iget-object v0, p0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;

    invoke-static {v0, p1}, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;->access$1100(Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;Lcom/google/protobuf/ByteString;)V

    return-object p0
.end method

.method public setTransactionState(Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionState;)Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData$Builder;
    .locals 1

    .line 1796
    invoke-virtual {p0}, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData$Builder;->copyOnWrite()V

    .line 1797
    iget-object v0, p0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;

    invoke-static {v0, p1}, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;->access$2200(Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionState;)V

    return-object p0
.end method

.method public setTransactionStateValue(I)Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData$Builder;
    .locals 1

    .line 1778
    invoke-virtual {p0}, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData$Builder;->copyOnWrite()V

    .line 1779
    iget-object v0, p0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData$Builder;->instance:Lcom/google/protobuf/GeneratedMessageLite;

    check-cast v0, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;

    invoke-static {v0, p1}, Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;->access$2100(Lgatewayprotocol/v1/TransactionEventRequestOuterClass$TransactionData;I)V

    return-object p0
.end method

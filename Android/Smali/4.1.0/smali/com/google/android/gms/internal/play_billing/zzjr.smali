.class public final Lcom/google/android/gms/internal/play_billing/zzjr;
.super Lcom/google/android/gms/internal/play_billing/zzfu;
.source "com.android.billingclient:billing@@8.3.0"

# interfaces
.implements Lcom/google/android/gms/internal/play_billing/zzhc;


# static fields
.field private static final zzb:Lcom/google/android/gms/internal/play_billing/zzjr;


# instance fields
.field private zzd:I

.field private zze:Ljava/lang/String;

.field private zzf:Ljava/lang/String;

.field private zzg:Ljava/lang/String;

.field private zzh:I

.field private zzi:J

.field private zzj:J

.field private zzk:Z

.field private zzl:I

.field private zzm:I

.field private zzn:J

.field private zzo:Ljava/lang/String;

.field private zzp:Ljava/lang/String;

.field private zzq:Ljava/lang/String;

.field private zzr:Ljava/lang/String;

.field private zzs:I


# direct methods
.method static constructor <clinit>()V
    .locals 2

    .line 1
    new-instance v0, Lcom/google/android/gms/internal/play_billing/zzjr;

    invoke-direct {v0}, Lcom/google/android/gms/internal/play_billing/zzjr;-><init>()V

    sput-object v0, Lcom/google/android/gms/internal/play_billing/zzjr;->zzb:Lcom/google/android/gms/internal/play_billing/zzjr;

    const-class v1, Lcom/google/android/gms/internal/play_billing/zzjr;

    invoke-static {v1, v0}, Lcom/google/android/gms/internal/play_billing/zzfu;->zzB(Ljava/lang/Class;Lcom/google/android/gms/internal/play_billing/zzfu;)V

    return-void
.end method

.method private constructor <init>()V
    .locals 1

    .line 1
    invoke-direct {p0}, Lcom/google/android/gms/internal/play_billing/zzfu;-><init>()V

    const-string v0, ""

    iput-object v0, p0, Lcom/google/android/gms/internal/play_billing/zzjr;->zze:Ljava/lang/String;

    iput-object v0, p0, Lcom/google/android/gms/internal/play_billing/zzjr;->zzf:Ljava/lang/String;

    iput-object v0, p0, Lcom/google/android/gms/internal/play_billing/zzjr;->zzg:Ljava/lang/String;

    iput-object v0, p0, Lcom/google/android/gms/internal/play_billing/zzjr;->zzo:Ljava/lang/String;

    iput-object v0, p0, Lcom/google/android/gms/internal/play_billing/zzjr;->zzp:Ljava/lang/String;

    iput-object v0, p0, Lcom/google/android/gms/internal/play_billing/zzjr;->zzq:Ljava/lang/String;

    iput-object v0, p0, Lcom/google/android/gms/internal/play_billing/zzjr;->zzr:Ljava/lang/String;

    return-void
.end method

.method static synthetic zzG(Lcom/google/android/gms/internal/play_billing/zzjr;J)V
    .locals 0

    iget p1, p0, Lcom/google/android/gms/internal/play_billing/zzjr;->zzd:I

    or-int/lit16 p1, p1, 0x200

    iput p1, p0, Lcom/google/android/gms/internal/play_billing/zzjr;->zzd:I

    const-wide/32 p1, 0x3274082a

    iput-wide p1, p0, Lcom/google/android/gms/internal/play_billing/zzjr;->zzn:J

    return-void
.end method

.method static synthetic zzH(Lcom/google/android/gms/internal/play_billing/zzjr;Ljava/lang/String;)V
    .locals 1

    .line 1
    invoke-virtual {p1}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    iget v0, p0, Lcom/google/android/gms/internal/play_billing/zzjr;->zzd:I

    or-int/lit8 v0, v0, 0x4

    iput v0, p0, Lcom/google/android/gms/internal/play_billing/zzjr;->zzd:I

    iput-object p1, p0, Lcom/google/android/gms/internal/play_billing/zzjr;->zzg:Ljava/lang/String;

    return-void
.end method

.method static synthetic zzI(Lcom/google/android/gms/internal/play_billing/zzjr;Ljava/lang/String;)V
    .locals 1

    .line 1
    invoke-virtual {p1}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    iget v0, p0, Lcom/google/android/gms/internal/play_billing/zzjr;->zzd:I

    or-int/lit16 v0, v0, 0x400

    iput v0, p0, Lcom/google/android/gms/internal/play_billing/zzjr;->zzd:I

    iput-object p1, p0, Lcom/google/android/gms/internal/play_billing/zzjr;->zzo:Ljava/lang/String;

    return-void
.end method

.method static synthetic zzJ(Lcom/google/android/gms/internal/play_billing/zzjr;Ljava/lang/String;)V
    .locals 1

    .line 1
    invoke-virtual {p1}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    iget v0, p0, Lcom/google/android/gms/internal/play_billing/zzjr;->zzd:I

    or-int/lit16 v0, v0, 0x2000

    iput v0, p0, Lcom/google/android/gms/internal/play_billing/zzjr;->zzd:I

    iput-object p1, p0, Lcom/google/android/gms/internal/play_billing/zzjr;->zzr:Ljava/lang/String;

    return-void
.end method

.method static synthetic zzK(Lcom/google/android/gms/internal/play_billing/zzjr;Ljava/lang/String;)V
    .locals 1

    .line 1
    invoke-virtual {p1}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    iget v0, p0, Lcom/google/android/gms/internal/play_billing/zzjr;->zzd:I

    or-int/lit16 v0, v0, 0x1000

    iput v0, p0, Lcom/google/android/gms/internal/play_billing/zzjr;->zzd:I

    iput-object p1, p0, Lcom/google/android/gms/internal/play_billing/zzjr;->zzq:Ljava/lang/String;

    return-void
.end method

.method static synthetic zzL(Lcom/google/android/gms/internal/play_billing/zzjr;Ljava/lang/String;)V
    .locals 1

    .line 1
    invoke-virtual {p1}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    iget v0, p0, Lcom/google/android/gms/internal/play_billing/zzjr;->zzd:I

    or-int/lit16 v0, v0, 0x800

    iput v0, p0, Lcom/google/android/gms/internal/play_billing/zzjr;->zzd:I

    iput-object p1, p0, Lcom/google/android/gms/internal/play_billing/zzjr;->zzp:Ljava/lang/String;

    return-void
.end method

.method static synthetic zzM(Lcom/google/android/gms/internal/play_billing/zzjr;I)V
    .locals 1

    iget v0, p0, Lcom/google/android/gms/internal/play_billing/zzjr;->zzd:I

    or-int/lit16 v0, v0, 0x4000

    iput v0, p0, Lcom/google/android/gms/internal/play_billing/zzjr;->zzd:I

    iput p1, p0, Lcom/google/android/gms/internal/play_billing/zzjr;->zzs:I

    return-void
.end method

.method static synthetic zzN(Lcom/google/android/gms/internal/play_billing/zzjr;Z)V
    .locals 1

    iget v0, p0, Lcom/google/android/gms/internal/play_billing/zzjr;->zzd:I

    or-int/lit8 v0, v0, 0x40

    iput v0, p0, Lcom/google/android/gms/internal/play_billing/zzjr;->zzd:I

    iput-boolean p1, p0, Lcom/google/android/gms/internal/play_billing/zzjr;->zzk:Z

    return-void
.end method

.method static synthetic zzO(Lcom/google/android/gms/internal/play_billing/zzjr;Ljava/lang/String;)V
    .locals 1

    .line 1
    invoke-virtual {p1}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    iget v0, p0, Lcom/google/android/gms/internal/play_billing/zzjr;->zzd:I

    or-int/lit8 v0, v0, 0x1

    iput v0, p0, Lcom/google/android/gms/internal/play_billing/zzjr;->zzd:I

    iput-object p1, p0, Lcom/google/android/gms/internal/play_billing/zzjr;->zze:Ljava/lang/String;

    return-void
.end method

.method static synthetic zzP(Lcom/google/android/gms/internal/play_billing/zzjr;Ljava/lang/String;)V
    .locals 1

    iget v0, p0, Lcom/google/android/gms/internal/play_billing/zzjr;->zzd:I

    or-int/lit8 v0, v0, 0x2

    iput v0, p0, Lcom/google/android/gms/internal/play_billing/zzjr;->zzd:I

    iput-object p1, p0, Lcom/google/android/gms/internal/play_billing/zzjr;->zzf:Ljava/lang/String;

    return-void
.end method

.method public static zza()Lcom/google/android/gms/internal/play_billing/zzjp;
    .locals 1

    .line 1
    sget-object v0, Lcom/google/android/gms/internal/play_billing/zzjr;->zzb:Lcom/google/android/gms/internal/play_billing/zzjr;

    invoke-virtual {v0}, Lcom/google/android/gms/internal/play_billing/zzfu;->zzp()Lcom/google/android/gms/internal/play_billing/zzfq;

    move-result-object v0

    check-cast v0, Lcom/google/android/gms/internal/play_billing/zzjp;

    return-object v0
.end method

.method static bridge synthetic zzb()Lcom/google/android/gms/internal/play_billing/zzjr;
    .locals 1

    sget-object v0, Lcom/google/android/gms/internal/play_billing/zzjr;->zzb:Lcom/google/android/gms/internal/play_billing/zzjr;

    return-object v0
.end method

.method static synthetic zzc(Lcom/google/android/gms/internal/play_billing/zzjr;I)V
    .locals 1

    iget v0, p0, Lcom/google/android/gms/internal/play_billing/zzjr;->zzd:I

    or-int/lit16 v0, v0, 0x80

    iput v0, p0, Lcom/google/android/gms/internal/play_billing/zzjr;->zzd:I

    iput p1, p0, Lcom/google/android/gms/internal/play_billing/zzjr;->zzl:I

    return-void
.end method

.method static synthetic zze(Lcom/google/android/gms/internal/play_billing/zzjr;I)V
    .locals 1

    iget v0, p0, Lcom/google/android/gms/internal/play_billing/zzjr;->zzd:I

    or-int/lit16 v0, v0, 0x100

    iput v0, p0, Lcom/google/android/gms/internal/play_billing/zzjr;->zzd:I

    iput p1, p0, Lcom/google/android/gms/internal/play_billing/zzjr;->zzm:I

    return-void
.end method

.method static synthetic zzf(Lcom/google/android/gms/internal/play_billing/zzjr;I)V
    .locals 1

    iget v0, p0, Lcom/google/android/gms/internal/play_billing/zzjr;->zzd:I

    or-int/lit8 v0, v0, 0x8

    iput v0, p0, Lcom/google/android/gms/internal/play_billing/zzjr;->zzd:I

    iput p1, p0, Lcom/google/android/gms/internal/play_billing/zzjr;->zzh:I

    return-void
.end method

.method static synthetic zzg(Lcom/google/android/gms/internal/play_billing/zzjr;J)V
    .locals 1

    iget v0, p0, Lcom/google/android/gms/internal/play_billing/zzjr;->zzd:I

    or-int/lit8 v0, v0, 0x10

    iput v0, p0, Lcom/google/android/gms/internal/play_billing/zzjr;->zzd:I

    iput-wide p1, p0, Lcom/google/android/gms/internal/play_billing/zzjr;->zzi:J

    return-void
.end method

.method static synthetic zzh(Lcom/google/android/gms/internal/play_billing/zzjr;J)V
    .locals 1

    iget v0, p0, Lcom/google/android/gms/internal/play_billing/zzjr;->zzd:I

    or-int/lit8 v0, v0, 0x20

    iput v0, p0, Lcom/google/android/gms/internal/play_billing/zzjr;->zzd:I

    iput-wide p1, p0, Lcom/google/android/gms/internal/play_billing/zzjr;->zzj:J

    return-void
.end method


# virtual methods
.method protected final zzd(ILjava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;
    .locals 5

    add-int/lit8 p1, p1, -0x1

    const/4 p2, 0x1

    if-eqz p1, :cond_4

    const/4 p3, 0x5

    const/4 v0, 0x4

    const/4 v1, 0x3

    const/4 v2, 0x2

    if-eq p1, v2, :cond_3

    if-eq p1, v1, :cond_2

    const/4 p2, 0x0

    if-eq p1, v0, :cond_1

    if-ne p1, p3, :cond_0

    .line 1
    sget-object p1, Lcom/google/android/gms/internal/play_billing/zzjr;->zzb:Lcom/google/android/gms/internal/play_billing/zzjr;

    return-object p1

    .line 4
    :cond_0
    throw p2

    .line 2
    :cond_1
    new-instance p1, Lcom/google/android/gms/internal/play_billing/zzjp;

    .line 3
    invoke-direct {p1, p2}, Lcom/google/android/gms/internal/play_billing/zzjp;-><init>(Lcom/google/android/gms/internal/play_billing/zzjq;)V

    return-object p1

    :cond_2
    new-instance p1, Lcom/google/android/gms/internal/play_billing/zzjr;

    invoke-direct {p1}, Lcom/google/android/gms/internal/play_billing/zzjr;-><init>()V

    return-object p1

    :cond_3
    const/16 p1, 0x10

    .line 1
    new-array p1, p1, [Ljava/lang/Object;

    const-string v3, "zzd"

    const/4 v4, 0x0

    aput-object v3, p1, v4

    const-string v3, "zze"

    aput-object v3, p1, p2

    const-string p2, "zzg"

    aput-object p2, p1, v2

    const-string p2, "zzh"

    aput-object p2, p1, v1

    const-string p2, "zzi"

    aput-object p2, p1, v0

    const-string p2, "zzf"

    aput-object p2, p1, p3

    const-string p2, "zzj"

    const/4 p3, 0x6

    aput-object p2, p1, p3

    const-string p2, "zzk"

    const/4 p3, 0x7

    aput-object p2, p1, p3

    const-string p2, "zzl"

    const/16 p3, 0x8

    aput-object p2, p1, p3

    const-string p2, "zzm"

    const/16 p3, 0x9

    aput-object p2, p1, p3

    const-string p2, "zzn"

    const/16 p3, 0xa

    aput-object p2, p1, p3

    const-string p2, "zzo"

    const/16 p3, 0xb

    aput-object p2, p1, p3

    const-string p2, "zzp"

    const/16 p3, 0xc

    aput-object p2, p1, p3

    const-string p2, "zzq"

    const/16 p3, 0xd

    aput-object p2, p1, p3

    const-string p2, "zzr"

    const/16 p3, 0xe

    aput-object p2, p1, p3

    const-string p2, "zzs"

    const/16 p3, 0xf

    aput-object p2, p1, p3

    sget-object p2, Lcom/google/android/gms/internal/play_billing/zzjr;->zzb:Lcom/google/android/gms/internal/play_billing/zzjr;

    const-string p3, "\u0004\u000f\u0000\u0001\u0001\u000f\u000f\u0000\u0000\u0000\u0001\u1008\u0000\u0002\u1008\u0002\u0003\u1004\u0003\u0004\u1002\u0004\u0005\u1008\u0001\u0006\u1002\u0005\u0007\u1007\u0006\u0008\u1004\u0007\t\u1004\u0008\n\u1002\t\u000b\u1008\n\u000c\u1008\u000b\r\u1008\u000c\u000e\u1008\r\u000f\u1004\u000e"

    .line 2
    invoke-static {p2, p3, p1}, Lcom/google/android/gms/internal/play_billing/zzjr;->zzy(Lcom/google/android/gms/internal/play_billing/zzhb;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    return-object p1

    .line 1
    :cond_4
    invoke-static {p2}, Ljava/lang/Byte;->valueOf(B)Ljava/lang/Byte;

    move-result-object p1

    return-object p1
.end method

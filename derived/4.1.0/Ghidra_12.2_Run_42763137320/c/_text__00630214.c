/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00630214; name: FUN_.text__00630214
 */


void FUN__text__00630214(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  void *__src;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong __n;
  undefined1 local_2f8;
  undefined1 local_2f7;
  undefined1 local_2f6;
  undefined1 local_2f5;
  undefined1 local_2f4;
  undefined1 local_2f3;
  undefined1 local_2f2;
  undefined1 local_2f1;
  undefined1 local_2f0;
  undefined1 local_2ef;
  undefined1 local_2ee;
  undefined1 local_2ed;
  undefined1 local_2ec;
  undefined1 local_2eb;
  undefined1 local_2ea;
  undefined1 local_2e9;
  undefined1 local_2e8;
  undefined1 local_2e7;
  undefined1 local_2e6;
  undefined1 local_2e5;
  uint local_2e4;
  undefined1 local_2e0;
  undefined1 local_2df;
  undefined1 local_2de;
  undefined1 local_2dd;
  undefined1 local_2dc;
  undefined1 local_2db;
  undefined1 local_2da;
  undefined1 local_2d9;
  undefined1 auStack_2d6 [662];
  undefined1 auStack_40 [16];
  
  FUN__text__0060e784(auStack_40,param_1);
  lVar2 = FUN__text__0060e7e4(auStack_40);
  __src = (void *)FUN__text__0060e7ec(auStack_40);
  memset(auStack_2d6,0,0x296);
  __n = (ulong)*(ushort *)(lVar2 + 0xe);
  if ((*(ushort *)(lVar2 + 0xe) & 0xf) == 0) {
    memcpy(auStack_2d6,__src,__n);
    uVar3 = *(ulong *)(lVar2 + 2);
    uVar5 = uVar3 ^ 0x6b7b5966193db88b;
    uVar4 = uVar3 & 0x937ec53bf8856e87;
    local_2d9 = (undefined1)uVar4;
    uVar1 = ((uint)uVar5 & 0xff00ff00) >> 8 | ((uint)uVar5 & 0xff00ff) << 8;
    local_2e4 = uVar1 >> 0x10 | uVar1 << 0x10;
    local_2e5 = (undefined1)(uVar5 >> 0x20);
    local_2e6 = (undefined1)(uVar5 >> 0x28);
    local_2e7 = (undefined1)(uVar5 >> 0x30);
    local_2e8 = (undefined1)(uVar5 >> 0x38);
    local_2da = (undefined1)(uVar4 >> 8);
    local_2db = (undefined1)(uVar4 >> 0x10);
    local_2dc = (undefined1)(uVar4 >> 0x18);
    local_2dd = (undefined1)(uVar4 >> 0x20);
    local_2df = (undefined1)(uVar4 >> 0x30);
    local_2e0 = (undefined1)(uVar4 >> 0x38);
    local_2de = (undefined1)(uVar4 >> 0x28);
    uVar4 = uVar3 ^ 0x5f4ed4e84975d976;
    local_2f1 = (undefined1)uVar4;
    uVar3 = uVar3 | 0xe3cda917ea9e489c;
    local_2e9 = (undefined1)uVar3;
    local_2f2 = (undefined1)(uVar4 >> 8);
    local_2f3 = (undefined1)(uVar4 >> 0x10);
    local_2f4 = (undefined1)(uVar4 >> 0x18);
    local_2f5 = (undefined1)(uVar4 >> 0x20);
    local_2f6 = (undefined1)(uVar4 >> 0x28);
    local_2f7 = (undefined1)(uVar4 >> 0x30);
    local_2f8 = (undefined1)(uVar4 >> 0x38);
    local_2ea = (undefined1)(uVar3 >> 8);
    local_2eb = (undefined1)(uVar3 >> 0x10);
    local_2ec = (undefined1)(uVar3 >> 0x18);
    local_2ed = (undefined1)(uVar3 >> 0x20);
    local_2ee = (undefined1)(uVar3 >> 0x28);
    local_2ef = (undefined1)(uVar3 >> 0x30);
    local_2f0 = (undefined1)(uVar3 >> 0x38);
    uVar3 = FUN__text__005971f0(auStack_2d6,__n,&local_2e8,&local_2f8);
    if (uVar3 == __n) {
      memcpy(__src,auStack_2d6,__n);
      FUN__text__0060e79c(auStack_40);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl();
}



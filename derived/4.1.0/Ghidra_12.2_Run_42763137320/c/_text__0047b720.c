/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0047b720; name: FUN_.text__0047b720
 */


undefined8 FUN__text__0047b720(long param_1,void *param_2,uint param_3,uint *param_4,uint param_5)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  void *__dest;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN__text__00400fc0(2);
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN__text__00400fc0(2);
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  uVar3 = 0x1f;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) & 0x80000000;
  if ((((param_4 != (uint *)0x0) && (param_2 != (void *)0x0)) && (param_3 != 0)) && (param_5 != 0))
  {
    __dest = (void *)FUN__text__00400f80(2,(ulong)(param_3 << 4));
    *(void **)(param_1 + 0x18) = __dest;
    if (__dest == (void *)0x0) {
      uVar3 = 0x34;
      uVar5 = *(uint *)(param_1 + 0x30);
      goto joined_r0x0047b884;
    }
    memcpy(__dest,param_2,(ulong)(param_3 << 4));
    *(uint *)(param_1 + 0x20) = param_3;
    lVar4 = FUN__text__00400f80(2,param_5 * 0x18);
    *(long *)(param_1 + 0x28) = lVar4;
    if (lVar4 != 0) {
      lVar4 = 0;
      *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) & 0x80000000 | param_5 & 0x7fffffff;
      do {
        uVar5 = *param_4;
        *(uint *)(*(long *)(param_1 + 0x28) + lVar4 + 8) = param_4[1];
        if (param_3 <= *param_4) {
          uVar3 = 2;
          uVar5 = *(uint *)(param_1 + 0x30);
          goto joined_r0x0047b884;
        }
        param_4 = param_4 + 2;
        *(ulong *)(*(long *)(param_1 + 0x28) + lVar4) =
             *(long *)(param_1 + 0x18) + (ulong)uVar5 * 0x10;
        *(undefined4 *)(*(long *)(param_1 + 0x28) + lVar4 + 0xc) = 0;
        *(undefined4 *)(*(long *)(param_1 + 0x28) + lVar4 + 0x10) = 0;
        lVar1 = *(long *)(param_1 + 0x28) + lVar4;
        lVar4 = lVar4 + 0x18;
        *(undefined4 *)(lVar1 + 0x14) = 0;
      } while ((ulong)param_5 * 0x18 != lVar4);
      uVar3 = 1;
      uVar5 = *(uint *)(param_1 + 0x30);
      goto joined_r0x0047b884;
    }
    uVar3 = 0x34;
  }
  uVar5 = *(uint *)(param_1 + 0x30);
joined_r0x0047b884:
  if ((uVar5 & 0x7fffffff) != 0) {
    lVar4 = 0;
    uVar6 = 0;
    do {
      iVar2 = *(int *)(*(long *)(param_1 + 0x28) + lVar4 + 8);
      if (0 < iVar2) {
        *(undefined4 *)
         (*(long *)(*(long *)(param_1 + 0x28) + lVar4) + (ulong)(iVar2 - 1) * 0x10 + 0xc) =
             *(undefined4 *)(param_1 + 0x14);
        uVar5 = *(uint *)(param_1 + 0x30);
      }
      uVar6 = uVar6 + 1;
      lVar4 = lVar4 + 0x18;
    } while (uVar6 < (uVar5 & 0x7fffffff));
  }
  return uVar3;
}



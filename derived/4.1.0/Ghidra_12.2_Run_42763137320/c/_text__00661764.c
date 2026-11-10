/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00661764; name: FUN_.text__00661764
 */


undefined8 FUN__text__00661764(long param_1,long param_2,size_t param_3)

{
  undefined8 uVar1;
  void *__dest;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  uVar4 = *(long *)(param_2 + 0x60) + param_3;
  if (uVar4 < 0x19001) {
    uVar3 = *(ulong *)(param_1 + 0x1128);
    if (uVar4 < uVar3) {
      __dest = *(void **)(param_2 + 0x58);
    }
    else {
      lVar5 = *(long *)(param_1 + 0x1120);
      lVar6 = *(long *)(param_2 + 0x58);
      uVar4 = uVar4 * 3 >> 1;
      if (uVar4 <= uVar3 * 2) {
        uVar4 = uVar3 << 1;
      }
      lVar2 = FUN__text__006783f4(lVar5,uVar4);
      if (lVar2 == 0) {
        FUN__text__0066713c(param_1,0x71a494);
        goto LAB__text__006617a8;
      }
      *(long *)(param_1 + 0x1120) = lVar2;
      __dest = (void *)(lVar2 + (lVar6 - lVar5));
      *(ulong *)(param_1 + 0x1128) = uVar4;
      *(void **)(param_2 + 0x58) = __dest;
    }
    memcpy(__dest,*(void **)(param_2 + 0x70),param_3);
    lVar5 = *(long *)(param_2 + 0x58);
    uVar1 = 0;
    *(size_t *)(param_2 + 0x58) = lVar5 + param_3;
    *(size_t *)(param_2 + 0x60) = *(long *)(param_2 + 0x60) + param_3;
    *(undefined1 *)(lVar5 + param_3) = 0;
  }
  else {
    FUN__text__0066713c(param_1,0x70decb,uVar4,0x19000);
LAB__text__006617a8:
    uVar1 = 0x1b;
  }
  return uVar1;
}



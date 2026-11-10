/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00468fa0; name: FUN_.text__00468fa0
 */


undefined8
FUN__text__00468fa0(long param_1,undefined4 param_2,uint param_3,undefined4 param_4,ulong param_5,
                   undefined4 param_6,undefined4 param_7,undefined8 param_8,undefined4 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (*(long *)(param_1 + 0x58) == 0) {
    puVar1 = (undefined8 *)FUN__text__00400f80(2,0x28);
    if (puVar1 == (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x58) = 0;
      return 0x34;
    }
    puVar1[3] = 0;
    puVar1[4] = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    *(undefined8 **)(param_1 + 0x58) = puVar1;
  }
  uVar2 = FUN__text__004324b0(param_1 + 0x48,0,*(undefined4 *)(param_1 + 0x20),param_2,param_3,
                              param_4,param_5 & 0xffffffff,param_6,param_7,param_8,param_9,0);
  if ((int)uVar2 == 1) {
    puVar3 = *(ulong **)(param_1 + 0x58);
    if (puVar3 == (ulong *)0x0) {
      puVar3 = (ulong *)FUN__text__00400f80(2,0x28);
      if (puVar3 == (ulong *)0x0) {
        *(undefined8 *)(param_1 + 0x58) = 0;
        return 1;
      }
      puVar3[3] = 0;
      puVar3[4] = 0;
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      *(ulong **)(param_1 + 0x58) = puVar3;
    }
    uVar4 = *puVar3;
    uVar5 = 1L << (param_5 & 0x3f);
    *puVar3 = uVar4 | uVar5;
    if (((uVar4 & uVar5) == 0) && (*(long *)(param_1 + 0x70) != 0)) {
      FUN__text__0046c6a0();
    }
    uVar2 = 1;
    if ((param_3 & 0xff) == 4) {
      *(undefined1 *)(*(long *)(param_1 + 0x58) + 0x20) = 1;
    }
  }
  return uVar2;
}



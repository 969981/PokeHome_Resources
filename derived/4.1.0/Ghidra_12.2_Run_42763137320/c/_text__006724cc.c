/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006724cc; name: FUN_.text__006724cc
 */


undefined8 FUN__text__006724cc(long param_1,long param_2)

{
  ushort uVar1;
  ushort uVar2;
  undefined4 uVar3;
  undefined1 auVar4 [16];
  
  if (param_2 == 0) {
    uVar2 = *(ushort *)(param_1 + 0x15a4);
  }
  else {
    *(uint *)(param_2 + 0x3fc) = *(uint *)(param_2 + 0x3fc) & 0xfffff7ff;
    uVar2 = *(ushort *)(param_1 + 0x15a4);
    if ((uVar2 >> 7 & 1) != 0) {
      uVar1 = uVar2 & 0xff7f;
      if ((*(byte *)(*(long *)(param_2 + 0x420) + 0x85) & 0x10) != 0) {
        uVar1 = uVar2;
      }
      uVar2 = uVar1;
    }
  }
  *(ushort *)(param_1 + 0x15a4) = uVar2 & 0xf6ff;
  if ((*(byte *)(param_1 + 0xf43) & 1) == 0) {
    if (*(int *)(param_1 + 0xa38) != 6) goto LAB__text__00672540;
    uVar3 = 1;
  }
  else {
    uVar3 = 6;
  }
  *(undefined4 *)(param_1 + 0xa38) = uVar3;
LAB__text__00672540:
  auVar4 = FUN__text__0066c6a8();
  *(undefined1 (*) [16])(param_1 + 0x120) = auVar4;
  *(undefined8 *)(param_1 + 0x1b8) = *(undefined8 *)(param_1 + 0x1130);
  *(undefined1 (*) [16])(param_1 + 0x130) = auVar4;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(ushort *)(param_1 + 0x660) = *(ushort *)(param_1 + 0x660) & 0xfff7 | 1;
  *(undefined8 *)(param_1 + 0x148) = *(undefined8 *)(param_1 + 0x1120);
  FUN__text__0066bdc4(param_1);
  FUN__text__0066667c(param_1,0);
  FUN__text__00666674(param_1,0);
  return 0;
}



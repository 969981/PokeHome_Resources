/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00670d60; name: FUN_.text__00670d60
 */


undefined8 FUN__text__00670d60(long *param_1,undefined1 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auVar4 [16];
  
  lVar3 = *param_1;
  FUN__text__006663e0(lVar3,3);
  if ((*(byte *)(param_1[0x84] + 0x84) >> 4 & 1) == 0) {
    *param_2 = 0;
    *(uint *)((long)param_1 + 0x3fc) = *(uint *)((long)param_1 + 0x3fc) & 0xff7fffff;
    if (*(long *)(lVar3 + 0xdb0) != 0) {
      FUN__text__006783e4(param_1[0x8c]);
      param_1[0x8c] = 0;
      lVar1 = FUN__text__00659a28(0x714ae2,*(undefined8 *)(lVar3 + 0xdb0));
      param_1[0x8c] = lVar1;
      if (lVar1 == 0) {
        return 0x1b;
      }
    }
    *(undefined8 *)(lVar3 + 0x110) = 0;
    *(undefined8 *)(lVar3 + 0x14e8) = 0;
    auVar4 = FUN__text__0066c6a8();
    *(undefined1 (*) [16])(param_1 + 0x47) = auVar4;
    if ((int)param_1[0x4b] == -1) {
      *(undefined1 *)((long)param_1 + 0x3fa) = 0;
      uVar2 = FUN__text__006503b4(param_1,param_1[0xd]);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
    }
    else {
      FUN__text__006663e0(lVar3,4);
      FUN__text__006663e0(lVar3,5);
      *(undefined1 *)((long)param_1 + 0x3fa) = 1;
      *param_2 = 1;
      FUN__text__0064fb7c(param_1,(int)param_1[0x4b]);
      FUN__text__0067091c(param_1);
    }
    auVar4 = FUN__text__0066c6a8();
    *(undefined1 (*) [16])(param_1 + 0x47) = auVar4;
  }
  else {
    *param_2 = 1;
  }
  return 0;
}



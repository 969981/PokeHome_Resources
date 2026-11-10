/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006673c0; name: FUN_.text__006673c0
 */


long FUN__text__006673c0(long *param_1,int param_2,undefined8 param_3,undefined8 param_4,
                        undefined4 *param_5)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  long lVar5;
  undefined1 auStack_c0 [128];
  
  lVar2 = nnsocketRecv(*(undefined4 *)((long)param_1 + (long)param_2 * 4 + 600),param_3,param_4,0);
  *param_5 = 0;
  if (lVar2 == -1) {
    iVar1 = nnsocketGetLastErrno();
    if ((iVar1 == 0xb) || (iVar1 == 4)) {
      uVar4 = 0x51;
    }
    else {
      memset(auStack_c0,0,0x80);
      lVar5 = *param_1;
      uVar3 = FUN__text__0066c474(iVar1,auStack_c0,0x80);
      FUN__text__0066713c(lVar5,0x71e019,uVar3);
      *(int *)(*param_1 + 0x11c0) = iVar1;
      uVar4 = 0x38;
    }
    *param_5 = uVar4;
  }
  return lVar2;
}



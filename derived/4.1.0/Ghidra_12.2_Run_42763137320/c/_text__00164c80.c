/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00164c80; name: FUN_.text__00164c80
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00164c80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined2 uVar2;
  short sVar3;
  uint uVar4;
  int iVar5;
  short *psVar6;
  
  uVar1 = FUN__text__0015a4d0(param_3);
  uVar2 = FUN__text__005f37f0(param_3,0);
  sVar3 = FUN__text__005f37f0(param_3,1);
  uVar4 = FUN__text__001650f4(param_1,uVar2);
  iVar5 = FUN__text__0016a530();
  if (iVar5 - 2U < 9) {
                    /* WARNING: Could not emulate address calculation at 0x00164cfc */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK__text__00164d14 + (ulong)*(byte *)((ulong)(iVar5 - 2U) + 0x7252a7) * 4))
              (uVar4 >> 2 & 7);
    return;
  }
  if ((sVar3 != 0) || (((uVar4 & 0xffff) >> 9 & 1) == 0)) {
    psVar6 = (short *)FUN__text__001581e8(*_DAT_0089f538,uVar1,0);
    sVar3 = *psVar6;
    while (sVar3 != 0) {
      psVar6 = psVar6 + 1;
      FUN__text__005f335c(param_2);
      sVar3 = *psVar6;
    }
  }
  FUN__text__005f3780(param_3);
  return;
}



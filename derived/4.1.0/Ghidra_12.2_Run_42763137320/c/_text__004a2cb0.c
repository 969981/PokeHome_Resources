/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004a2cb0; name: FUN_.text__004a2cb0
 */


undefined8 FUN__text__004a2cb0(long *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined1 auStack_4c [12];
  
  nn::os::LockMutex((MutexType *)&DAT_00aea968);
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar7 = *(undefined8 *)(param_2 + 0xe);
  if (param_2[0xc] != 2) {
    uVar7 = 0;
  }
  lVar3 = FUN__text__004ada80(param_1 + 0x15,CONCAT44(uVar1,uVar2),uVar7);
  if (lVar3 == 0) {
    auVar9 = nn::os::UnlockMutex((MutexType *)&DAT_00aea968);
    if (*(long *)(param_2 + 4) == 0) {
      auVar9 = FUN__text__003fb610(auStack_4c,0xc,0x71adfa,param_2[2]);
    }
    if (*param_2 < 0xb) {
                    /* WARNING: Could not emulate address calculation at 0x004a2d9c */
                    /* WARNING: Treating indirect jump as call */
      uVar7 = (*(code *)(&UNK__text__004a2da8 + (ulong)*(byte *)((ulong)*param_2 + 0x73d909) * 4))
                        (auVar9._0_8_,auVar9._8_8_,0);
      return uVar7;
    }
    uVar1 = param_2[0xc];
    uVar7 = *(undefined8 *)(param_2 + 0xe);
    uVar4 = *(undefined8 *)(param_2 + 8);
    uVar6 = *(undefined8 *)(param_2 + 10);
    uVar8 = 0x36;
    uVar5 = 0x36;
    *(undefined4 *)((long)param_1 + 0xf4) = 0x36;
    if (uVar1 != 2) {
      uVar7 = 0;
    }
  }
  else {
    if ((*(byte *)(lVar3 + 0x68) & 1) != 0) {
      FUN__text__004adb30(param_1 + 0x15,CONCAT44(uVar1,uVar2),uVar7);
      nn::os::UnlockMutex((MutexType *)&DAT_00aea968);
                    /* WARNING: Could not recover jumptable at 0x004a2df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar7 = (**(code **)(*param_1 + 0x50))
                        (param_1,lVar3,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 10));
      return uVar7;
    }
    nn::os::UnlockMutex((MutexType *)&DAT_00aea968);
    if (*param_2 < 0xb) {
                    /* WARNING: Could not emulate address calculation at 0x004a2d40 */
                    /* WARNING: Treating indirect jump as call */
      uVar7 = (*(code *)(&UNK__text__004a2d4c + (ulong)*(byte *)((ulong)*param_2 + 0x73d8fe) * 4))()
      ;
      return uVar7;
    }
    uVar5 = 2;
    uVar7 = *(undefined8 *)(param_2 + 0xe);
    if (param_2[0xc] != 2) {
      uVar7 = 0;
    }
    uVar4 = *(undefined8 *)(param_2 + 8);
    uVar6 = *(undefined8 *)(param_2 + 10);
    uVar8 = 2;
    *(undefined4 *)((long)param_1 + 0xf4) = 2;
  }
  FUN__text__004adfa4(param_1 + 0x1f,uVar4,0,uVar7,uVar5,uVar6);
  return uVar8;
}



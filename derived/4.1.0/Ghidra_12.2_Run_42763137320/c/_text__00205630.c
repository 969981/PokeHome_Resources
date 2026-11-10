/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00205630; name: FUN_.text__00205630
 */


void FUN__text__00205630(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  iVar1 = FUN__text__00306628(*param_3,7);
  if (iVar1 == 0x7542) {
    uVar2 = 0xd;
    lVar3 = *param_1;
  }
  else {
    FUN__text__003069b0(*param_3);
    uVar2 = FUN__text__00205600();
    lVar3 = *param_1;
  }
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  lVar4 = *(long *)(DAT_008e20a0 + 0x60);
  if (lVar4 == 0) {
    FUN__text__001654dc(lVar3,0,0,uVar2,0);
  }
  else {
    plVar5 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    FUN__text__001654dc(lVar3,0,lVar4,uVar2,0);
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  if (lVar3 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00205700. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  return;
}



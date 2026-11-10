/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001ab1bc; name: FUN_.text__001ab1bc
 */


void FUN__text__001ab1bc(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                        undefined4 param_5,undefined8 *param_6)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  
  lVar2 = *(long *)(*(long *)(param_1 + 8) + 0x1c0);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  uVar3 = *param_3;
  lVar4 = *(long *)(lVar2 + 0x2e8);
  if (lVar4 == 0) {
    FUN__text__005f2d98(uVar3,param_4,0);
    lVar4 = *(long *)(lVar2 + 0x2e0);
  }
  else {
    plVar5 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    FUN__text__005f2d98(uVar3,param_4,lVar4);
    (**(code **)(*plVar5 + 0x18))(plVar5);
    lVar4 = *(long *)(lVar2 + 0x2e0);
  }
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  uVar1 = FUN__text__00306638(*param_6);
  FUN__text__00165e88(lVar4,param_5,uVar1);
  (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  FUN__text__003c8c20(lVar2,param_2,0xb);
                    /* WARNING: Could not recover jumptable at 0x001ab2b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  return;
}



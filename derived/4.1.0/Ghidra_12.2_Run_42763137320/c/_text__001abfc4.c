/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001abfc4; name: FUN_.text__001abfc4
 */


void FUN__text__001abfc4(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                        undefined4 param_5,undefined4 param_6)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = *(long *)(*(long *)(param_1 + 8) + 0x1c0);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  uVar2 = *param_3;
  lVar3 = *(long *)(lVar1 + 0x2e8);
  if (lVar3 == 0) {
    FUN__text__005f2d98(uVar2,param_4,0);
    lVar3 = *(long *)(lVar1 + 0x2e0);
  }
  else {
    plVar4 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    FUN__text__005f2d98(uVar2,param_4,lVar3);
    (**(code **)(*plVar4 + 0x18))(plVar4);
    lVar3 = *(long *)(lVar1 + 0x2e0);
  }
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  FUN__text__00166508(lVar3,param_5,param_6,3,1,1);
  (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  FUN__text__003c8c20(lVar1,param_2,0xb);
                    /* WARNING: Could not recover jumptable at 0x001ac0c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
  return;
}



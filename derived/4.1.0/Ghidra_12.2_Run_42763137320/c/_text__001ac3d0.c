/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001ac3d0; name: FUN_.text__001ac3d0
 */


void FUN__text__001ac3d0(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                        undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined8 *param_8
                        ,undefined8 param_9,undefined4 param_10,undefined4 param_11)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  
  lVar1 = *(long *)(*(long *)(param_1 + 8) + 0x1c0);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  uVar2 = *param_3;
  lVar4 = *(long *)(lVar1 + 0x2e8);
  if (lVar4 == 0) {
    FUN__text__005f2d98(uVar2,param_4,0);
    lVar4 = *(long *)(lVar1 + 0x2e0);
  }
  else {
    plVar3 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN__text__005f2d98(uVar2,param_4,lVar4);
    (**(code **)(*plVar3 + 0x18))(plVar3);
    lVar4 = *(long *)(lVar1 + 0x2e0);
  }
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  FUN__text__00165578(lVar4,param_5,*param_8,param_9,0);
  (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  lVar4 = *(long *)(lVar1 + 0x2e0);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  FUN__text__00166508(lVar4,param_6,param_10,5,0,1);
  (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  lVar4 = *(long *)(lVar1 + 0x2e0);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  FUN__text__00166508(lVar4,param_7,param_11,5,0,1);
  (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  FUN__text__003c8c20(lVar1,param_2,0xb);
                    /* WARNING: Could not recover jumptable at 0x001ac574. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001ab8f4; name: FUN_.text__001ab8f4
 */


void FUN__text__001ab8f4(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                        undefined4 param_5,long param_6)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  
  lVar2 = *(long *)(*(long *)(param_1 + 8) + 0x1c0);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  uVar4 = *param_3;
  lVar5 = *(long *)(lVar2 + 0x2e8);
  if (lVar5 == 0) {
    FUN__text__005f2d98(uVar4,param_4,0);
    uVar1 = FUN__text__0016ad94(*(undefined1 *)(param_6 + 0x10),0);
    lVar5 = *(long *)(lVar2 + 0x2e0);
  }
  else {
    plVar6 = (long *)(lVar5 + 0x48);
    (**(code **)(*plVar6 + 0x10))(plVar6);
    FUN__text__005f2d98(uVar4,param_4,lVar5);
    (**(code **)(*plVar6 + 0x18))(plVar6);
    uVar1 = FUN__text__0016ad94(*(undefined1 *)(param_6 + 0x10),0);
    lVar5 = *(long *)(lVar2 + 0x2e0);
  }
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  lVar3 = *(long *)(param_6 + 8);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  FUN__text__00165694(lVar5,param_5,lVar3,uVar1,0,0);
  (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  FUN__text__003c8c20(lVar2,param_2,0xb);
                    /* WARNING: Could not recover jumptable at 0x001aba28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  return;
}



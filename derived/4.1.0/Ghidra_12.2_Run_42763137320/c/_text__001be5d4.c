/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001be5d4; name: FUN_.text__001be5d4
 */


void FUN__text__001be5d4(long param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  
  lVar3 = *(long *)(*(long *)(param_1 + 8) + 0x2d0);
  if (lVar3 == 0) {
    lVar4 = 0;
  }
  else {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    lVar4 = *(long *)(*(long *)(param_1 + 8) + 0x2d0);
  }
  plVar5 = (long *)(lVar4 + 0x48);
  (**(code **)(*plVar5 + 0x10))(plVar5);
  lVar6 = *(long *)(*(long *)(param_1 + 8) + 0x2d0);
  lVar4 = *(long *)(*(long *)(param_1 + 0x38) + 0xe8);
  uVar1 = *(uint *)(lVar4 + 0x40);
  uVar2 = *(uint *)(lVar4 + 0x44);
  plVar7 = (long *)(lVar6 + 0x48);
  (**(code **)(*plVar7 + 0x10))(plVar7);
  lVar4 = param_1 + (ulong)uVar1 * 1000 + (ulong)uVar2 * 200;
  FUN__text__003c7c60(lVar6,lVar4 + 0x13f8,1);
  FUN__text__0012c378(*(long *)(param_1 + 8) + 0x110,lVar4 + 0x14a0);
  (**(code **)(*plVar7 + 0x18))(plVar7);
  (**(code **)(*plVar5 + 0x18))(plVar5);
  FUN__text__001be704(*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x68));
  FUN__text__001be704(*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x88));
  if (lVar3 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x001be6e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  return;
}



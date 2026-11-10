/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004d9ab8; name: FUN_.text__004d9ab8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004d9ab8(long *param_1,uint param_2)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 local_28;
  
  local_28 = (**(code **)(*param_1 + 0x38))();
  uVar2 = (**(code **)(*param_1 + 0x40))(param_1);
  FUN__text__0046c3b0(param_1,&local_28,uVar2 & 1);
  (**(code **)(*(long *)param_1[0x3a] + 0x130))((long *)param_1[0x3a],1);
  plVar1 = _DAT_008a4938;
  lVar3 = param_1[0x44];
  lVar4 = param_1[0xe];
  if (lVar3 == 0 && lVar4 == 0) {
    if ((long *)*_DAT_008a4938 != param_1) goto LAB__text__004d9b70;
    lVar5 = 0;
    lVar3 = 0;
  }
  else {
    lVar5 = 0;
    if (lVar4 != 0) {
      *(long *)(lVar4 + 0x220) = lVar3;
      lVar3 = param_1[0x44];
      lVar5 = param_1[0xe];
    }
  }
  if ((long *)*plVar1 != param_1) {
    plVar1 = (long *)(lVar3 + 0x70);
  }
  *plVar1 = lVar5;
  param_1[0x44] = 0;
  param_1[0xe] = 0;
LAB__text__004d9b70:
  FUN__text__00477910(param_1,param_2 & 1);
  return;
}



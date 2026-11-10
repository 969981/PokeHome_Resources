/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006a8cbc; name: FUN_.text__006a8cbc
 */


long * FUN__text__006a8cbc(long param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  lVar2 = FUN__text__006a30c8(param_1,param_3);
  if (lVar2 == 0) {
    plVar3 = (long *)0x0;
  }
  else {
    local_50 = 0;
    uStack_48 = 0;
    local_60 = 0;
    local_58 = 0;
    FUN__text__00699a30(&local_60,lVar2);
    uVar1 = local_58;
    plVar3 = (long *)FUN__text__006a0f04(0x70);
    FUN__text__006a9034();
    plVar4 = plVar3 + 1;
    lVar2 = *plVar4;
    plVar5 = (long *)(param_1 + 8);
    *plVar4 = *plVar5;
    *(long **)(lVar2 + 8) = plVar5;
    *(long **)(*plVar5 + 8) = plVar4;
    *plVar5 = lVar2;
    (**(code **)(*plVar3 + 0x40))(plVar3,param_2,*(undefined8 *)(param_1 + 0x40),uVar1);
    FUN__text__006a9100(plVar3,&local_60,param_1,*(undefined8 *)(param_1 + 0x20),param_4 & 1);
  }
  return plVar3;
}



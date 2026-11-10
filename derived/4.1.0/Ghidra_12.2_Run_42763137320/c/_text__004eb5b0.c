/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004eb5b0; name: FUN_.text__004eb5b0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__004eb5b0(long param_1,long param_2,int param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_170 [264];
  long local_68 [5];
  
  FUN__text__004f6114(auStack_170,*(undefined8 *)(param_1 + 0x10),0);
  if (local_68[0] != 0) {
    for (; param_3 != 0; param_3 = param_3 + -1) {
      (**(code **)(**(long **)(param_1 + 0x10) + 0xb8))(*(long **)(param_1 + 0x10),auStack_170,0);
    }
    plVar1 = (long *)FUN__text__00400f80(0,0x28);
    lVar2 = _DAT_008a5010;
    if (plVar1 != (long *)0x0) {
      *(undefined4 *)(plVar1 + 3) = 1;
      *plVar1 = lVar2 + 0x10;
      lVar2 = FUN__text__004f6970(auStack_170,0);
      lVar2 = FUN__text__004f52d4(local_68,param_4 - lVar2);
      plVar1[1] = lVar2;
      plVar1[4] = param_2;
      if (*(long *)(local_68[0] + 0x10) == 0) {
        *(long **)(local_68[0] + 0x10) = plVar1;
        uVar3 = 1;
        plVar1[2] = 0;
      }
      else {
        uVar3 = 1;
        plVar1[2] = *(long *)(local_68[0] + 0x10);
        *(long **)(local_68[0] + 0x10) = plVar1;
      }
      goto LAB__text__004eb6a0;
    }
  }
  uVar3 = 2;
LAB__text__004eb6a0:
  FUN__text__004f6174(auStack_170);
  return uVar3;
}



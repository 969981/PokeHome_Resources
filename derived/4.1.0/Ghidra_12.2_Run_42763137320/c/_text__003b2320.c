/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003b2320; name: FUN_.text__003b2320
 */


undefined8 FUN__text__003b2320(long *param_1,char *param_2)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  undefined4 local_18;
  undefined4 uStack_14;
  
  if ((char)param_1[0x10a] == '\0') {
    return 0;
  }
  uVar1 = (**(code **)(*param_1 + 0xe8))();
  if (uVar1 < 2) {
    return 0;
  }
  if (*(long *)param_1[0x104] == 0) {
LAB__text__003b23dc:
    if ((((((int)param_1[0x112] != 2) && (*(char *)((long)param_1 + 0x82) != '\0')) &&
         ((int)param_1[0x112] == 0)) &&
        ((*(char *)((long)param_1 + 0x84) != '\0' &&
         (plVar2 = (long *)FUN__text__003ae040(param_1[0x104]), plVar2 != (long *)0x0)))) &&
       ((uVar4 = (**(code **)(*plVar2 + 0x68))(), (uVar4 & 1) != 0 &&
        (((int)param_1[0x112] == 0 &&
         (uVar4 = (**(code **)(*param_1 + 0xb8))(param_1,param_2), (uVar4 & 1) != 0)))))) {
      if (param_2[1] != '\0') {
        local_18 = *(undefined4 *)(param_2 + 0xc);
        uStack_14 = *(undefined4 *)(param_2 + 0x10);
        uVar4 = FUN__text__003b6d98(param_1[0xfc],&local_18);
        if ((uVar4 & 1) != 0) {
          return 1;
        }
      }
      local_18 = *(undefined4 *)(param_2 + 0xc);
      uStack_14 = *(undefined4 *)(param_2 + 0x10);
      uVar4 = FUN__text__003ae464(param_1,&local_18);
      if ((uVar4 & 1) != 0) {
        return 1;
      }
    }
  }
  else {
    plVar2 = (long *)(*(code *)**(undefined8 **)(*(long *)param_1[0x104] + 0x50))();
    plVar3 = (long *)FUN__text__003b37cc();
    if (plVar3 != plVar2) {
      do {
        plVar2 = (long *)*plVar2;
      } while (plVar2 != plVar3 && plVar2 != (long *)0x0);
      if (plVar2 == (long *)0x0) goto LAB__text__003b23dc;
    }
    if (((int)param_1[0x112] == 2) && (*param_2 != '\0')) {
      return 1;
    }
  }
  return 0;
}



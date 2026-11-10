/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00127c40; name: FUN_.text__00127c40
 */


void FUN__text__00127c40(long param_1,long param_2,uint param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  lVar3 = 0x60;
  if ((param_3 & 1) == 0) {
    lVar3 = 0x68;
  }
  uVar4 = *(undefined8 *)(param_1 + lVar3);
  plVar1 = (long *)FUN__text__00128da0(uVar4);
  plVar1 = (long *)(**(code **)(*plVar1 + 0x10))();
  if ((long *)plVar1[1] == (long *)*plVar1) goto LAB__text__00127cec;
  uVar5 = *(undefined8 *)(param_1 + 0x70);
  lVar3 = *(long *)*plVar1;
  if ((lVar3 == 0) || (puVar6 = *(undefined8 **)(lVar3 + 0x60), puVar6 == (undefined8 *)0x0)) {
LAB__text__00127ce0:
    puVar6 = (undefined8 *)0x0;
  }
  else {
    plVar1 = (long *)(**(code **)*puVar6)(puVar6);
    plVar2 = (long *)FUN__text__001280e4();
    if (plVar2 != plVar1) {
      do {
        plVar1 = (long *)*plVar1;
      } while (plVar1 != plVar2 && plVar1 != (long *)0x0);
      if (plVar1 == (long *)0x0) goto LAB__text__00127ce0;
    }
    puVar6 = puVar6 + -10;
  }
  FUN__text__00129094(uVar5,puVar6);
LAB__text__00127cec:
  if (param_2 == 0) {
    return;
  }
  FUN__text__00129094(uVar4,param_2);
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00654034; name: FUN_.text__00654034
 */


undefined8 FUN__text__00654034(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  if (param_1 != (long *)0x0) {
    lVar2 = *param_1;
    lVar1 = (*(code *)param_1[1])(param_2,param_3,(long)(int)param_1[4]);
    for (plVar3 = *(long **)(lVar2 + lVar1 * 0x20); plVar3 != (long *)0x0;
        plVar3 = (long *)plVar3[2]) {
      lVar1 = *plVar3;
      lVar2 = (*(code *)param_1[2])(lVar1 + 0x28,*(undefined8 *)(lVar1 + 0x20),param_2,param_3);
      if (lVar2 != 0) {
        return *(undefined8 *)(lVar1 + 0x18);
      }
    }
  }
  return 0;
}



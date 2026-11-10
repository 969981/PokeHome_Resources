/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006d4424; name: FUN_.text__006d4424
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006d4424(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  
  FUN__text__006f5d9c(param_1 + 0x178);
  (*(code *)*_DAT_008a5388)
            (*(undefined8 *)(param_1 + 0x160),*(undefined8 *)(param_1 + 0x168),
             *(undefined8 *)(param_1 + 0x170),0,*_DAT_008a5390,0);
  *(undefined8 *)(param_1 + 0x168) = 0;
  *(undefined8 *)(param_1 + 0x170) = 0;
  *(undefined8 *)(param_1 + 0x160) = 0;
  if (*(long *)(param_1 + 0x1c8) != 0) {
    FUN__text__006f45d0(*(long *)(param_1 + 0x1c8),param_2);
    lVar2 = *(long *)(param_1 + 0x1c8);
    if (lVar2 != 0) {
      FUN__text__006f4420(lVar2);
      FUN__text__006a0f24(lVar2);
    }
    *(undefined8 *)(param_1 + 0x1c8) = 0;
  }
  plVar1 = *(long **)(param_1 + 0x1c0);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
    plVar1 = *(long **)(param_1 + 0x1c0);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))(plVar1);
      FUN__text__006a0f24(plVar1);
    }
    *(undefined8 *)(param_1 + 0x1c0) = 0;
  }
  return;
}



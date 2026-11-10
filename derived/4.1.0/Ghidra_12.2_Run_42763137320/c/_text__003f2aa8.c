/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003f2aa8; name: FUN_.text__003f2aa8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN__text__003f2aa8(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  
  plVar1 = _DAT_0089f5d0;
  if (*param_2 != 0) {
    plVar1 = (long *)(*param_2 + 0x60);
  }
  plVar2 = param_2 + 2;
  if (param_2[3] != 0) {
    plVar2 = plVar1;
  }
  iVar3 = (**(code **)(*(long *)*param_1 + 0x30))((long *)*param_1,*plVar2);
  return iVar3 == 1;
}



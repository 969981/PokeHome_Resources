/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0045cd78; name: FUN_.text__0045cd78
 */


void FUN__text__0045cd78(undefined8 param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  
  if (((*param_2 == 0) || (plVar1 = *(long **)(*param_2 + 0x80), plVar1 == (long *)0x0)) ||
     (lVar2 = (**(code **)(*plVar1 + 0x110))(), lVar2 == 0)) {
    FUN__text__0045cc38(param_1);
    return;
  }
  FUN__text__0045cc44(param_1,lVar2,param_2[2]);
  return;
}



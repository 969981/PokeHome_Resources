/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001c6ea8; name: FUN_.text__001c6ea8
 */


void FUN__text__001c6ea8(long param_1,uint param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = (long *)(param_1 + 0x28);
  *plVar1 = 0x4ae972a16c4cd0b3;
  lVar3 = *(long *)(*(long *)(param_1 + 8) + 0x2d0);
  if (lVar3 != 0) {
    plVar2 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar2 + 0x10))(plVar2);
    if (*plVar1 != 0) {
      FUN__text__003c7c60(lVar3,plVar1,param_2 & 1);
    }
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  if ((param_2 & 1) == 0) {
    *plVar1 = 0;
  }
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004dbc68; name: FUN_.text__004dbc68
 */


void FUN__text__004dbc68(long param_1,int *param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  int local_4;
  
  local_4 = *param_2;
  if (*(short *)(param_1 + 0xca) == 0) {
    lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
    lVar1 = 0;
    if (lVar3 != 0) {
      lVar1 = lVar3 + -0x18;
    }
    if ((*(short *)(lVar1 + 0x160) == 0) &&
       (iVar2 = (**(code **)(**(long **)(param_1 + 0xd0) + 0x48))
                          (*(long **)(param_1 + 0xd0),&local_4), iVar2 != 0x2d)) {
      return;
    }
  }
  if (local_4 != 0) {
    iVar2 = (**(code **)(**(long **)(param_1 + 8) + 0x20))(*(long **)(param_1 + 8),&local_4);
    *(bool *)(param_1 + 200) = iVar2 == 0x11;
  }
  return;
}



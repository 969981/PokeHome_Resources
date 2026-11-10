/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003a9338; name: FUN_.text__003a9338
 */


bool FUN__text__003a9338(long param_1)

{
  int iVar1;
  long lVar2;
  long *local_40;
  undefined8 uStack_38;
  long local_18;
  
  iVar1 = *(int *)(*(long *)(param_1 + 0x3d0) + 0x60);
  if (iVar1 == 0) {
    local_40 = *(long **)(*(long *)(param_1 + 0x3e0) + 0x88);
    (**(code **)(**(long **)(param_1 + 0x98) + 0x60))(*(long **)(param_1 + 0x98),&local_40,0);
    uStack_38 = FUN__text__003b5bc4(*(undefined8 *)(param_1 + 0x408),
                                    *(undefined4 *)(param_1 + 0x3c8));
    local_40 = &local_18;
    local_18 = 0;
    FUN__text__003aa1c0(param_1,&local_40,0);
    local_40 = *(long **)(local_18 + 0x88);
    (**(code **)(**(long **)(param_1 + 0x98) + 0x60))(*(long **)(param_1 + 0x98),&local_40,1);
    lVar2 = *(long *)(param_1 + 0x3b8);
    *(undefined8 *)(lVar2 + 0x150) = 0;
    *(undefined1 *)(lVar2 + 0x149) = 1;
    if ((*(long *)(lVar2 + 0xb0) != -0x340d631b7bddd9bb) && (*(long *)(lVar2 + 0xb0) != 0)) {
      (**(code **)(**(long **)(lVar2 + 0x98) + 0x78))();
    }
  }
  return iVar1 == 0;
}



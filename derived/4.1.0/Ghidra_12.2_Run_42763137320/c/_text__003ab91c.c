/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003ab91c; name: FUN_.text__003ab91c
 */


undefined8 FUN__text__003ab91c(long param_1,long param_2)

{
  ulong uVar1;
  long local_38;
  
  local_38 = *(long *)(param_1 + 0xb0);
  if (((((((local_38 == -0x340d631b7bddd9bb || local_38 == 0) ||
          (uVar1 = (**(code **)(**(long **)(param_1 + 0x98) + 0x68))
                             (*(long **)(param_1 + 0x98),&local_38), (uVar1 & 1) == 0)) ||
         (*(int *)(param_1 + 0x1e0) == 8)) ||
        ((*(ulong *)(param_2 + 8) & (&DAT_00ae8488)[(long)*(int *)(param_1 + 0x1e0) * 6]) == 0)) &&
       (((local_38 = *(long *)(param_1 + 200), local_38 == -0x340d631b7bddd9bb || (local_38 == 0))
        || ((uVar1 = (**(code **)(**(long **)(param_1 + 0x98) + 0x68))
                               (*(long **)(param_1 + 0x98),&local_38), (uVar1 & 1) == 0 ||
            ((*(int *)(param_1 + 0x210) == 8 ||
             ((*(ulong *)(param_2 + 8) & (&DAT_00ae8488)[(long)*(int *)(param_1 + 0x210) * 6]) == 0)
             ))))))) &&
      ((((local_38 = *(long *)(param_1 + 0xe0), local_38 == -0x340d631b7bddd9bb ||
         (((local_38 == 0 ||
           (uVar1 = (**(code **)(**(long **)(param_1 + 0x98) + 0x68))
                              (*(long **)(param_1 + 0x98),&local_38), (uVar1 & 1) == 0)) ||
          (*(int *)(param_1 + 0x240) == 8)))) ||
        ((*(ulong *)(param_2 + 8) & (&DAT_00ae8488)[(long)*(int *)(param_1 + 0x240) * 6]) == 0)) &&
       (((local_38 = *(long *)(param_1 + 0xf8), local_38 == -0x340d631b7bddd9bb || (local_38 == 0))
        || ((uVar1 = (**(code **)(**(long **)(param_1 + 0x98) + 0x68))
                               (*(long **)(param_1 + 0x98),&local_38), (uVar1 & 1) == 0 ||
            ((*(int *)(param_1 + 0x270) == 8 ||
             ((*(ulong *)(param_2 + 8) & (&DAT_00ae8488)[(long)*(int *)(param_1 + 0x270) * 6]) == 0)
             ))))))))) &&
     ((local_38 = *(long *)(param_1 + 0x110), local_38 == -0x340d631b7bddd9bb ||
      ((((local_38 == 0 ||
         (uVar1 = (**(code **)(**(long **)(param_1 + 0x98) + 0x68))
                            (*(long **)(param_1 + 0x98),&local_38), (uVar1 & 1) == 0)) ||
        (*(int *)(param_1 + 0x2a0) == 8)) ||
       ((*(ulong *)(param_2 + 8) & (&DAT_00ae8488)[(long)*(int *)(param_1 + 0x2a0) * 6]) == 0))))))
  {
    return 0;
  }
  return 1;
}



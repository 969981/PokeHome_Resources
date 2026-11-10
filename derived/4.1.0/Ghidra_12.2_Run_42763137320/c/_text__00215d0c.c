/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00215d0c; name: FUN_.text__00215d0c
 */


void FUN__text__00215d0c(undefined4 *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 2);
  *(undefined8 *)(param_1 + 2) = 0;
  if (lVar1 != 0) {
    (**(code **)(**(long **)(param_1 + 4) + 0x18))
              (*(long **)(param_1 + 4),lVar1,*(undefined8 *)(param_1 + 6),
               *(undefined8 *)(param_1 + 8));
  }
  lVar1 = *(long *)(param_1 + 0x12);
  *(undefined8 *)(param_1 + 0xf) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  if (lVar1 != 0) {
    (**(code **)(**(long **)(param_1 + 0x14) + 0x18))
              (*(long **)(param_1 + 0x14),lVar1,*(undefined8 *)(param_1 + 0x16),
               *(undefined8 *)(param_1 + 0x18));
    lVar1 = *(long *)(param_1 + 0x12);
    *(undefined8 *)(param_1 + 0x12) = 0;
    if (lVar1 != 0) {
      (**(code **)(**(long **)(param_1 + 0x14) + 0x18))
                (*(long **)(param_1 + 0x14),lVar1,*(undefined8 *)(param_1 + 0x16),
                 *(undefined8 *)(param_1 + 0x18));
    }
  }
  lVar1 = *(long *)(param_1 + 0x3a);
  *(undefined8 *)(param_1 + 0x32) = 0;
  *(undefined8 *)(param_1 + 0x34) = 0;
  *(undefined8 *)(param_1 + 0x37) = 0;
  *(undefined8 *)(param_1 + 0x3a) = 0;
  *(undefined8 *)(param_1 + 0x2e) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x2a) = 0;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)(param_1 + 0x26) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x22) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  if (lVar1 != 0) {
    (**(code **)(**(long **)(param_1 + 0x3c) + 0x18))
              (*(long **)(param_1 + 0x3c),lVar1,*(undefined8 *)(param_1 + 0x3e),
               *(undefined8 *)(param_1 + 0x40));
    lVar1 = *(long *)(param_1 + 0x3a);
    *(undefined8 *)(param_1 + 0x3a) = 0;
    if (lVar1 != 0) {
      (**(code **)(**(long **)(param_1 + 0x3c) + 0x18))
                (*(long **)(param_1 + 0x3c),lVar1,*(undefined8 *)(param_1 + 0x3e),
                 *(undefined8 *)(param_1 + 0x40));
    }
  }
  *(undefined8 *)(param_1 + 0x5a) = 0;
  *(undefined8 *)(param_1 + 0x5c) = 0;
  *param_1 = 0;
  param_1[0xc] = 0;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  *(undefined8 *)(param_1 + 0x56) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x52) = 0;
  *(undefined8 *)(param_1 + 0x54) = 0;
  *(undefined8 *)(param_1 + 0x4e) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x4a) = 0;
  *(undefined8 *)(param_1 + 0x4c) = 0;
  *(undefined8 *)(param_1 + 0x46) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x42) = 0;
  *(undefined8 *)(param_1 + 0x44) = 0;
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0065a4c8; name: FUN_.text__0065a4c8
 */


void FUN__text__0065a4c8(long param_1)

{
  int iVar1;
  
  if ((*(long *)(param_1 + 0xd8) != 0) &&
     ((*(long *)(param_1 + 0x1290) != 0 || (*(int *)(param_1 + 0x1298) != 0)))) {
    iVar1 = FUN__text__0066c120(*(undefined8 *)(*(long *)(param_1 + 0xd8) + 0xb0),param_1 + 0x12a0);
    if (iVar1 != 0) {
      FUN__text__00666f74(param_1,0x719833,iVar1);
    }
    if (*(long *)(param_1 + 0x12f0) != 0) {
      do {
        FUN__text__00656b90(param_1 + 0x12d8,*(undefined8 *)(param_1 + 0x12e0),0);
      } while (*(long *)(param_1 + 0x12f0) != 0);
    }
    *(undefined8 *)(param_1 + 0x1290) = 0;
    *(undefined4 *)(param_1 + 0x1298) = 0;
  }
  return;
}



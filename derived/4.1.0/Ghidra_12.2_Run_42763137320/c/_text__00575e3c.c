/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00575e3c; name: FUN_.text__00575e3c
 */


void FUN__text__00575e3c(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x158);
  if (((*(char *)(lVar1 + 0x98) != '\0') && (*(int *)(lVar1 + 0x88) != 0)) &&
     ((*(int *)(lVar1 + 0x88) != 1 || (*(char *)(param_1 + 0x138) != '\0')))) {
    uVar2 = NEON_ucvtf(*(undefined4 *)(param_1 + 0x130));
    FUN__text__0057bf1c(uVar2,*(undefined4 *)(lVar1 + 0x28),*(undefined4 *)(lVar1 + 0x24),
                        *(undefined4 *)(lVar1 + 0x2c),
                        *(long *)(param_1 + 0x148) + (ulong)*(byte *)(param_1 + 0x136) * 0xa0 + 0x10
                        ,*(undefined4 *)(lVar1 + 0x8c));
    *(undefined4 *)(*(long *)(param_1 + 0x148) + (ulong)*(byte *)(param_1 + 0x136) * 0xa0 + 0x90) =
         *(undefined4 *)(*(long *)(param_1 + 0x158) + 0x88);
    lVar1 = *(long *)(param_1 + 0x158);
    if ((*(int *)(lVar1 + 0x88) == 1) && (*(char *)(param_1 + 0x138) == '\x02')) {
      uVar2 = NEON_ucvtf(*(undefined4 *)(param_1 + 0x130));
      FUN__text__0057bf1c(uVar2,*(undefined4 *)(lVar1 + 0x28),*(undefined4 *)(lVar1 + 0x24),
                          *(undefined4 *)(lVar1 + 0x2c),
                          *(long *)(param_1 + 0x148) + (ulong)*(byte *)(param_1 + 0x136) * 0xa0 +
                          0xb0,*(undefined4 *)(lVar1 + 0x8c));
      *(undefined4 *)(*(long *)(param_1 + 0x148) + (ulong)*(byte *)(param_1 + 0x136) * 0xa0 + 0x130)
           = *(undefined4 *)(*(long *)(param_1 + 0x158) + 0x88);
    }
  }
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00663e0c; name: FUN_.text__00663e0c
 */


void FUN__text__00663e0c(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  long lVar2;
  
  if ((*(long *)(param_1 + 0xee8) == 0) ||
     (lVar2 = *(long *)(*(long *)(param_1 + 0xee8) + 0x1e8), lVar2 == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(lVar2 + 0x218);
  }
  FUN__text__00679e74(param_2,uVar1,*(undefined4 *)(param_1 + 0xef0),
                      *(ulong *)(param_1 + 0xf40) >> 0x34 & 1);
  *(undefined4 *)(param_1 + 0x1540) = *(undefined4 *)(param_1 + 0xef0);
  *(ushort *)(param_1 + 0x15a4) =
       *(ushort *)(param_1 + 0xf45) & 0x1000 | *(ushort *)(param_1 + 0x15a4) & 0xefff;
  *(undefined8 *)(param_1 + 0x1538) = *(undefined8 *)(param_1 + 0xee8);
  return;
}


